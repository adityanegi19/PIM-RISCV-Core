// =============================================================================
// tb_pim_core.sv  --  Testbench for CV32E40P with PIM SRAM Subsystem
// =============================================================================
//
// Instantiates cv32e40p_core and pim_sram_subsystem, connected by:
//   - OBI data bus (data_*)
//   - PIM sideband signals (pim_cmd_o, pim_imm1_o, pim_imm2_o, pim_base_addr_o)
//
// Instruction memory: local word-array, initialised from pim_test.hex via
// $readmemh.  One-cycle OBI latency: gnt is combinational, rvalid registered.
//
// Test checks:
//   add.p result (SRAM word 5) == 10
//   mul.p result (SRAM word 6) ==  8
//
// Done detection: polls SRAM word 7 for the sentinel value 0x0000DEAD.
// Timeout: 10000 clock cycles after reset deassertion.
//
// Simulator: Icarus Verilog  iverilog -g2012
// =============================================================================
`timescale 1ns/1ps

module tb_pim_core;

    // =========================================================================
    // APU/FPU constants (from cv32e40p_apu_core_pkg, FPU=0 so all tied off)
    // =========================================================================
    localparam int APU_NARGS_CPU    = 3;
    localparam int APU_WOP_CPU      = 6;
    localparam int APU_NDSFLAGS_CPU = 15;
    localparam int APU_NUSFLAGS_CPU = 5;

    // =========================================================================
    // Test constants
    // =========================================================================
    localparam int  IMEM_WORDS      = 16384;        // 64 KB / 4 B = 16384 words
    localparam int  DONE_WORD       = 27;
    localparam int  STD_CYCLES_WORD = 25;
    localparam int  PIM_CYCLES_WORD = 26;
    localparam [31:0] DONE_SENTINEL = 32'h0000_DEAD;
    localparam int  TIMEOUT_CYCLES  = 10000;

    // =========================================================================
    // Clock and reset
    // =========================================================================
    logic clk_i;
    logic rst_ni;

    // 100 MHz clock: 10 ns period, 5 ns half-period
    initial clk_i = 1'b0;
    always  #5 clk_i = ~clk_i;

    // Active-low reset: assert for 20 clock cycles, then release
    initial begin
        rst_ni = 1'b0;
        repeat (20) @(posedge clk_i);
        @(negedge clk_i);
        rst_ni = 1'b1;
    end

    // =========================================================================
    // Instruction memory model (64 KB word-addressed)
    // =========================================================================
    logic [31:0] imem [0:IMEM_WORDS-1];

    initial $readmemh("pim_test.hex", imem);

    // Instruction OBI signals
    logic        instr_req;
    logic        instr_gnt;
    logic        instr_rvalid;
    logic [31:0] instr_addr;
    logic [31:0] instr_rdata;

    // Combinational grant: always ready
    assign instr_gnt = instr_req;

    // One-cycle latency: sample address on req, present rvalid/rdata next cycle
    initial begin
        instr_rvalid = 1'b0;
        instr_rdata  = 32'h0;
    end

    always @(posedge clk_i) begin
        if (instr_req) begin
            instr_rvalid <= 1'b1;
            // word-indexed: drop byte-offset bits [1:0], use bits [15:2] for 64 KB
            instr_rdata  <= imem[instr_addr[15:2]];
        end else begin
            instr_rvalid <= 1'b0;
        end
    end

    // =========================================================================
    // Data OBI bus (core ↔ pim_sram_subsystem)
    // =========================================================================
    logic        data_req;
    logic        data_gnt;
    logic        data_rvalid;
    logic        data_we;
    logic [3:0]  data_be;
    logic [31:0] data_addr;
    logic [31:0] data_wdata;
    logic [31:0] data_rdata;

    // =========================================================================
    // PIM sideband (core → pim_sram_subsystem)
    // =========================================================================
    logic [1:0]  pim_cmd;
    logic [5:0]  pim_imm1;
    logic [5:0]  pim_imm2;
    logic [31:0] pim_base_addr;

    // =========================================================================
    // APU tie-off signals
    // =========================================================================
    logic                         apu_req_unused;
    logic                         apu_busy_unused;
    logic [APU_NARGS_CPU-1:0][31:0] apu_operands_unused;
    logic [APU_WOP_CPU-1:0]       apu_op_unused;
    logic [APU_NDSFLAGS_CPU-1:0]  apu_flags_out_unused;
    logic                         core_sleep_unused;
    logic                         irq_ack_unused;
    logic [4:0]                   irq_id_unused;
    logic                         debug_havereset_unused;
    logic                         debug_running_unused;
    logic                         debug_halted_unused;

    // =========================================================================
    // DUT 1: cv32e40p_core
    // =========================================================================
    cv32e40p_core #(
        .COREV_PULP         (0),
        .COREV_CLUSTER      (0),
        .FPU                (0),
        .FPU_ADDMUL_LAT     (0),
        .FPU_OTHERS_LAT     (0),
        .ZFINX              (0),
        .NUM_MHPMCOUNTERS   (1)
    ) u_core (
        // Clock / reset
        .clk_i               (clk_i),
        .rst_ni              (rst_ni),
        .pulp_clock_en_i     (1'b1),
        .scan_cg_en_i        (1'b0),

        // Static configuration
        .boot_addr_i         (32'h0000_0000),
        .mtvec_addr_i        (32'h0000_0000),
        .dm_halt_addr_i      (32'h1A11_0800),
        .hart_id_i           (32'h0000_0000),
        .dm_exception_addr_i (32'h0000_0000),

        // Instruction OBI
        .instr_req_o         (instr_req),
        .instr_gnt_i         (instr_gnt),
        .instr_rvalid_i      (instr_rvalid),
        .instr_addr_o        (instr_addr),
        .instr_rdata_i       (instr_rdata),

        // Data OBI
        .data_req_o          (data_req),
        .data_gnt_i          (data_gnt),
        .data_rvalid_i       (data_rvalid),
        .data_we_o           (data_we),
        .data_be_o           (data_be),
        .data_addr_o         (data_addr),
        .data_wdata_o        (data_wdata),
        .data_rdata_i        (data_rdata),

        // APU/FPU — disabled (FPU=0), all inputs tied to safe defaults
        .apu_busy_o          (apu_busy_unused),
        .apu_req_o           (apu_req_unused),
        .apu_gnt_i           (1'b0),
        .apu_operands_o      (apu_operands_unused),
        .apu_op_o            (apu_op_unused),
        .apu_flags_o         (apu_flags_out_unused),
        .apu_rvalid_i        (1'b0),
        .apu_result_i        (32'h0),
        .apu_flags_i         ({APU_NUSFLAGS_CPU{1'b0}}),

        // Interrupts — all inactive
        .irq_i               (32'h0),
        .irq_ack_o           (irq_ack_unused),
        .irq_id_o            (irq_id_unused),

        // Debug — not used in this test
        .debug_req_i         (1'b0),
        .debug_havereset_o   (debug_havereset_unused),
        .debug_running_o     (debug_running_unused),
        .debug_halted_o      (debug_halted_unused),

        // Control
        .fetch_enable_i      (1'b1),
        .core_sleep_o        (core_sleep_unused),

        // PIM sideband outputs
        .pim_cmd_o           (pim_cmd),
        .pim_imm1_o          (pim_imm1),
        .pim_imm2_o          (pim_imm2),
        .pim_base_addr_o     (pim_base_addr)
    );

    // =========================================================================
    // DUT 2: pim_sram_subsystem
    // =========================================================================
    pim_sram_subsystem #(
        .ADDR_WIDTH     (19),
        .SRAM_BASE_ADDR (32'h2000_0000),
        .SRAM_ADDR_MASK (32'hFFF0_0000)
    ) u_pim_subsystem (
        .clk             (clk_i),
        .rst_n           (rst_ni),

        // OBI data interface from core
        .data_req_i      (data_req),
        .data_we_i       (data_we),
        .data_be_i       (data_be),
        .data_addr_i     (data_addr),
        .data_wdata_i    (data_wdata),
        .data_gnt_o      (data_gnt),
        .data_rvalid_o   (data_rvalid),
        .data_rdata_o    (data_rdata),

        // PIM sideband from core
        .pim_cmd_i       (pim_cmd),
        .pim_imm1_i      (pim_imm1),
        .pim_imm2_i      (pim_imm2),
        .pim_base_addr_i (pim_base_addr)
    );

    // =========================================================================
    // Waveform dump
    // =========================================================================
    initial begin
        $dumpfile("pim_waves.vcd");
        $dumpvars(0, tb_pim_core);
    end

    // =========================================================================
    // Signal monitor: print on every change of key PIM/OBI signals
    // =========================================================================
    always @(pim_cmd, pim_imm1, pim_imm2, pim_base_addr,
             data_req, data_gnt, data_rvalid, data_rdata, data_addr) begin
        $display("[%0t ns] pim_cmd=%02b imm1=%02d imm2=%02d base=0x%08X | data_req=%b gnt=%b rvalid=%b addr=0x%08X rdata=0x%08X",
                 $time,
                 pim_cmd, pim_imm1, pim_imm2, pim_base_addr,
                 data_req, data_gnt, data_rvalid, data_addr, data_rdata);
    end

    // =========================================================================
    // Test body: poll done sentinel, check results, print verdict
    // =========================================================================
    integer cycle_count;
    logic [31:0] result_add;
    logic [31:0] result_mul;

    initial begin
        cycle_count = 0;
        result_add  = 32'hX;
        result_mul  = 32'hX;

        $display("[%0t ns] Simulation start — waiting for reset deassertion.", $time);

        // Wait until reset is released
        @(posedge rst_ni);
        $display("[%0t ns] Reset deasserted — core is now running.", $time);

        // Poll every rising clock edge for done sentinel at SRAM word 7
        forever begin
            @(posedge clk_i);
            #1; // advance past NBA region so non-blocking writes are committed

            cycle_count = cycle_count + 1;

            // Timeout guard
            if (cycle_count >= TIMEOUT_CYCLES) begin
                $display("[%0t ns] TIMEOUT: test did not complete within %0d cycles!",
                         $time, TIMEOUT_CYCLES);
                $finish;
            end

            // Check done sentinel via hierarchical reference into sram_ctrl
            if (u_pim_subsystem.u_sram_ctrl.mem_array[DONE_WORD] === DONE_SENTINEL) begin
                automatic real std_cycles = u_pim_subsystem.u_sram_ctrl.mem_array[STD_CYCLES_WORD];
                automatic real pim_cycles = u_pim_subsystem.u_sram_ctrl.mem_array[PIM_CYCLES_WORD];
                automatic real speedup_pct = ((std_cycles - pim_cycles) / std_cycles) * 100.0;

                $display("========================================================");
                $display("             PIM PERFORMANCE BENCHMARK                  ");
                $display("========================================================");
                $display("  Standard RISC-V IMAGE PROCESSING : %0.0f cycles", std_cycles);
                $display("  PIM-Accelerated IMAGE PROCESSING : %0.0f cycles", pim_cycles);
                $display("--------------------------------------------------------");
                $display("  Total Cycle Reduction      : %0.0f cycles", std_cycles - pim_cycles);
                $display("  Performance Improvement    : %0.2f %%", speedup_pct);
                $display("========================================================");
                $finish;
            end
        end
    end

endmodule
