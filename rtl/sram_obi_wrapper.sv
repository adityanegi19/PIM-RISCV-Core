`timescale 1ns/1ps

// =============================================================================
// obi_sram_wrapper.sv  --  OBI-to-SRAM bridge for parallel two x16 memory
//
// With both x16 chips wired in parallel, every sram_ctrl access produces a
// full 32-bit result in one FSM round-trip.  The wrapper therefore needs only
// a SINGLE wait state (ST_WAIT) instead of the previous ST_WAIT0 + ST_WAIT1.
//
// Key differences from the prior two-beat design:
//   - FSM: 3 states  (ST_IDLE -> ST_WAIT -> ST_DONE)  vs 4 in old design
//   - data_f2s_o / data_s2f_r_i : 32-bit  (was 16-bit)
//   - be_o                       : 4-bit   (was 2-bit), maps 1:1 from data_be_i
//   - addr_o                     : data_addr_i[20:2]  (32-bit word address;
//                                  drops bits [1:0] since each location = 4 B)
//   - No address increment, no rdata_low/hi assembly, no beat sequencer
//   - rvalid pulses for exactly one cycle when ST_DONE is reached
//
// OBI compliance notes:
//   - data_gnt_o is combinational (same-cycle grant from ST_IDLE + req)
//   - data_rvalid_o is one-cycle pulse, not tied to ready_i directly
//   - No stall between gnt and rvalid beyond what the SRAM access requires
// =============================================================================

module obi_sram_wrapper (
    input  logic        clk,
    input  logic        reset_n,      // Active-low reset

    // -------------------------------------------------------------------------
    // OBI data interface  (from / to CV32E40P)
    // -------------------------------------------------------------------------
    input  logic        data_req_i,
    input  logic        data_we_i,
    input  logic [3:0]  data_be_i,
    input  logic [31:0] data_addr_i,
    input  logic [31:0] data_wdata_i,
    output logic        data_gnt_o,
    output logic        data_rvalid_o,
    output logic [31:0] data_rdata_o,

    // -------------------------------------------------------------------------
    // sram_ctrl interface
    // -------------------------------------------------------------------------
    output logic        mem_o,        // Initiate SRAM access
    output logic        rw_o,         // 1 = read, 0 = write
    output logic [18:0] addr_o,       // 19-bit word address
    output logic [3:0]  be_o,         // 4-bit byte enables
    output logic [31:0] data_f2s_o,   // 32-bit write data to SRAM
    input  logic        ready_i,      // SRAM controller idle/ready
    input  logic [31:0] data_s2f_r_i  // 32-bit registered read data from SRAM
);

    // =========================================================================
    // FSM: three states only -- no beat sequencing needed
    // =========================================================================
    typedef enum logic [1:0] {
        ST_IDLE = 2'b00,
        ST_WAIT = 2'b01,   // waiting for sram_ctrl to complete its FSM cycle
        ST_DONE = 2'b10    // one-cycle pulse: present rvalid + rdata, then idle
    } state_e;

    state_e state, next;

    // =========================================================================
    // Datapath registers (latched at grant point)
    // =========================================================================
    logic        we_reg;
    logic [18:0] addr_reg;
    logic [31:0] wdata_reg;
    logic [3:0]  be_reg;

    // =========================================================================
    // OBI grant -- combinational, same cycle as request
    // The wrapper accepts a new transaction only while idle.
    // =========================================================================
    assign data_gnt_o = (state == ST_IDLE) && data_req_i;

    // =========================================================================
    // BLOCK 1: Sequential -- state register
    // =========================================================================
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) state <= ST_IDLE;
        else          state <= next;
    end

    // =========================================================================
    // BLOCK 2: Combinational -- next-state logic
    //
    // ST_IDLE: if a request arrives, move to ST_WAIT.
    //          mem_o is asserted combinationally this same cycle (Block 3),
    //          so sram_ctrl starts its FSM on the very next rising edge.
    //
    // ST_WAIT: hold until sram_ctrl signals ready_i again (it goes low while
    //          the controller is in R1/R2 or W1/W2, comes back high on IDLE).
    //
    // ST_DONE: unconditionally return to ST_IDLE; rvalid/rdata appear for
    //          exactly this one cycle (driven by the sequential block below).
    // =========================================================================
    always_comb begin
        next = state;   // default: hold
        case (state)
            ST_IDLE: if (data_req_i)  next = ST_WAIT;
            ST_WAIT: if (ready_i)     next = ST_DONE;
            ST_DONE:                  next = ST_IDLE;
            default:                  next = ST_IDLE;
        endcase
    end

    // =========================================================================
    // BLOCK 3: Combinational -- sram_ctrl-facing outputs
    //
    // mem_o is pulsed high for the single cycle that the transition
    // ST_IDLE -> ST_WAIT is decided (i.e., in ST_IDLE when data_req_i is
    // asserted).  sram_ctrl latches addr/be/data_f2s on the next rising edge
    // along with the mem=1 signal.
    //
    // All other cycles mem_o = 0; sram_ctrl only acts on the pulse.
    // =========================================================================
    always_comb begin
        // Defaults: hold registered values, no new SRAM command
        mem_o      = 1'b0;
        rw_o       = ~we_reg;
        addr_o     = addr_reg;
        be_o       = be_reg;
        data_f2s_o = wdata_reg;

        if (state == ST_IDLE && data_req_i) begin
            // Issue the single access -- both chips will respond together
            mem_o      = 1'b1;
            rw_o       = ~data_we_i;
            addr_o     = data_addr_i[20:2];  // 32-bit word address (drop [1:0])
            be_o       = data_be_i;           // all 4 byte-enables straight through
            data_f2s_o = data_wdata_i;        // full 32-bit write data
        end
    end

    // =========================================================================
    // BLOCK 4: Sequential -- datapath capture + OBI response
    // =========================================================================
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            we_reg        <= 1'b0;
            addr_reg      <= 19'b0;
            wdata_reg     <= 32'b0;
            be_reg        <= 4'b0;
            data_rvalid_o <= 1'b0;
            data_rdata_o  <= 32'b0;
        end else begin
            // Default: pull rvalid low every cycle unless overridden below
            data_rvalid_o <= 1'b0;

            // -----------------------------------------------------------------
            // Latch the transaction at the moment it is granted (ST_IDLE + req)
            // These are the values sram_ctrl will act on.
            // -----------------------------------------------------------------
            if (state == ST_IDLE && data_req_i) begin
                we_reg    <= data_we_i;
                addr_reg  <= data_addr_i[20:2];
                wdata_reg <= data_wdata_i;
                be_reg    <= data_be_i;
            end

            // -----------------------------------------------------------------
            // Present the OBI response for exactly one cycle.
            // next == ST_DONE is true in the cycle BEFORE we enter ST_DONE,
            // so the registered outputs become valid in the ST_DONE cycle
            // itself -- this is the correct OBI rvalid timing.
            //
            // data_s2f_r_i is valid when ready_i is high (sram_ctrl has
            // returned to IDLE and data_s2f_reg is stable), which is exactly
            // the condition that causes next == ST_DONE.
            // -----------------------------------------------------------------
            if (next == ST_DONE) begin
                data_rvalid_o <= 1'b1;
                data_rdata_o  <= data_s2f_r_i; // full 32-bit, both chips combined
            end
        end
    end

endmodule