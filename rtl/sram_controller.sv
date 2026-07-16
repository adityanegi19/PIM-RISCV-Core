` timescale 1ns/1ps

// =============================================================================
// sram_ctrl.sv — Dual-Port Synchronous BRAM Controller with PIM
// =============================================================================

module sram_ctrl #(
    parameter int ADDR_WIDTH = 19
) (
    input  logic                  clk,
    input  logic                  reset,

    // OBI wrapper interface
    input  logic                  mem,
    input  logic                  rw,
    input  logic [ADDR_WIDTH-1:0] addr,
    input  logic [31:0]           data_f2s,
    input  logic [3:0]            be,
    output logic                  ready,
    output logic [31:0]           data_s2f_r,

    // PIM sideband
    input  logic [1:0]            pim_cmd,    // 00=normal  01=add.p  10=mul.p
    input  logic [31:0]           pim_imm1,   
    input  logic [31:0]           pim_imm2,
    input  logic [31:0]           pim_base_addr    
);

    localparam int DEPTH = 1 << ADDR_WIDTH;
    logic [31:0] mem_array [0:DEPTH-1];

    // =========================================================================
    // FSM (1-bit)
    // =========================================================================
    typedef enum logic [1:0] { IDLE = 2'b00, ACC = 2'b01, MUL_WAIT = 2'b10 } state_t;
    state_t state_reg;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) state_reg <= IDLE;
        else case (state_reg)
            IDLE:     state_reg <= mem ? ACC : IDLE;
            ACC:      state_reg <= (pim_cmd_q == 2'b10) ? MUL_WAIT : IDLE;
            MUL_WAIT: state_reg <= IDLE;
            default:  state_reg <= IDLE;
        endcase
    end

    assign ready = (state_reg == IDLE);

    // =========================================================================
    // Issue Registers
    // =========================================================================
    logic [ADDR_WIDTH-1:0] addr_a_reg;
    logic [ADDR_WIDTH-1:0] addr_b_reg;
    logic [1:0]            pim_cmd_q;
    logic                  is_read_q; // Restored (1-bit) to prevent dummy reads

    // One extra bit captures carry-out (positive overflow) or borrow
    // (negative underflow) without widening the stored register.
    // pim_imm1/2 arrive already sign-extended from 6 bits to 32 bits,
    // so [19:0] gives the correct 20-bit signed representation.
    logic [ADDR_WIDTH:0] addr_a_sum;   // 20 bits: [19] is the overflow flag
    logic [ADDR_WIDTH:0] addr_b_sum;

    assign addr_a_sum = {1'b0, pim_base_addr[20:2]} + pim_imm1[ADDR_WIDTH:0];
    assign addr_b_sum = {1'b0, pim_base_addr[20:2]} + pim_imm2[ADDR_WIDTH:0];

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            addr_a_reg <= '0;
            addr_b_reg <= '0;
            pim_cmd_q  <= 2'b00;
            is_read_q  <= 1'b0;
        end else if (state_reg == IDLE && mem) begin
            
            is_read_q <= rw; 
            pim_cmd_q <= rw ? pim_cmd : 2'b00; // Force normal cmd on writes

            if (rw && pim_cmd != 2'b00) begin
                // Port A address with clamped saturation
                if (addr_a_sum[ADDR_WIDTH])
                    addr_a_reg <= pim_imm1[5] ? {ADDR_WIDTH{1'b0}}   // underflow → 0
                                               : {ADDR_WIDTH{1'b1}};  // overflow  → max
                else
                    addr_a_reg <= addr_a_sum[ADDR_WIDTH-1:0];

                // Port B address with clamped saturation
                if (addr_b_sum[ADDR_WIDTH])
                    addr_b_reg <= pim_imm2[5] ? {ADDR_WIDTH{1'b0}}
                                               : {ADDR_WIDTH{1'b1}};
                else
                    addr_b_reg <= addr_b_sum[ADDR_WIDTH-1:0];

            end else begin
                addr_a_reg <= addr;
            end
        end
    end
    `ifndef SYNTHESIS
        always_ff @(posedge clk) begin
            if (state_reg == IDLE && mem && rw && pim_cmd != 2'b00) begin
                assert (!addr_a_sum[ADDR_WIDTH])
                    else $error("[sram_ctrl] PIM Port-A address out of range: base_word=0x%05x  imm=%0d  result_word=0x%06x",
                                pim_base_addr[20:2], $signed(pim_imm1[5:0]), addr_a_sum);
                assert (!addr_b_sum[ADDR_WIDTH])
                    else $error("[sram_ctrl] PIM Port-B address out of range: base_word=0x%05x  imm=%0d  result_word=0x%06x",
                                pim_base_addr[20:2], $signed(pim_imm2[5:0]), addr_b_sum);
            end
        end
    `endif

    // =========================================================================
    // TRUE DUAL-PORT BRAM INFERENCE (The Hardware Fix)
    //
    // Port A is explicitly multiplexed: Handles Writes in IDLE, Reads in ACC.
    // Port B is Read-Only: Handles PIM Operand 2 in ACC.
    // Notice: NO asynchronous resets in this block to preserve BRAM Fmax.
    // =========================================================================
    logic [ADDR_WIDTH-1:0] port_a_addr;
    logic [31:0] rdata_a_q;
    logic [31:0] rdata_b_q;
    logic [31:0] mul_result_q;

    // Multiplex the address for Port A so synthesis sees exactly ONE address net
    assign port_a_addr = (state_reg == IDLE) ? addr : addr_a_reg;

    always_ff @(posedge clk) begin
        // --- PORT A (Read/Write) ---
        if (reset) begin
            rdata_a_q <= 32'b0;
        end
        else if (state_reg == IDLE && mem && !rw) begin
            // Synchronous Byte-Masked Write
            if (be[0]) mem_array[port_a_addr][ 7: 0] <= data_f2s[ 7: 0];
            if (be[1]) mem_array[port_a_addr][15: 8] <= data_f2s[15: 8];
            if (be[2]) mem_array[port_a_addr][23:16] <= data_f2s[23:16];
            if (be[3]) mem_array[port_a_addr][31:24] <= data_f2s[31:24];
        end 
        else if (state_reg == ACC && is_read_q) begin
            // Synchronous Read (Gated cleanly by is_read_q)
            rdata_a_q <= mem_array[port_a_addr];
        end

        // --- PORT B (Read Only) ---
        if (reset) begin
            rdata_b_q <= 32'b0;
        end
        else if (state_reg == ACC && is_read_q && pim_cmd_q != 2'b00) begin
            rdata_b_q <= mem_array[addr_b_reg];
        end
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            mul_result_q <= 32'b0;
        end
        else if (state_reg == MUL_WAIT) begin
            mul_result_q <= rdata_a_q * rdata_b_q;
        end
    end

    // =========================================================================
    // PIM ALU + Result Mux
    // =========================================================================
    always_comb begin
        case (pim_cmd_q)
            2'b01:   data_s2f_r = rdata_a_q + rdata_b_q;   // add.p
            2'b10:   data_s2f_r = mul_result_q;   // mul.p
            default: data_s2f_r = rdata_a_q;               // normal read / write
        endcase
    end

endmodule