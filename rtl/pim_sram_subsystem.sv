`timescale 1ns/1ps

// =============================================================================
// pim_sram_subsystem.sv 
// Top-level bridge integrating the Decoder, OBI Wrapper, and PIM SRAM Controller.
// =============================================================================

module pim_sram_subsystem #(
    parameter int            ADDR_WIDTH     = 19,
    parameter logic [31:0]   SRAM_BASE_ADDR = 32'h2000_0000,
    parameter logic [31:0]   SRAM_ADDR_MASK = 32'hFFF0_0000
)(
    input  logic        clk,
    input  logic        rst_n,        // System active-low reset

    // -------------------------------------------------------------------------
    // Standard OBI Data Interface (From CV32E40P Core to Decoder)
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
    // PIM Sideband Interface (From CV32E40P PCU directly to SRAM)
    // -------------------------------------------------------------------------
    input  logic [1:0]  pim_cmd_i,    // 00=normal, 01=add.p, 10=mul.p
    input  logic [5:0]  pim_imm1_i,   // 6-bit operand 1 offset
    input  logic [5:0]  pim_imm2_i,    // 6-bit operand 2 offset
    input  logic [31:0] pim_base_addr_i

);

    // =========================================================================
    // Interconnect 1: Decoder to OBI Wrapper
    // =========================================================================
    logic        sram_req_int;
    logic        sram_we_int;
    logic [3:0]  sram_be_int;
    logic [31:0] sram_addr_int;
    logic [31:0] sram_wdata_int;
    logic        sram_gnt_int;
    logic        sram_rvalid_int;
    logic [31:0] sram_rdata_int;

    // =========================================================================
    // Interconnect 2: OBI Wrapper to SRAM Controller
    // =========================================================================
    logic                  mem_int;
    logic                  rw_int;
    logic [ADDR_WIDTH-1:0] addr_int;
    logic [3:0]            be_int;
    logic [31:0]           data_f2s_int;
    logic                  ready_int;
    logic [31:0]           data_s2f_r_int;

    // =========================================================================
    // 1. Instantiate Address Decoder
    // =========================================================================
    obi_decoder_router #(
        .SRAM_BASE_ADDR (SRAM_BASE_ADDR),
        .SRAM_ADDR_MASK (SRAM_ADDR_MASK)
    ) u_decoder (
        .clk_i          (clk),
        .reset_n_i      (rst_n),
        
        // From Core
        .data_req_i     (data_req_i),
        .data_we_i      (data_we_i),
        .data_be_i      (data_be_i),
        .data_addr_i    (data_addr_i),
        .data_wdata_i   (data_wdata_i),
        .data_gnt_o     (data_gnt_o),
        .data_rvalid_o  (data_rvalid_o),
        .data_rdata_o   (data_rdata_o),
        
        // To SRAM Wrapper
        .sram_req_o     (sram_req_int),
        .sram_we_o      (sram_we_int),
        .sram_be_o      (sram_be_int),
        .sram_addr_o    (sram_addr_int),
        .sram_wdata_o   (sram_wdata_int),
        .sram_gnt_i     (sram_gnt_int),
        .sram_rvalid_i  (sram_rvalid_int),
        .sram_rdata_i   (sram_rdata_int)
    );

    // =========================================================================
    // 2. Instantiate OBI to SRAM Wrapper
    // =========================================================================
    obi_sram_wrapper u_obi_wrapper (
        .clk            (clk),
        .reset_n        (rst_n),
        
        // From Decoder
        .data_req_i     (sram_req_int),
        .data_we_i      (sram_we_int),
        .data_be_i      (sram_be_int),
        .data_addr_i    (sram_addr_int),
        .data_wdata_i   (sram_wdata_int),
        .data_gnt_o     (sram_gnt_int),
        .data_rvalid_o  (sram_rvalid_int),
        .data_rdata_o   (sram_rdata_int),
        
        // To SRAM Controller
        .mem_o          (mem_int),
        .rw_o           (rw_int),
        .addr_o         (addr_int),    
        .be_o           (be_int),
        .data_f2s_o     (data_f2s_int),
        .ready_i        (ready_int),
        .data_s2f_r_i   (data_s2f_r_int)
    );

    // =========================================================================
    // 3. Instantiate PIM SRAM Controller
    // =========================================================================
    sram_ctrl #(
        .ADDR_WIDTH     (ADDR_WIDTH)
    ) u_sram_ctrl (
        .clk            (clk),
        .reset          (~rst_n),      // Invert active-low reset to active-high
        
        // From OBI Wrapper
        .mem            (mem_int),
        .rw             (rw_int),
        .addr           (addr_int),
        .data_f2s       (data_f2s_int),
        .be             (be_int),
        .ready          (ready_int),
        .data_s2f_r     (data_s2f_r_int),
        
        // From Core (Bypasses Decoder & Wrapper completely)
        .pim_cmd        (pim_cmd_i),
        .pim_imm1       ({{26{pim_imm1_i[5]}}, pim_imm1_i}), // 6-bit to 32-bit sign extension 
        .pim_imm2       ({{26{pim_imm2_i[5]}}, pim_imm2_i}),
        .pim_base_addr  (pim_base_addr_i)
    );

endmodule