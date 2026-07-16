`timescale 1ns/1ps

module obi_decoder_router #(
    // Memory Map Configuration
    parameter logic [31:0] SRAM_BASE_ADDR = 32'h2000_0000,
    parameter logic [31:0] SRAM_ADDR_MASK = 32'hFFF0_0000,
    parameter logic [31:0] DEAD_BEEF_VAL  = 32'hDEAD_BEEF
) (
    input  logic        clk_i,
    input  logic        reset_n_i, // Active-low synchronous reset

    // =========================================================================
    // CORE-FACING PORT (OBI Master side)
    // =========================================================================
    input  logic        data_req_i,
    input  logic        data_we_i,
    input  logic [3:0]  data_be_i,
    input  logic [31:0] data_addr_i,
    input  logic [31:0] data_wdata_i,
    output logic        data_gnt_o,
    output logic        data_rvalid_o,
    output logic [31:0] data_rdata_o,

    // =========================================================================
    // SUBORDINATE-FACING PORT (SRAM Wrapper)
    // =========================================================================
    output logic        sram_req_o,
    output logic        sram_we_o,
    output logic [3:0]  sram_be_o,
    output logic [31:0] sram_addr_o,
    output logic [31:0] sram_wdata_o,
    input  logic        sram_gnt_i,
    input  logic        sram_rvalid_i,
    input  logic [31:0] sram_rdata_i
);

    // =========================================================================
    // ROUTING ENUMERATIONS & WIRES
    // =========================================================================
    typedef enum logic [1:0] {
        TGT_NONE = 2'b00,
        TGT_SRAM = 2'b01,
        TGT_ERR  = 2'b10
    } target_e;

    target_e req_target;
    target_e resp_target_reg;
    logic outstanding_q;  

    logic        err_req;
    logic        err_gnt;
    logic        err_rvalid;
    logic [31:0] err_rdata;

    // =========================================================================
    // 1. ADDRESS DECODING (Combinational)
    // =========================================================================
    always_comb begin
        req_target = TGT_ERR; // Default for unmapped addresses
        if ((data_addr_i & SRAM_ADDR_MASK) == SRAM_BASE_ADDR) begin
            req_target = TGT_SRAM;
        end
    end

    // =========================================================================
    // 2. REQUEST DEMUX & PAYLOAD BROADCAST
    // =========================================================================
    always_comb begin
        sram_req_o = 1'b0;
        err_req    = 1'b0;

        if (!outstanding_q) begin
            case (req_target)
                TGT_SRAM: sram_req_o = data_req_i;
                TGT_ERR:  err_req    = data_req_i;
                default:  err_req    = data_req_i;
            endcase
        end
    end

    assign sram_we_o    = data_we_i;
    assign sram_be_o    = data_be_i;
    assign sram_addr_o  = data_addr_i;
    assign sram_wdata_o = data_wdata_i;

    // =========================================================================
    // 3. GRANT MULTIPLEXER (Combinational)
    // =========================================================================
    always_comb begin
    data_gnt_o = 1'b0;
    if (!outstanding_q) begin
        case (req_target)
            TGT_SRAM: data_gnt_o = sram_gnt_i;
            TGT_ERR:  data_gnt_o = err_gnt;
            default:  data_gnt_o = err_gnt;
        endcase
    end
end

    // =========================================================================
    // 4. LATCH OUTSTANDING TARGET (Sequential)
    // =========================================================================
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            resp_target_reg <= TGT_NONE;
        end else if (data_req_i && data_gnt_o) begin
            resp_target_reg <= req_target;
        end
    end

    // =========================================================================
    // 4b. OUTSTANDING TRANSACTION TRACKER
    // =========================================================================
    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) begin
            outstanding_q <= 1'b0;
        end else if (data_req_i && data_gnt_o) begin
            outstanding_q <= 1'b1;
        end else if (data_rvalid_o) begin
            outstanding_q <= 1'b0;
        end
    end

    // =========================================================================
    // 5. RESPONSE MULTIPLEXER (Combinational)
    // =========================================================================
    always_comb begin
        data_rvalid_o = 1'b0;
        data_rdata_o  = 32'b0;
        
        case (resp_target_reg)
            TGT_SRAM: begin
                data_rvalid_o = sram_rvalid_i;
                data_rdata_o  = sram_rdata_i;
            end
            TGT_ERR: begin
                data_rvalid_o = err_rvalid;
                data_rdata_o  = err_rdata;
            end
            default: ; 
        endcase
    end

    // =========================================================================
    // 6. DEFAULT / ERROR PATH SUBORDINATE FSM
    // =========================================================================
    typedef enum logic [1:0] {
        ERR_IDLE   = 2'b00,
        ERR_GNT    = 2'b01,
        ERR_RVALID = 2'b10
    } err_state_e;

    err_state_e err_state, err_next;

    always_ff @(posedge clk_i or negedge reset_n_i) begin
        if (!reset_n_i) err_state <= ERR_IDLE;
        else            err_state <= err_next;
    end

    always_comb begin
        err_next   = err_state;
        err_gnt    = 1'b0;
        err_rvalid = 1'b0;

        case (err_state)
            ERR_IDLE: begin
                if (err_req) err_next = ERR_GNT;
            end
            ERR_GNT: begin
                err_gnt  = 1'b1;        
                err_next = ERR_RVALID;  
            end
            ERR_RVALID: begin
                err_rvalid = 1'b1;      
                err_next   = ERR_IDLE;  
            end
            default: err_next = ERR_IDLE;
        endcase
    end

    assign err_rdata = DEAD_BEEF_VAL;

endmodule