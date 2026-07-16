# =============================================================================
# Makefile  --  CV32E40P PIM Extension Testbench
# =============================================================================
#
# Targets:
#   all         -- compile software + RTL, then run simulation  (default)
#   compile_sw  -- assemble pim_test.S → pim_test.hex
#   compile_rtl -- compile all RTL + testbench with iverilog
#   sim         -- run simulation (vvp) and open GTKWave
#   clean       -- remove all generated files
#
# Override the toolchain prefix on the command line, e.g.:
#   make RISCV_PREFIX=riscv-none-elf-
# =============================================================================

RISCV_PREFIX ?= riscv32-unknown-elf-
AS           = $(RISCV_PREFIX)as
LD           = $(RISCV_PREFIX)ld
OBJCOPY      = $(RISCV_PREFIX)objcopy

RTL_DIR = ../../rtl
BHV_DIR = ../../bhv

# -----------------------------------------------------------------------------
# Key RTL source list (nine custom/modified files + testbench, as specified).
# These are the PIM-specific and primary pipeline files.
# -----------------------------------------------------------------------------
RTL_SOURCES = \
    $(RTL_DIR)/cv32e40p_controller.sv      \
    $(RTL_DIR)/cv32e40p_core.sv            \
    $(RTL_DIR)/cv32e40p_decoder.sv         \
    $(RTL_DIR)/cv32e40p_id_stage.sv        \
    $(RTL_DIR)/cv32e40p_load_store_unit.sv \
    $(RTL_DIR)/obi_decoder_router.sv       \
    $(RTL_DIR)/pim_sram_subsystem.sv       \
    $(RTL_DIR)/sram_controller.sv          \
    $(RTL_DIR)/sram_obi_wrapper.sv         \
    tb_pim_core.sv

# -----------------------------------------------------------------------------
# Additional CV32E40P core RTL required for a complete build.
# Packages must come first so types are resolved before use.
# -----------------------------------------------------------------------------
CORE_PACKAGES = \
    $(RTL_DIR)/include/cv32e40p_apu_core_pkg.sv \
    $(RTL_DIR)/include/cv32e40p_fpu_pkg.sv      \
    $(RTL_DIR)/include/cv32e40p_pkg.sv

CORE_RTL = \
    $(RTL_DIR)/cv32e40p_if_stage.sv             \
    $(RTL_DIR)/cv32e40p_cs_registers.sv         \
    $(RTL_DIR)/cv32e40p_register_file_ff.sv     \
    $(RTL_DIR)/cv32e40p_aligner.sv              \
    $(RTL_DIR)/cv32e40p_compressed_decoder.sv   \
    $(RTL_DIR)/cv32e40p_fifo.sv                 \
    $(RTL_DIR)/cv32e40p_prefetch_buffer.sv      \
    $(RTL_DIR)/cv32e40p_prefetch_controller.sv  \
    $(RTL_DIR)/cv32e40p_hwloop_regs.sv          \
    $(RTL_DIR)/cv32e40p_mult.sv                 \
    $(RTL_DIR)/cv32e40p_int_controller.sv       \
    $(RTL_DIR)/cv32e40p_ex_stage.sv             \
    $(RTL_DIR)/cv32e40p_alu_div.sv              \
    $(RTL_DIR)/cv32e40p_alu.sv                  \
    $(RTL_DIR)/cv32e40p_ff_one.sv               \
    $(RTL_DIR)/cv32e40p_popcnt.sv               \
    $(RTL_DIR)/cv32e40p_apu_disp.sv             \
    $(RTL_DIR)/cv32e40p_obi_interface.sv        \
    $(RTL_DIR)/cv32e40p_sleep_unit.sv           \
    $(BHV_DIR)/cv32e40p_sim_clock_gate.sv

# iverilog include paths for packages and behavioural headers
INC_FLAGS = \
    -I$(RTL_DIR)/include \
    -I$(RTL_DIR)         \
    -I$(BHV_DIR)         \
    -I$(BHV_DIR)/include

SIM_OUT = sim_pim

# -----------------------------------------------------------------------------
# Default target: build everything and run
# -----------------------------------------------------------------------------
.PHONY: all
all: compile_sw compile_rtl sim

# -----------------------------------------------------------------------------
# Software: assemble → link → hex
# -----------------------------------------------------------------------------
.PHONY: compile_sw
compile_sw: pim_test.hex
	@echo "=== Software compilation complete ==="

pim_test.o: pim_test.S
	@echo "=== [1/3] Assembling pim_test.S ==="
	$(AS) -mabi=ilp32 -march=rv32im -o pim_test.o pim_test.S

pim_test.elf: pim_test.o link.ld
	@echo "=== [2/3] Linking pim_test.elf ==="
	$(LD) -m elf32lriscv -T link.ld -o pim_test.elf pim_test.o

pim_test.hex: pim_test.elf
	@echo "=== [3/3] Generating pim_test.hex ==="
	$(OBJCOPY) -O verilog --verilog-data-width=4 pim_test.elf pim_test.hex
	@echo "=== pim_test.hex ready ==="

# -----------------------------------------------------------------------------
# RTL: compile all sources with Verilator
# -----------------------------------------------------------------------------
.PHONY: compile_rtl
compile_rtl: $(SIM_OUT)
	@echo "=== RTL compilation complete ==="

$(SIM_OUT): $(RTL_SOURCES) $(CORE_PACKAGES) $(CORE_RTL)
	@echo "=== Compiling RTL with Verilator ==="
	verilator --binary --timing --trace -Wno-fatal -Wno-UNOPTFLAT -Wno-LATCH -Wno-WIDTH \
	    $(INC_FLAGS) \
	    --top-module tb_pim_core \
	    $(CORE_PACKAGES) \
	    $(CORE_RTL) \
	    $(RTL_SOURCES)
	@echo "=== RTL compiled into obj_dir/ ==="

# -----------------------------------------------------------------------------
# Simulation: run Verilator executable then open GTKWave
# -----------------------------------------------------------------------------
.PHONY: sim
sim: $(SIM_OUT) pim_test.hex
	@echo "=== Running simulation ==="
	./obj_dir/Vtb_pim_core
	@echo "=== Opening GTKWave ==="
	gtkwave pim_waves.vcd &

# -----------------------------------------------------------------------------
# Clean
# -----------------------------------------------------------------------------
.PHONY: clean
clean:
	@echo "=== Cleaning generated files ==="
	rm -rf pim_test.o pim_test.elf pim_test.hex $(SIM_OUT) pim_waves.vcd obj_dir/
	@echo "=== Clean complete ==="
