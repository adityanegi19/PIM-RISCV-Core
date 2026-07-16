// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_pim_core__Syms.h"


VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_apu_core_pkg__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_fpu_pkg__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_pkg__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_init_sub__TOP__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "cv32e40p_apu_core_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_apu_core_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cv32e40p_fpu_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_fpu_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cv32e40p_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "tb_pim_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+861,0,"APU_NARGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"APU_WOP_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+863,0,"APU_NDSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+864,0,"APU_NUSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+865,0,"IMEM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"DONE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"STD_CYCLES_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+868,0,"PIM_CYCLES_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+869,0,"DONE_SENTINEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+870,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"instr_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"instr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"data_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"data_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"data_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"pim_imm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"pim_imm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"pim_base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_req_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_busy_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+873,0,"apu_operands_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_op_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"apu_flags_out_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BIT(tracep,c+843,0,"core_sleep_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"irq_ack_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"irq_id_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"debug_havereset_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"debug_running_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"debug_halted_unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+844,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+845,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+846,0,"result_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_CLUSTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU_ADDMUL_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU_OTHERS_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"NUM_MHPMCOUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"pulp_clock_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"mtvec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+881,0,"dm_halt_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"dm_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+873,0,"apu_operands_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"apu_flags_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"apu_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+882,0,"apu_flags_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"irq_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"irq_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"debug_havereset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"debug_running_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"debug_halted_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+843,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"pim_imm1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"pim_imm2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"pim_base_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_SECURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+883,0,"N_PMP_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"USE_PMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"A_EXTENSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_OBI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"data_atop_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"irq_sec_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+884,0,"sec_lvl_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"N_HWLP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"APU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"instr_valid_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"instr_rdata_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"is_compressed_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"illegal_c_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"is_fetch_failed_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"clear_instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"pc_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"pc_mux_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"exc_pc_mux_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"m_exc_vec_pc_mux_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+882,0,"u_exc_vec_pc_mux_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"exc_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"trap_addr_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"pc_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"pc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"is_decoding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"useincr_addr_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"data_misaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"mult_multicycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"jump_target_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"jump_target_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"branch_in_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"branch_decision",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"ctrl_transfer_insn_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"ctrl_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"if_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+341,0,"lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"pc_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+343,0,"alu_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"alu_operator_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"alu_operand_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"alu_operand_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"alu_operand_c_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"bmask_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"bmask_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"imm_vec_ext_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"alu_vec_mode_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+350,0,"alu_is_clpx_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+351,0,"alu_is_subrot_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"alu_clpx_shift_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"mult_operator_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+354,0,"mult_operand_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"mult_operand_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"mult_operand_c_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+357,0,"mult_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"mult_sel_subword_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"mult_signed_mode_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"mult_imm_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"mult_dot_op_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"mult_dot_op_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"mult_dot_op_c_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"mult_dot_signed_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+365,0,"mult_is_clpx_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"mult_clpx_shift_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"mult_clpx_img_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"fs_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"frm_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"fflags_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fflags_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"fregs_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+368,0,"apu_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"apu_flags_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"apu_op_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"apu_lat_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+371,0,"apu_operands_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"apu_waddr_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+888,0,"apu_read_regs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"apu_read_regs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_for_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+890,0,"apu_write_regs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"apu_write_regs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_write_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"perf_apu_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"perf_apu_cont",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"perf_apu_dep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"perf_apu_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"regfile_waddr_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"regfile_we_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"regfile_waddr_fw_wb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb_power",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"regfile_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"regfile_alu_waddr_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"regfile_alu_we_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"regfile_alu_waddr_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw_power",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"regfile_alu_wdata_fw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+383,0,"csr_access_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"csr_op_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+892,0,"utvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"mtvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"utvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"csr_addr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"current_priv_lvl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"data_atop_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"data_type_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"data_sign_ext_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"data_reg_offset_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"data_req_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"data_load_event_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"data_misaligned_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"p_elw_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+744,0,"p_elw_finish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"halt_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"id_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+770,0,"lsu_ready_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"lsu_ready_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"apu_ready_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"instr_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"m_irq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+397,0,"u_irq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"csr_irq_sec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"uepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"depc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"mie_bypass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"csr_save_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"csr_save_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"csr_save_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"csr_save_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"csr_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"csr_restore_mret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"csr_restore_uret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"csr_restore_dret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"csr_mtvec_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"mcounteren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"debug_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"debug_csr_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"debug_single_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"debug_ebreakm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"debug_ebreaku",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+405,0,"trigger_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_p_elw_no_sleep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"mhpmevent_minstret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"mhpmevent_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+408,0,"mhpmevent_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+409,0,"mhpmevent_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+410,0,"mhpmevent_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"mhpmevent_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+412,0,"mhpmevent_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+413,0,"mhpmevent_jr_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"mhpmevent_imiss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"mhpmevent_ld_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+416,0,"mhpmevent_pipe_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"perf_imiss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"wake_from_sleep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+898,0,"pmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_WIDE(tracep,c+914,0,"pmp_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"data_gnt_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_req_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_gnt_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"instr_addr_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"instr_err_pmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"pim_imm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"pim_imm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"is_pim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"fetch_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "cs_registers_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"N_HWLP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"APU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"A_EXTENSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_SECURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"USE_PMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+883,0,"N_PMP_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"NUM_MHPMCOUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_CLUSTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"mtvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"utvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"mtvec_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"utvec_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"mtvec_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"csr_mtvec_init_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"csr_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"csr_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"fs_off_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"frm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"fflags_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fflags_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fregs_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"mie_bypass_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"mip_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"m_irq_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+397,0,"u_irq_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"csr_irq_sec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"sec_lvl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"uepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"mcounteren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"debug_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"debug_cause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"debug_csr_save_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"depc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"debug_single_step_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"debug_ebreakm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"debug_ebreaku_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+405,0,"trigger_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+919,0,"pmp_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_WIDE(tracep,c+935,0,"pmp_cfg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"priv_lvl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"pc_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"pc_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"csr_save_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"csr_save_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"csr_save_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"csr_restore_mret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"csr_restore_uret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"csr_restore_dret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"csr_cause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"csr_save_cause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_start_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_end_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"mhpmevent_minstret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"mhpmevent_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+408,0,"mhpmevent_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+409,0,"mhpmevent_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+410,0,"mhpmevent_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"mhpmevent_branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+412,0,"mhpmevent_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+413,0,"mhpmevent_jr_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"mhpmevent_imiss_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"mhpmevent_ld_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+416,0,"mhpmevent_pipe_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_typeconflict_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_contention_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_dep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+883,0,"NUM_HPM_EVENTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"MTVEC_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+883,0,"MAX_N_PMP_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+941,0,"MAX_N_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+941,0,"N_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"MSTATUS_UIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"MSTATUS_SIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+942,0,"MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+941,0,"MSTATUS_UPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"MSTATUS_SPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+944,0,"MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+945,0,"MSTATUS_SPP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+946,0,"MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+948,0,"MSTATUS_FS_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"MSTATUS_FS_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+950,0,"MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"MSTATUS_SD_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+952,0,"MISA_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_PERF_COUNTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"csr_wdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"csr_rdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+418,0,"csr_we_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+953,0,"frm_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+954,0,"frm_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+955,0,"fflags_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"fflags_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+957,0,"fcsr_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"mepc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"uepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"uepc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"tmatch_control_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"tmatch_value_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+958,0,"tinfo_types",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"dcsr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"dcsr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"depc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"depc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"dscratch0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"dscratch0_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"dscratch1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"dscratch1_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"mscratch_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"exception_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"mstatus_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"mstatus_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"mstatus_we_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+959,0,"mstatus_fs_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+960,0,"mstatus_fs_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"mcause_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"ucause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"ucause_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"mtvec_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"utvec_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"utvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"mtvec_mode_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"mtvec_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"utvec_mode_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"utvec_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"mie_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"csr_mie_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+434,0,"csr_mie_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+236,0,"is_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"priv_lvl_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+961,0,"priv_lvl_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+962,0,"pmp_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 767,0);
    VL_TRACE_DECL_WIDE(tracep,c+962,0,"pmp_reg_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 767,0);
    VL_TRACE_DECL_BUS(tracep,c+986,0,"pmpaddr_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+986,0,"pmpcfg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+7,0,"mhpmcounter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2047,0);
    VL_TRACE_DECL_WIDE(tracep,c+71,0,"mhpmevent_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1023,0);
    VL_TRACE_DECL_WIDE(tracep,c+435,0,"mhpmevent_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1023,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"mcounteren_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"mcounteren_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"mcountinhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+467,0,"mcountinhibit_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"hpm_events",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_WIDE(tracep,c+104,0,"mhpmcounter_increment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2047,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"mhpmcounter_write_lower",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"mhpmcounter_write_upper",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"mhpmcounter_write_increment",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"mcounteren_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"mcountinhibit_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+469,0,"mhpmevent_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_trigger_regs", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+470,0,"tmatch_control_exec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"tmatch_value_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"tmatch_control_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"tmatch_value_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_stage_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+942,0,"APU_NARGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"APU_WOP_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"APU_NDSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"APU_NUSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"alu_operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"alu_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"alu_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"alu_operand_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+343,0,"alu_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"bmask_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"bmask_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"imm_vec_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"alu_vec_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+350,0,"alu_is_clpx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+351,0,"alu_is_subrot_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"alu_clpx_shift_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"mult_operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+354,0,"mult_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"mult_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"mult_operand_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+357,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"mult_sel_subword_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"mult_signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"mult_imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"mult_dot_op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"mult_dot_op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"mult_dot_op_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"mult_dot_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+365,0,"mult_is_clpx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"mult_clpx_shift_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"mult_clpx_img_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"mult_multicycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"data_misaligned_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"data_misaligned_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"ctrl_transfer_insn_in_dec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fpu_fflags_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"fpu_fflags_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+368,0,"apu_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"apu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"apu_lat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+371,0,"apu_operands_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"apu_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"apu_flags_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+888,0,"apu_read_regs_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"apu_read_regs_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_for_jalr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+890,0,"apu_write_regs_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"apu_write_regs_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_write_dep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_perf_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_perf_cont_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_perf_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"apu_ready_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+873,0,"apu_operands_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"apu_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"lsu_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"lsu_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"branch_in_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"regfile_alu_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"regfile_alu_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"regfile_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"regfile_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+383,0,"csr_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"csr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"regfile_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb_power_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"regfile_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"regfile_alu_waddr_fw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw_power_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"regfile_alu_wdata_fw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"jump_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"branch_decision_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"is_decoding_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+770,0,"lsu_ready_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"lsu_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"ex_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"ex_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"alu_cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"regfile_waddr_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"wb_contention",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"wb_contention_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"alu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"mulh_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"mult_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"apu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_singlecycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_multicycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+989,0,"apu_rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+990,0,"apu_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+991,0,"apu_flags_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+343,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"operand_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"vector_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"bmask_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"bmask_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"imm_vec_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+350,0,"is_clpx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+351,0,"is_subrot_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"clpx_shift_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"comparison_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"operand_a_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"operand_a_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"operand_a_neg_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"operand_b_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"div_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"div_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+481,0,"bmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+482,0,"adder_op_b_negate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+483,0,"adder_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+484,0,"adder_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+485,0,"adder_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+487,0,"adder_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"adder_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+490,0,"adder_result_expanded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 36,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"adder_round_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+493,0,"adder_round_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+494,0,"shift_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+495,0,"shift_use_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+496,0,"shift_arithmetic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"shift_amt_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"shift_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"shift_amt_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"shift_amt_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"shift_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+502,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+503,0,"shift_right_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"shift_left_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"clpx_shift_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_QUAD(tracep,c+506,0,"shift_op_a_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+508,0,"is_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+509,0,"is_greater",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+510,0,"cmp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+511,0,"is_equal_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+512,0,"is_greater_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+513,0,"operand_b_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+514,0,"is_equal_clip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+516,0,"result_minmax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+517,0,"sel_minmax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+518,0,"do_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+519,0,"minmax_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+520,0,"clip_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+521,0,"shuffle_byte_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+522,0,"shuffle_reg_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+523,0,"shuffle_reg1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+524,0,"shuffle_reg0_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+525,0,"shuffle_through",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+526,0,"shuffle_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+527,0,"shuffle_r0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+528,0,"shuffle_r1_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+529,0,"shuffle_r0_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+530,0,"shuffle_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+531,0,"pack_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+532,0,"ff_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+533,0,"cnt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+534,0,"clb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+535,0,"ff1_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+536,0,"ff_no_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+537,0,"fl1_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+538,0,"bitop_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+539,0,"extract_is_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+540,0,"extract_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+541,0,"bmask_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+542,0,"bmask_inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"bextins_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+544,0,"bextins_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+545,0,"bclr_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+546,0,"bset_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+547,0,"radix_2_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+548,0,"radix_4_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"radix_8_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+550,0,"reverse_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"radix_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+552,0,"result_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"div_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+553,0,"div_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+554,0,"div_op_a_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+555,0,"div_shift_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_PUSH_PREFIX(tracep, "alu_div_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"C_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"C_LOG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"Clk_CI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"Rst_RBI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"OpA_DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"OpB_DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"OpBShift_DI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"OpBIsZero_SI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+554,0,"OpBSign_SI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+557,0,"OpCode_SI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+480,0,"InVld_SI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"OutRdy_SI",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+179,0,"OutVld_SO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+552,0,"Res_DO",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+558,0,"ResReg_DP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"ResReg_DN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+559,0,"ResReg_DP_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"AReg_DP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"AReg_DN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"BReg_DP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"BReg_DN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"RemSel_SN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+562,0,"RemSel_SP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"CompInv_SN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+563,0,"CompInv_SP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+174,0,"ResInv_SN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+564,0,"ResInv_SP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"AddMux_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"AddOut_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"AddTmp_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"BMux_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+565,0,"OutMux_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+566,0,"Cnt_DP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"Cnt_DN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"CntZero_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"ARegEn_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"BRegEn_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+184,0,"ResRegEn_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+568,0,"ABComp_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+178,0,"PmSel_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+185,0,"LoadEn_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"State_SN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+569,0,"State_SP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ff_one_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+532,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+535,0,"first_one_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+536,0,"no_ones_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"NUM_LEVELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+993,0,"index_lut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_DECL_BUS(tracep,c+570,0,"sel_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+571,0,"index_nodes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 159,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "popcnt_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+533,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+576,0,"cnt_l1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+577,0,"cnt_l2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+578,0,"cnt_l3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+579,0,"cnt_l4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mult_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+357,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"operator_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"short_subword_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"short_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+354,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"op_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"dot_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"dot_op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"dot_op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"dot_op_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+365,0,"is_clpx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"clpx_shift_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"clpx_img_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"multicycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"mulh_active_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+580,0,"short_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+581,0,"short_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_QUAD(tracep,c+582,0,"short_op_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_QUAD(tracep,c+584,0,"short_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+586,0,"short_mac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+588,0,"short_round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+589,0,"short_round_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+590,0,"short_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BIT(tracep,c+592,0,"short_mac_msb1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+593,0,"short_mac_msb0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"short_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+595,0,"short_subword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+596,0,"short_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+597,0,"short_shift_arith",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+598,0,"mulh_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+599,0,"mulh_subword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+600,0,"mulh_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+601,0,"mulh_shift_arith",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+602,0,"mulh_carry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+603,0,"mulh_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+604,0,"mulh_clearcarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+474,0,"mulh_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+605,0,"mulh_CS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+851,0,"mulh_NS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+606,0,"int_op_a_msu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+607,0,"int_op_b_msu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"int_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+609,0,"int_is_msu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+610,0,"dot_char_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+611,0,"dot_short_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BUS(tracep,c+613,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"clpx_shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_QUAD(tracep,c+615,0,"dot_char_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+617,0,"dot_char_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_WIDE(tracep,c+619,0,"dot_char_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_QUAD(tracep,c+622,0,"dot_short_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_QUAD(tracep,c+624,0,"dot_short_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_WIDE(tracep,c+626,0,"dot_short_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 67,0);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"dot_short_op_a_1_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+630,0,"dot_short_op_b_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "id_stage_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_CLUSTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"N_HWLP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"N_HWLP_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_SECURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"USE_PMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"A_EXTENSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"APU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU_ADDMUL_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU_OTHERS_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+942,0,"APU_NARGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"APU_WOP_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"APU_NDSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"APU_NUSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"ctrl_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"is_decoding_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"is_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"branch_in_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+340,0,"branch_decision_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"jump_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"ctrl_transfer_insn_in_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"clear_instr_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"pc_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"exc_pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"trap_addr_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"is_fetch_failed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"halt_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"id_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+847,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"id_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"pc_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"alu_operand_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"alu_operand_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"alu_operand_c_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"bmask_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"bmask_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"imm_vec_ext_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"alu_vec_mode_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"regfile_waddr_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"regfile_we_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"regfile_alu_waddr_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+380,0,"regfile_alu_we_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+343,0,"alu_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"alu_operator_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BIT(tracep,c+350,0,"alu_is_clpx_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+351,0,"alu_is_subrot_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"alu_clpx_shift_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"mult_operator_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+354,0,"mult_operand_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"mult_operand_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"mult_operand_c_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+357,0,"mult_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"mult_sel_subword_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"mult_signed_mode_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"mult_imm_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"mult_dot_op_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"mult_dot_op_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"mult_dot_op_c_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"mult_dot_signed_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+365,0,"mult_is_clpx_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"mult_clpx_shift_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"mult_clpx_img_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+368,0,"apu_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"apu_op_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"apu_lat_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+371,0,"apu_operands_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"apu_flags_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"apu_waddr_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+888,0,"apu_read_regs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"apu_read_regs_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_for_jalr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+890,0,"apu_write_regs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"apu_write_regs_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_write_dep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_perf_dep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"fs_off_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"frm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+383,0,"csr_access_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"csr_op_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"current_priv_lvl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"csr_irq_sec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"csr_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"csr_save_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"csr_save_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"csr_save_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"csr_restore_mret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"csr_restore_uret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"csr_restore_dret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"csr_save_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_start_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_end_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+896,0,"hwlp_cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"data_req_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"data_type_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"data_sign_ext_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"data_reg_offset_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"data_load_event_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"data_misaligned_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"prepost_useincr_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"data_misaligned_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"atop_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"irq_sec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"mie_bypass_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"mip_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"m_irq_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+397,0,"u_irq_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"irq_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"irq_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"exc_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"debug_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"debug_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"debug_csr_save_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"debug_single_step_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"debug_ebreakm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"debug_ebreaku_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+405,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_p_elw_no_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"debug_havereset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"debug_running_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"debug_halted_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"wake_from_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"regfile_waddr_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb_power_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"regfile_wdata_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"regfile_alu_waddr_fw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw_power_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"regfile_alu_wdata_fw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"mult_multicycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+406,0,"mhpmevent_minstret_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+407,0,"mhpmevent_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+408,0,"mhpmevent_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+409,0,"mhpmevent_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+410,0,"mhpmevent_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+411,0,"mhpmevent_branch_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+412,0,"mhpmevent_compressed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+413,0,"mhpmevent_jr_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"mhpmevent_imiss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+415,0,"mhpmevent_ld_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+416,0,"mhpmevent_pipe_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"perf_imiss_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"mcounteren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"is_pim_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"pim_imm1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"pim_imm2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+998,0,"REG_S1_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"REG_S1_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+999,0,"REG_S2_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1000,0,"REG_S2_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+951,0,"REG_S4_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1001,0,"REG_S4_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+946,0,"REG_D_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+944,0,"REG_D_LSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"deassert_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+773,0,"illegal_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+774,0,"ebrk_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+775,0,"mret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+776,0,"uret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+777,0,"dret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+778,0,"ecall_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+779,0,"wfi_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+780,0,"fencei_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+781,0,"rega_used_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+782,0,"regb_used_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+783,0,"regc_used_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+631,0,"branch_taken_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"ctrl_transfer_insn_in_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1002,0,"ctrl_transfer_insn_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"misaligned_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+784,0,"jr_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"load_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+745,0,"csr_apu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"hwlp_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+242,0,"halt_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"halt_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_wfi_no_sleep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"imm_i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+633,0,"imm_iz_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"imm_s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+635,0,"imm_sb_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+636,0,"imm_u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+637,0,"imm_uj_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"imm_z_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"imm_s2_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+640,0,"imm_bi_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+641,0,"imm_s3_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+642,0,"imm_vs_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+643,0,"imm_vu_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+644,0,"imm_shuffleb_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"imm_shuffleh_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+645,0,"imm_shuffle_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+646,0,"imm_clip_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+746,0,"imm_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+785,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"jump_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+647,0,"irq_req_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+648,0,"irq_sec_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"irq_wu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"irq_id_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+650,0,"regfile_addr_ra_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"regfile_addr_rb_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+786,0,"regfile_addr_rc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"regfile_fp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"regfile_fp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"regfile_fp_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"regfile_fp_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+652,0,"regfile_waddr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+652,0,"regfile_alu_waddr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"regfile_alu_we_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"regfile_alu_we_dec_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+653,0,"regfile_data_ra_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+654,0,"regfile_data_rb_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"regfile_data_rc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"alu_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+789,0,"alu_op_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+790,0,"alu_op_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+791,0,"alu_op_c_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+792,0,"regc_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+793,0,"imm_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+794,0,"imm_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+795,0,"ctrl_transfer_target_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+796,0,"mult_operator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"mult_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"mult_int_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"mult_sel_subword",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+797,0,"mult_signed_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"mult_dot_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"mult_dot_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"fpu_src_fmt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"fpu_dst_fmt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1003,0,"fpu_int_fmt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"apu_lat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+873,0,"apu_operands",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 95,0);
    VL_TRACE_DECL_BUS(tracep,c+1004,0,"apu_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 14,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+888,0,"apu_read_regs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 17,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"apu_read_regs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+890,0,"apu_write_regs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"apu_write_regs_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"fp_rnd_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"regfile_we_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"regfile_alu_waddr_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+798,0,"data_we_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+799,0,"data_type_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+800,0,"data_sign_ext_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"data_reg_offset_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"data_req_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_load_event_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"atop_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"hwlp_regid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"hwlp_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"hwlp_we_masked",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_target_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_start_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_cnt_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_dec_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"hwlp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+801,0,"csr_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+802,0,"csr_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"prepost_useincr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"operand_a_fw_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+249,0,"operand_b_fw_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"operand_c_fw_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"operand_a_fw_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"operand_b_fw_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"operand_c_fw_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"operand_b_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"operand_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"operand_c_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"alu_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"alu_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"alu_operand_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"bmask_a_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1003,0,"bmask_b_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"alu_bmask_a_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"alu_bmask_b_mux_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"mult_imm_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"bmask_a_id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"bmask_b_id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+853,0,"bmask_a_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"bmask_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"imm_vec_ext_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"mult_imm_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"alu_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"alu_vec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scalar_replication",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scalar_replication_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"reg_d_ex_is_reg_a_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+748,0,"reg_d_ex_is_reg_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+749,0,"reg_d_ex_is_reg_c_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+804,0,"reg_d_wb_is_reg_a_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+750,0,"reg_d_wb_is_reg_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+751,0,"reg_d_wb_is_reg_c_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"reg_d_alu_is_reg_a_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+752,0,"reg_d_alu_is_reg_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+753,0,"reg_d_alu_is_reg_c_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"is_clpx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"is_subrot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+806,0,"mret_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+807,0,"uret_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+808,0,"dret_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+656,0,"id_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+259,0,"minstret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+260,0,"perf_pipeline_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "controller_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_CLUSTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"ctrl_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"is_decoding_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"is_fetch_failed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"deassert_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+773,0,"illegal_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+778,0,"ecall_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+775,0,"mret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+776,0,"uret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+777,0,"dret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+806,0,"mret_dec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+807,0,"uret_dec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+808,0,"dret_dec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+779,0,"wfi_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+774,0,"ebrk_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+780,0,"fencei_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+802,0,"csr_status_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+241,0,"hwlp_mask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"pc_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"exc_pc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"trap_addr_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+1007,0,"hwlp_start_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1007,0,"hwlp_end_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+1007,0,"hwlp_counter_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_dec_cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_targ_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"data_req_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"data_misaligned_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_load_event_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+337,0,"mult_multicycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_read_dep_for_jalr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_write_dep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+631,0,"branch_taken_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"ctrl_transfer_insn_in_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"ctrl_transfer_insn_in_dec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+647,0,"irq_req_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+648,0,"irq_sec_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"irq_id_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"irq_wu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"current_priv_lvl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"irq_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"irq_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"exc_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"debug_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"debug_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+227,0,"debug_csr_save_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+402,0,"debug_single_step_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+403,0,"debug_ebreakm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+404,0,"debug_ebreaku_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+405,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_p_elw_no_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_wfi_no_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+325,0,"debug_havereset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"debug_running_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+327,0,"debug_halted_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"wake_from_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+219,0,"csr_save_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"csr_save_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"csr_save_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"csr_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"csr_irq_sec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"csr_restore_mret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+223,0,"csr_restore_uret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"csr_restore_dret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"csr_save_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"regfile_we_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+652,0,"regfile_alu_waddr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+376,0,"regfile_we_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"regfile_waddr_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"regfile_we_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"regfile_alu_we_fw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"operand_a_fw_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+249,0,"operand_b_fw_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"operand_c_fw_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+803,0,"reg_d_ex_is_reg_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+748,0,"reg_d_ex_is_reg_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+749,0,"reg_d_ex_is_reg_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+804,0,"reg_d_wb_is_reg_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+750,0,"reg_d_wb_is_reg_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+751,0,"reg_d_wb_is_reg_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+805,0,"reg_d_alu_is_reg_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+752,0,"reg_d_alu_is_reg_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+753,0,"reg_d_alu_is_reg_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"halt_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+242,0,"halt_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"misaligned_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+784,0,"jr_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"load_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"id_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+848,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"is_pim_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"pim_imm1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"pim_imm2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+260,0,"perf_pipeline_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+657,0,"ctrl_fsm_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"ctrl_fsm_ns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+658,0,"debug_fsm_cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"debug_fsm_ns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+263,0,"jump_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+659,0,"jump_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+264,0,"jump_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+265,0,"branch_in_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+660,0,"data_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"debug_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+266,0,"debug_mode_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+267,0,"ebrk_force_debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"is_hwlp_body",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+661,0,"illegal_insn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"illegal_insn_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+662,0,"debug_req_entry_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+269,0,"debug_req_entry_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+663,0,"debug_force_wakeup_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+270,0,"debug_force_wakeup_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end0_eq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end1_eq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_counter0_gt_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_counter1_gt_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_counter0_eq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_counter1_eq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_counter0_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_counter1_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end0_eq_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end1_eq_pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_start0_leq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_start1_leq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end0_geq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end1_geq_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end_4_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_end_4_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"debug_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+304,0,"debug_req_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+809,0,"wfi_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"pim_cmd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"pim_imm1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"pim_imm2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+664,0,"pim_cmd_ex_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+665,0,"pim_imm1_ex_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+666,0,"pim_imm2_ex_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "decoder_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_CLUSTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"A_EXTENSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU_ADDMUL_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU_OTHERS_LAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_SECURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"USE_PMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"APU_WOP_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"DEBUG_TRIGGER_EN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"deassert_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+773,0,"illegal_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+774,0,"ebrk_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+775,0,"mret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+776,0,"uret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+777,0,"dret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+806,0,"mret_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+807,0,"uret_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+808,0,"dret_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+778,0,"ecall_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+779,0,"wfi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+780,0,"fencei_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+781,0,"rega_used_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+782,0,"regb_used_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+783,0,"regc_used_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"reg_fp_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"reg_fp_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"reg_fp_c_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"reg_fp_d_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"bmask_a_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1003,0,"bmask_b_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"alu_bmask_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"alu_bmask_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+244,0,"alu_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"alu_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+789,0,"alu_op_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+790,0,"alu_op_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+791,0,"alu_op_c_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"alu_vec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"alu_vec_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scalar_replication_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scalar_replication_c_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+793,0,"imm_a_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+794,0,"imm_b_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+792,0,"regc_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"is_clpx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"is_subrot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+796,0,"mult_operator_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+245,0,"mult_int_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"mult_dot_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"mult_imm_mux_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"mult_sel_subword_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+797,0,"mult_signed_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"mult_dot_signed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"fs_off_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"frm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"fpu_dst_fmt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"fpu_src_fmt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1003,0,"fpu_int_fmt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"apu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"apu_lat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"fp_rnd_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"regfile_mem_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+243,0,"regfile_alu_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"regfile_alu_we_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"regfile_alu_waddr_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+801,0,"csr_access_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+802,0,"csr_status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"csr_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"current_priv_lvl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+798,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"prepost_useincr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+799,0,"data_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+800,0,"data_sign_extension_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"data_reg_offset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_load_event_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"hwlp_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_target_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_start_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_cnt_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+401,0,"debug_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_wfi_no_sleep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"ctrl_transfer_insn_in_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"ctrl_transfer_insn_in_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+795,0,"ctrl_transfer_target_mux_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"mcounteren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+849,0,"is_pim_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+810,0,"regfile_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"regfile_alu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+811,0,"data_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"hwlp_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+812,0,"csr_illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"ctrl_transfer_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+814,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+815,0,"mult_int_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"mult_dot_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"apu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+816,0,"is_pim",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"check_fprm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1009,0,"fpu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fpu_op_mod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fpu_vec_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1010,0,"fp_op_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "int_controller_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_SECURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"irq_sec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+647,0,"irq_req_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+648,0,"irq_sec_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"irq_id_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"irq_wu_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"mie_bypass_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"mip_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"m_ie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+397,0,"u_ie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"current_priv_lvl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+396,0,"global_irq_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+667,0,"irq_local_qual",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"irq_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+648,0,"irq_sec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "register_file_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+650,0,"raddr_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+653,0,"rdata_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"raddr_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+654,0,"rdata_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+786,0,"raddr_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"rdata_c_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"waddr_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"wdata_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+378,0,"we_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"waddr_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"wdata_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+381,0,"we_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"NUM_FP_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"NUM_TOT_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+668,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1023,0);
    VL_TRACE_DECL_WIDE(tracep,c+1011,0,"mem_fp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1023,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"waddr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"waddr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+700,0,"we_a_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+701,0,"we_b_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "if_stage_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_OBI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_SECURE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"m_trap_base_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"u_trap_base_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"trap_addr_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"dm_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+881,0,"dm_halt_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"instr_err_pmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+329,0,"instr_valid_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"instr_rdata_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+331,0,"is_compressed_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+332,0,"illegal_c_insn_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"pc_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"pc_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"is_fetch_failed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"clear_instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"pc_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"mepc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"uepc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"depc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"pc_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"exc_pc_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"m_exc_vec_pc_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"u_exc_vec_pc_mux_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"csr_mtvec_init_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"jump_target_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"jump_target_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"halt_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"if_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+228,0,"perf_imiss_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+271,0,"if_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+272,0,"if_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"prefetch_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"branch_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"branch_addr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"fetch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"fetch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+817,0,"fetch_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"exc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"trap_base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"exc_vec_pc_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fetch_failed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+279,0,"aligner_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+280,0,"instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"illegal_c_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+819,0,"instr_aligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+820,0,"instr_decompressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+821,0,"instr_compressed_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "aligner_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"fetch_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+279,0,"aligner_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+271,0,"if_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+817,0,"fetch_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+819,0,"instr_aligned_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+280,0,"instr_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_update_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+702,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"r_instr_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+704,0,"hwlp_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"pc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+284,0,"update_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+705,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+706,0,"pc_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+707,0,"aligner_ready_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+708,0,"hwlp_update_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "compressed_decoder_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"FPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"ZFINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+819,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+820,0,"instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+821,0,"is_compressed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+818,0,"illegal_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "prefetch_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_OBI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"fetch_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+817,0,"fetch_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"instr_err_pmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"FIFO_ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+285,0,"trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"trans_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"fifo_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fifo_flush_but_first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+710,0,"fifo_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+711,0,"fifo_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+287,0,"fifo_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"fifo_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"resp_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"resp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "fifo_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+1045,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"flush_but_first_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+713,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+710,0,"cnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+287,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+711,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+289,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+715,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+710,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+291,0,"mem_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+716,0,"mem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "instruction_obi_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"TRANS_STABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+285,0,"trans_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"trans_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+293,0,"trans_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"trans_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1047,0,"trans_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"trans_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+876,0,"trans_atop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"resp_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"resp_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"obi_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"obi_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"obi_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+718,0,"obi_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+719,0,"obi_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"obi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"obi_atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+842,0,"obi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"obi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"obi_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+722,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+294,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "gen_no_trans_stable", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+723,0,"obi_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+724,0,"obi_we_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+725,0,"obi_be_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+726,0,"obi_wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"obi_atop_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "prefetch_controller_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_OBI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_PULP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"FIFO_ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+880,0,"hwlp_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+285,0,"trans_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"trans_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"trans_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"fetch_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+274,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+287,0,"fifo_push_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"fifo_pop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"fifo_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"fifo_flush_but_first_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+710,0,"fifo_cnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+712,0,"fifo_empty_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+728,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+295,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+729,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"count_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"count_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+730,0,"flush_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"next_flush_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+731,0,"trans_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+732,0,"trans_addr_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"aligned_branch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+733,0,"fifo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"fifo_cnt_masked",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_wait_resp_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_flush_after_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"hwlp_flush_cnt_delayed_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_flush_resp_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"hwlp_flush_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "load_store_unit_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"PULP_OBI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"data_err_pmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"data_type_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"data_wdata_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"data_reg_offset_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+393,0,"data_load_event_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"data_sign_ext_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"data_rdata_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+392,0,"data_req_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"operand_a_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"operand_b_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+336,0,"addr_useincr_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"data_misaligned_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+298,0,"is_pim_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"data_misaligned_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"data_atop_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"data_atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"p_elw_start_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+744,0,"p_elw_finish_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+770,0,"lsu_ready_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+769,0,"lsu_ready_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"pim_base_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+341,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"trans_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"trans_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"trans_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"trans_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"trans_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"trans_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"trans_atop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"resp_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"resp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+734,0,"cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+754,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+822,0,"count_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"count_down",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+823,0,"ctrl_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"data_addr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"data_type_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"rdata_offset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+738,0,"data_sign_ext_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+739,0,"data_we_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+740,0,"data_load_event_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+741,0,"wdata_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+394,0,"misaligned_st",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"load_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"store_err_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+742,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+824,0,"data_rdata_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+856,0,"rdata_w_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"rdata_h_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+857,0,"rdata_b_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "data_obi_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"TRANS_STABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"trans_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"trans_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"trans_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"trans_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"trans_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"trans_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"trans_atop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"resp_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"resp_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"obi_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"obi_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"obi_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"obi_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"obi_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"obi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"obi_atop_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"obi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"obi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"obi_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1048,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1048,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sleep_unit_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"COREV_CLUSTER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_ungated_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk_gated_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+843,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"fetch_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+187,0,"if_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"ctrl_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+341,0,"lsu_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+872,0,"apu_busy_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+879,0,"pulp_clock_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+395,0,"p_elw_start_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+744,0,"p_elw_finish_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+771,0,"debug_p_elw_no_sleep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+772,0,"wake_from_sleep_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+303,0,"fetch_enable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+884,0,"fetch_enable_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+305,0,"core_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"core_busy_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+306,0,"p_elw_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"p_elw_busy_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+826,0,"clock_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "core_clock_gate_i", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+826,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+871,0,"scan_cg_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+850,0,"clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+858,0,"clk_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_pim_subsystem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1049,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1050,0,"SRAM_BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1051,0,"SRAM_ADDR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"data_gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"data_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"data_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"pim_imm1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"pim_imm2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"pim_base_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+827,0,"sram_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"sram_we_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"sram_be_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"sram_addr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"sram_wdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"sram_gnt_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"sram_rvalid_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"sram_rdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"mem_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"rw_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"addr_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"be_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+832,0,"data_f2s_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+759,0,"ready_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"data_s2f_r_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_decoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1050,0,"SRAM_BASE_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1051,0,"SRAM_ADDR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1052,0,"DEAD_BEEF_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"reset_n_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+318,0,"data_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+764,0,"data_gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"data_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"data_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+827,0,"sram_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"sram_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"sram_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"sram_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"sram_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"sram_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"sram_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"sram_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+743,0,"req_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"resp_target_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+310,0,"outstanding_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+833,0,"err_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+834,0,"err_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"err_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1052,0,"err_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"err_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"err_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_obi_wrapper", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+827,0,"data_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"data_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"data_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"data_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"data_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"data_gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+307,0,"data_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"data_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"mem_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"rw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+832,0,"data_f2s_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+759,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"data_s2f_r_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+313,0,"we_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"be_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sram_ctrl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1049,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+860,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+832,0,"data_f2s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"be",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+759,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"data_s2f_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"pim_cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+299,0,"pim_imm1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"pim_imm2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"pim_base_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1053,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+760,0,"state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"addr_a_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+761,0,"addr_b_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+762,0,"pim_cmd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+763,0,"is_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"addr_a_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"addr_b_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 19,0);
    VL_TRACE_DECL_BUS(tracep,c+838,0,"port_a_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+755,0,"rdata_a_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+756,0,"rdata_b_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+757,0,"mul_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_apu_core_pkg__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_apu_core_pkg__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+942,0,"APU_NARGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"APU_WOP_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"APU_NDSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"APU_NUSFLAGS_CPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_fpu_pkg__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_fpu_pkg__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1054,0,"NUM_FP_FORMATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1055,0,"FP_FORMAT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1056,0,"NUM_INT_FORMATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"INT_FORMAT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1056,0,"OP_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_pkg__0(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_init_sub__TOP__cv32e40p_pkg__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1057,0,"OPCODE_SYSTEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1058,0,"OPCODE_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1059,0,"OPCODE_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1060,0,"OPCODE_OPIMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1061,0,"OPCODE_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1062,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1063,0,"OPCODE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1064,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1065,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1066,0,"OPCODE_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1067,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1068,0,"OPCODE_OP_FP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1069,0,"OPCODE_OP_FMADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1070,0,"OPCODE_OP_FNMADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1071,0,"OPCODE_OP_FMSUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1072,0,"OPCODE_OP_FNMSUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1073,0,"OPCODE_STORE_FP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1074,0,"OPCODE_LOAD_FP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1075,0,"OPCODE_AMO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1076,0,"OPCODE_CUSTOM_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1077,0,"OPCODE_CUSTOM_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1078,0,"OPCODE_CUSTOM_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1079,0,"OPCODE_CUSTOM_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"REGC_S1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"REGC_S4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"REGC_RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1081,0,"REGC_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+944,0,"ALU_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+942,0,"MUL_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"VEC_MODE32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"VEC_MODE16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1081,0,"VEC_MODE8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"HAVERESET_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"RUNNING_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"HALTED_INDEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"CSR_OP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1055,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1082,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1083,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1084,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1085,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1086,0,"SP_DVR0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1087,0,"SP_DCR0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1088,0,"SP_DMR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1089,0,"SP_DMR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1090,0,"SP_DVR_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1091,0,"SP_DCR_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1092,0,"SP_DMR_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1093,0,"SP_DSR_MSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1094,0,"MVENDORID_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+1095,0,"MVENDORID_BANK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1096,0,"MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1097,0,"MHPMCOUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"SEL_REGFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"SEL_FW_EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"SEL_FW_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"OP_A_REGA_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"OP_A_CURRPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1099,0,"OP_A_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1100,0,"OP_A_REGB_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"OP_A_REGC_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"IMMA_Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"IMMA_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"OP_B_REGB_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"OP_B_REGC_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1099,0,"OP_B_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1100,0,"OP_B_REGA_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"OP_B_BMASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1103,0,"IMMB_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1104,0,"IMMB_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1105,0,"IMMB_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1106,0,"IMMB_PCINCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1107,0,"IMMB_S2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1108,0,"IMMB_S3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1109,0,"IMMB_VS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1110,0,"IMMB_VU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1111,0,"IMMB_SHUF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1112,0,"IMMB_CLIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1113,0,"IMMB_BI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"BMASK_A_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"BMASK_A_S3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"BMASK_B_S2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"BMASK_B_S3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"BMASK_B_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1081,0,"BMASK_B_ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"BMASK_A_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"BMASK_A_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"BMASK_B_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"BMASK_B_IMM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"MIMM_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+1102,0,"MIMM_S3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"OP_C_REGC_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"OP_C_REGB_OR_FWD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"OP_C_JT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"BRANCH_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"BRANCH_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"BRANCH_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1081,0,"BRANCH_COND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"JT_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1080,0,"JT_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1081,0,"JT_COND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+1114,0,"AMO_LR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1115,0,"AMO_SC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1116,0,"AMO_SWAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+882,0,"AMO_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1117,0,"AMO_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1118,0,"AMO_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1119,0,"AMO_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1120,0,"AMO_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1121,0,"AMO_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1122,0,"AMO_MINU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1123,0,"AMO_MAXU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1103,0,"PC_BOOT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1105,0,"PC_JUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1106,0,"PC_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1107,0,"PC_EXCEPTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1104,0,"PC_FENCEI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1108,0,"PC_MRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1109,0,"PC_URET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1110,0,"PC_DRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1111,0,"PC_HWLOOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"EXC_PC_EXCEPTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"EXC_PC_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1099,0,"EXC_PC_DBD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1100,0,"EXC_PC_DBE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1116,0,"EXC_CAUSE_INSTR_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1114,0,"EXC_CAUSE_ILLEGAL_INSN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1115,0,"EXC_CAUSE_BREAKPOINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1124,0,"EXC_CAUSE_LOAD_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1125,0,"EXC_CAUSE_STORE_FAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1119,0,"EXC_CAUSE_ECALL_UMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1126,0,"EXC_CAUSE_ECALL_MMODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1127,0,"IRQ_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"TRAP_MACHINE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+940,0,"TRAP_USER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"DBG_CAUSE_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1098,0,"DBG_CAUSE_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1099,0,"DBG_CAUSE_TRIGGER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1100,0,"DBG_CAUSE_HALTREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1101,0,"DBG_CAUSE_STEP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1128,0,"DBG_CAUSE_RSTHALTREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"DBG_SETS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"DBG_SETS_IRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+941,0,"DBG_SETS_ECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+942,0,"DBG_SETS_EILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"DBG_SETS_ELSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+878,0,"DBG_SETS_EBRK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+877,0,"DBG_SETS_SSTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1129,0,"DBG_CAUSE_HALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+1130,0,"C_RVF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"C_RVD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"C_XF16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"C_XF16ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"C_XF8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"C_XFVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BUS(tracep,c+1131,0,"C_LAT_FP64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1131,0,"C_LAT_FP16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1131,0,"C_LAT_FP16ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1131,0,"C_LAT_FP8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1043,0,"C_LAT_DIVSQRT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+992,0,"C_FLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"C_FFLAG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+942,0,"C_RM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_init_top(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_init_top\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pim_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_pim_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_pim_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_pim_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_pim_core___024root__trace_register(Vtb_pim_core___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_register\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_pim_core___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_pim_core___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_pim_core___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_pim_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_const_0_sub_0(Vtb_pim_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_pim_core___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_const_0\n"); );
    // Body
    Vtb_pim_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pim_core___024root*>(voidSelf);
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_pim_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtb_pim_core__ConstPool__CONST_h93e1b771_0;
extern const VlWide<24>/*767:0*/ Vtb_pim_core__ConstPool__CONST_hda9269f3_0;
extern const VlWide<32>/*1023:0*/ Vtb_pim_core__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void Vtb_pim_core___024root__trace_const_0_sub_0(Vtb_pim_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_const_0_sub_0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+861,(3U),32);
    bufp->fullIData(oldp+862,(6U),32);
    bufp->fullIData(oldp+863,(0x0000000fU),32);
    bufp->fullIData(oldp+864,(5U),32);
    bufp->fullIData(oldp+865,(0x00004000U),32);
    bufp->fullIData(oldp+866,(0x0000001bU),32);
    bufp->fullIData(oldp+867,(0x00000019U),32);
    bufp->fullIData(oldp+868,(0x0000001aU),32);
    bufp->fullIData(oldp+869,(0x0000deadU),32);
    bufp->fullIData(oldp+870,(0x00002710U),32);
    bufp->fullBit(oldp+871,(0U));
    bufp->fullBit(oldp+872,(0U));
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+873,(__Vtemp_1),96);
    bufp->fullCData(oldp+876,(0U),6);
    bufp->fullIData(oldp+877,(0U),32);
    bufp->fullIData(oldp+878,(1U),32);
    bufp->fullBit(oldp+879,(1U));
    bufp->fullIData(oldp+880,(0U),32);
    bufp->fullIData(oldp+881,(0x1a110800U),32);
    bufp->fullCData(oldp+882,(0U),5);
    bufp->fullIData(oldp+883,(0x00000010U),32);
    bufp->fullBit(oldp+884,(1U));
    bufp->fullIData(oldp+885,(2U),32);
    bufp->fullCData(oldp+886,(0U),3);
    bufp->fullCData(oldp+887,(0U),5);
    bufp->fullIData(oldp+888,(0U),18);
    bufp->fullCData(oldp+889,(0U),3);
    bufp->fullSData(oldp+890,(0U),12);
    bufp->fullCData(oldp+891,(0U),2);
    bufp->fullIData(oldp+892,(0U),24);
    bufp->fullCData(oldp+893,(0U),2);
    bufp->fullCData(oldp+894,(3U),2);
    bufp->fullIData(oldp+895,(0U),32);
    bufp->fullQData(oldp+896,(0ULL),64);
    bufp->fullWData(oldp+898,(Vtb_pim_core__ConstPool__CONST_h93e1b771_0),512);
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    bufp->fullWData(oldp+914,(__Vtemp_2),128);
    bufp->fullIData(oldp+918,(0U),24);
    bufp->fullWData(oldp+919,(Vtb_pim_core__ConstPool__CONST_h93e1b771_0),512);
    __Vtemp_3[0U] = 0U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    bufp->fullWData(oldp+935,(__Vtemp_3),128);
    bufp->fullCData(oldp+939,(3U),2);
    bufp->fullCData(oldp+940,(1U),2);
    bufp->fullIData(oldp+941,(4U),32);
    bufp->fullIData(oldp+942,(3U),32);
    bufp->fullIData(oldp+943,(5U),32);
    bufp->fullIData(oldp+944,(7U),32);
    bufp->fullIData(oldp+945,(8U),32);
    bufp->fullIData(oldp+946,(0x0000000bU),32);
    bufp->fullIData(oldp+947,(0x0000000cU),32);
    bufp->fullIData(oldp+948,(0x0000000dU),32);
    bufp->fullIData(oldp+949,(0x0000000eU),32);
    bufp->fullIData(oldp+950,(0x00000011U),32);
    bufp->fullIData(oldp+951,(0x0000001fU),32);
    bufp->fullIData(oldp+952,(0x40001104U),32);
    bufp->fullCData(oldp+953,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__frm_q),3);
    bufp->fullCData(oldp+954,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__frm_n),3);
    bufp->fullCData(oldp+955,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__fflags_q),5);
    bufp->fullCData(oldp+956,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__fflags_n),5);
    bufp->fullBit(oldp+957,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_update));
    bufp->fullSData(oldp+958,(4U),16);
    bufp->fullCData(oldp+959,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_fs_q),2);
    bufp->fullCData(oldp+960,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_fs_n),2);
    bufp->fullCData(oldp+961,(3U),2);
    bufp->fullWData(oldp+962,(Vtb_pim_core__ConstPool__CONST_hda9269f3_0),768);
    bufp->fullSData(oldp+986,(0U),16);
    bufp->fullIData(oldp+987,(6U),32);
    bufp->fullIData(oldp+988,(0x0000000fU),32);
    bufp->fullBit(oldp+989,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__apu_rvalid_q));
    bufp->fullIData(oldp+990,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__apu_result_q),32);
    bufp->fullCData(oldp+991,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__apu_flags_q),5);
    bufp->fullIData(oldp+992,(0x00000020U),32);
    __Vtemp_4[0U] = 0x8a418820U;
    __Vtemp_4[1U] = 0xc5a92839U;
    __Vtemp_4[2U] = 0xca307b9aU;
    __Vtemp_4[3U] = 0x38bdab49U;
    __Vtemp_4[4U] = 0xffbbcdebU;
    bufp->fullWData(oldp+993,(__Vtemp_4),160);
    bufp->fullIData(oldp+998,(0x00000013U),32);
    bufp->fullIData(oldp+999,(0x00000018U),32);
    bufp->fullIData(oldp+1000,(0x00000014U),32);
    bufp->fullIData(oldp+1001,(0x0000001bU),32);
    bufp->fullCData(oldp+1002,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec),2);
    bufp->fullCData(oldp+1003,(2U),2);
    bufp->fullSData(oldp+1004,(0U),15);
    bufp->fullBit(oldp+1005,(0U));
    bufp->fullBit(oldp+1006,(0U));
    bufp->fullQData(oldp+1007,(0ULL),64);
    bufp->fullCData(oldp+1009,(6U),4);
    bufp->fullCData(oldp+1010,(0U),2);
    bufp->fullWData(oldp+1011,(Vtb_pim_core__ConstPool__CONST_hd6b7ba52_0),1024);
    bufp->fullIData(oldp+1043,(1U),32);
    bufp->fullBit(oldp+1044,(0U));
    bufp->fullIData(oldp+1045,(0x00000020U),32);
    bufp->fullIData(oldp+1046,(2U),32);
    bufp->fullCData(oldp+1047,(0x0fU),4);
    bufp->fullBit(oldp+1048,(0U));
    bufp->fullIData(oldp+1049,(0x00000013U),32);
    bufp->fullIData(oldp+1050,(0x20000000U),32);
    bufp->fullIData(oldp+1051,(0xfff00000U),32);
    bufp->fullIData(oldp+1052,(0xdeadbeefU),32);
    bufp->fullIData(oldp+1053,(0x00080000U),32);
    bufp->fullIData(oldp+1054,(5U),32);
    bufp->fullIData(oldp+1055,(3U),32);
    bufp->fullIData(oldp+1056,(4U),32);
    bufp->fullCData(oldp+1057,(0x73U),7);
    bufp->fullCData(oldp+1058,(0x0fU),7);
    bufp->fullCData(oldp+1059,(0x33U),7);
    bufp->fullCData(oldp+1060,(0x13U),7);
    bufp->fullCData(oldp+1061,(0x23U),7);
    bufp->fullCData(oldp+1062,(3U),7);
    bufp->fullCData(oldp+1063,(0x63U),7);
    bufp->fullCData(oldp+1064,(0x67U),7);
    bufp->fullCData(oldp+1065,(0x6fU),7);
    bufp->fullCData(oldp+1066,(0x17U),7);
    bufp->fullCData(oldp+1067,(0x37U),7);
    bufp->fullCData(oldp+1068,(0x53U),7);
    bufp->fullCData(oldp+1069,(0x43U),7);
    bufp->fullCData(oldp+1070,(0x4fU),7);
    bufp->fullCData(oldp+1071,(0x47U),7);
    bufp->fullCData(oldp+1072,(0x4bU),7);
    bufp->fullCData(oldp+1073,(0x27U),7);
    bufp->fullCData(oldp+1074,(7U),7);
    bufp->fullCData(oldp+1075,(0x2fU),7);
    bufp->fullCData(oldp+1076,(0x0bU),7);
    bufp->fullCData(oldp+1077,(0x2bU),7);
    bufp->fullCData(oldp+1078,(0x5bU),7);
    bufp->fullCData(oldp+1079,(0x7bU),7);
    bufp->fullCData(oldp+1080,(2U),2);
    bufp->fullCData(oldp+1081,(3U),2);
    bufp->fullIData(oldp+1082,(7U),32);
    bufp->fullIData(oldp+1083,(0x0000000bU),32);
    bufp->fullIData(oldp+1084,(0x00000010U),32);
    bufp->fullIData(oldp+1085,(0x0000001fU),32);
    bufp->fullSData(oldp+1086,(0x3000U),16);
    bufp->fullSData(oldp+1087,(0x3008U),16);
    bufp->fullSData(oldp+1088,(0x3010U),16);
    bufp->fullSData(oldp+1089,(0x3011U),16);
    bufp->fullCData(oldp+1090,(0U),8);
    bufp->fullCData(oldp+1091,(1U),8);
    bufp->fullCData(oldp+1092,(2U),8);
    bufp->fullCData(oldp+1093,(4U),8);
    bufp->fullCData(oldp+1094,(2U),7);
    bufp->fullIData(oldp+1095,(0x0000000cU),25);
    bufp->fullIData(oldp+1096,(4U),32);
    bufp->fullIData(oldp+1097,(0x00000040U),32);
    bufp->fullCData(oldp+1098,(1U),3);
    bufp->fullCData(oldp+1099,(2U),3);
    bufp->fullCData(oldp+1100,(3U),3);
    bufp->fullCData(oldp+1101,(4U),3);
    bufp->fullBit(oldp+1102,(1U));
    bufp->fullCData(oldp+1103,(0U),4);
    bufp->fullCData(oldp+1104,(1U),4);
    bufp->fullCData(oldp+1105,(2U),4);
    bufp->fullCData(oldp+1106,(3U),4);
    bufp->fullCData(oldp+1107,(4U),4);
    bufp->fullCData(oldp+1108,(5U),4);
    bufp->fullCData(oldp+1109,(6U),4);
    bufp->fullCData(oldp+1110,(7U),4);
    bufp->fullCData(oldp+1111,(8U),4);
    bufp->fullCData(oldp+1112,(9U),4);
    bufp->fullCData(oldp+1113,(0x0bU),4);
    bufp->fullCData(oldp+1114,(2U),5);
    bufp->fullCData(oldp+1115,(3U),5);
    bufp->fullCData(oldp+1116,(1U),5);
    bufp->fullCData(oldp+1117,(4U),5);
    bufp->fullCData(oldp+1118,(0x0cU),5);
    bufp->fullCData(oldp+1119,(8U),5);
    bufp->fullCData(oldp+1120,(0x10U),5);
    bufp->fullCData(oldp+1121,(0x14U),5);
    bufp->fullCData(oldp+1122,(0x18U),5);
    bufp->fullCData(oldp+1123,(0x1cU),5);
    bufp->fullCData(oldp+1124,(5U),5);
    bufp->fullCData(oldp+1125,(7U),5);
    bufp->fullCData(oldp+1126,(0x0bU),5);
    bufp->fullIData(oldp+1127,(0xffff0888U),32);
    bufp->fullCData(oldp+1128,(5U),3);
    bufp->fullCData(oldp+1129,(0x1fU),6);
    bufp->fullBit(oldp+1130,(1U));
    bufp->fullIData(oldp+1131,(0U),32);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_full_0_sub_0(Vtb_pim_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_pim_core___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_full_0\n"); );
    // Body
    Vtb_pim_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pim_core___024root*>(voidSelf);
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_pim_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_pim_core___024root__trace_full_0_sub_0(Vtb_pim_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_full_0_sub_0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<64>/*2047:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we) 
                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[772U])
                              ? (0xffff0888U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata)
                              : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q)),32);
    bufp->fullIData(oldp+1,(((((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2847U]) 
                                    << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2846U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2845U]) 
                                      << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2844U]))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2843U]) 
                                    << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2842U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2841U]) 
                                      << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2840U]))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2839U]) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2838U]) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2837U]) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2836U]))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2835U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2834U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2833U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2832U]))))) 
                              << 0x00000010U) | (((
                                                   (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2831U]) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2830U]) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2829U]) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2828U]))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2827U]) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2826U]) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2825U]) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2824U]))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2823U]) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2822U]) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2821U]) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2820U]))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2817U]) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__))))))),32);
    bufp->fullIData(oldp+2,(((((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2847U])) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2975U])) 
                                    << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2846U])) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2974U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2845U])) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2973U])) 
                                      << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2844U])) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2972U])))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2843U])) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2971U])) 
                                    << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2842U])) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2970U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2841U])) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2969U])) 
                                      << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2840U])) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2968U])))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2839U])) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2967U])) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2838U])) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2966U])) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2837U])) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2965U])) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2836U])) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2964U])))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2835U])) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2963U])) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2834U])) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2962U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2833U])) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2961U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2832U])) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2960U])))))) 
                              << 0x00000010U) | (((
                                                   (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & ((~ 
                                                           ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2831U])) 
                                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2959U])) 
                                                      << 3U) 
                                                     | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & ((~ 
                                                             ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2830U])) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2958U])) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & ((~ 
                                                             ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2829U])) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2957U])) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                          & ((~ 
                                                              ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2828U])) 
                                                             & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2956U])))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & ((~ 
                                                             ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2827U])) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2955U])) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & ((~ 
                                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2826U])) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2954U])) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & ((~ 
                                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2825U])) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2953U])) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & ((~ 
                                                                ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2824U])) 
                                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2952U])))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & ((~ 
                                                             ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2823U])) 
                                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2951U])) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & ((~ 
                                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2822U])) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2950U])) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                           & ((~ 
                                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2821U])) 
                                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2949U])) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & ((~ 
                                                                ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2820U])) 
                                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2948U])))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & ((~ 
                                                                ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2817U])) 
                                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2945U])) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__))))))),32);
    bufp->fullBit(oldp+3,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[774U])));
    bufp->fullBit(oldp+4,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[800U])));
    bufp->fullBit(oldp+5,((vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[1953U] 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))));
    bufp->fullBit(oldp+6,((vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[1954U] 
                           & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))));
    bufp->fullWData(oldp+7,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q),2048);
    bufp->fullWData(oldp+71,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
    bufp->fullIData(oldp+103,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
    __Vtemp_31[0U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    __Vtemp_31[1U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                              >> 0x00000020U));
    __Vtemp_31[2U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    __Vtemp_31[3U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                              >> 0x00000020U));
    __Vtemp_31[4U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    __Vtemp_31[5U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                              >> 0x00000020U));
    __Vtemp_31[6U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    __Vtemp_31[7U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                              >> 0x00000020U));
    __Vtemp_31[8U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    __Vtemp_31[9U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                              >> 0x00000020U));
    __Vtemp_31[10U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))));
    __Vtemp_31[11U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))) 
                               >> 0x00000020U));
    __Vtemp_31[12U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))));
    __Vtemp_31[13U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))) 
                               >> 0x00000020U));
    __Vtemp_31[14U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))));
    __Vtemp_31[15U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))) 
                               >> 0x00000020U));
    __Vtemp_31[16U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))));
    __Vtemp_31[17U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))) 
                               >> 0x00000020U));
    __Vtemp_31[18U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))));
    __Vtemp_31[19U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))) 
                               >> 0x00000020U));
    __Vtemp_31[20U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))));
    __Vtemp_31[21U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))) 
                               >> 0x00000020U));
    __Vtemp_31[22U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))));
    __Vtemp_31[23U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))) 
                               >> 0x00000020U));
    __Vtemp_31[24U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))));
    __Vtemp_31[25U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))) 
                               >> 0x00000020U));
    __Vtemp_31[26U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))));
    __Vtemp_31[27U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))) 
                               >> 0x00000020U));
    __Vtemp_31[28U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))));
    __Vtemp_31[29U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))) 
                               >> 0x00000020U));
    __Vtemp_31[30U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))));
    __Vtemp_31[31U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))) 
                               >> 0x00000020U));
    __Vtemp_31[32U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))));
    __Vtemp_31[33U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))) 
                               >> 0x00000020U));
    __Vtemp_31[34U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))));
    __Vtemp_31[35U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))) 
                               >> 0x00000020U));
    __Vtemp_31[36U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))));
    __Vtemp_31[37U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))) 
                               >> 0x00000020U));
    __Vtemp_31[38U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))));
    __Vtemp_31[39U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))) 
                               >> 0x00000020U));
    __Vtemp_31[40U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))));
    __Vtemp_31[41U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))) 
                               >> 0x00000020U));
    __Vtemp_31[42U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))));
    __Vtemp_31[43U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))) 
                               >> 0x00000020U));
    __Vtemp_31[44U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))));
    __Vtemp_31[45U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))) 
                               >> 0x00000020U));
    __Vtemp_31[46U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))));
    __Vtemp_31[47U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))) 
                               >> 0x00000020U));
    __Vtemp_31[48U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))));
    __Vtemp_31[49U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))) 
                               >> 0x00000020U));
    __Vtemp_31[50U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))));
    __Vtemp_31[51U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))) 
                               >> 0x00000020U));
    __Vtemp_31[52U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))));
    __Vtemp_31[53U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))) 
                               >> 0x00000020U));
    __Vtemp_31[54U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))));
    __Vtemp_31[55U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))) 
                               >> 0x00000020U));
    __Vtemp_31[56U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))));
    __Vtemp_31[57U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))) 
                               >> 0x00000020U));
    __Vtemp_31[58U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))));
    __Vtemp_31[59U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))) 
                               >> 0x00000020U));
    __Vtemp_31[60U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))));
    __Vtemp_31[61U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))) 
                               >> 0x00000020U));
    __Vtemp_31[62U] = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))));
    __Vtemp_31[63U] = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))) 
                               >> 0x00000020U));
    bufp->fullWData(oldp+104,(__Vtemp_31),2048);
    bufp->fullIData(oldp+168,(((((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
                                 & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__)) 
                                    & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                           >> 3U)) 
                                       & (0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
                                                 & (1U 
                                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed) 
                                                         << 0x0000000aU) 
                                                        | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch_taken) 
                                                            << 9U) 
                                                           | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch) 
                                                              << 8U))) 
                                                       | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jump) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_store) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_load) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_imiss))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall) 
                                                                 << 2U)) 
                                                             | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret) 
                                                                << 1U)))))))))) 
                                << 3U) | ((((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
                                            & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__)) 
                                               & ((~ 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                    >> 2U)) 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret)))) 
                                           << 2U) | 
                                          (1U & (~ 
                                                 ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__) 
                                                  | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__)))))))),32);
    bufp->fullIData(oldp+169,((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                                 ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 1U)) : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
                               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))))),32);
    bufp->fullIData(oldp+170,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
                                ? (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                                    ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                                       + vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                                    : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                                       - vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
                                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)),32);
    bufp->fullIData(oldp+171,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
                                ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI
                                    : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                                        << 0x0000001fU) 
                                       | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                          >> 1U))) : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)),32);
    bufp->fullBit(oldp+172,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                    ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                       >> 1U) : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)))));
    bufp->fullBit(oldp+173,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                              ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI)
                              : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP))));
    bufp->fullBit(oldp+174,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                              ? (((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                                  | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                     >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))
                              : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP))));
    bufp->fullIData(oldp+175,((((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                                   + vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                                   - vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))),32);
    bufp->fullIData(oldp+176,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI
                                : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                      >> 1U)))),32);
    bufp->fullCData(oldp+177,((0x0000003fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                               ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI)
                                               : ((0U 
                                                   != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))))),6);
    bufp->fullBit(oldp+178,(((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))));
    bufp->fullBit(oldp+179,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready));
    bufp->fullIData(oldp+180,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D),32);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D),32);
    bufp->fullBit(oldp+182,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S));
    bufp->fullBit(oldp+183,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S));
    bufp->fullBit(oldp+184,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S));
    bufp->fullBit(oldp+185,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S));
    bufp->fullCData(oldp+186,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN),2);
    bufp->fullBit(oldp+187,(((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                             | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))));
    bufp->fullCData(oldp+188,((((3U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000000cU)))
                                 ? 1U : (2U & (- (IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                              >> 0x0000000cU))))))) 
                               & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44))))),2);
    bufp->fullCData(oldp+189,((0x0000003fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001aU) 
                                              & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)))))),6);
    bufp->fullCData(oldp+190,((0x0000003fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U) 
                                              & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)))))),6);
    bufp->fullBit(oldp+191,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i)
                                    ? ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q))
                                    : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)))));
    bufp->fullBit(oldp+192,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)
                                    ? ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q))
                                    : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)))));
    bufp->fullBit(oldp+193,(((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))));
    bufp->fullCData(oldp+194,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set))))))),2);
    bufp->fullBit(oldp+195,((((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid)) 
                             | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy) 
                                | ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                   | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i))))));
    bufp->fullBit(oldp+196,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o));
    bufp->fullIData(oldp+197,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o),32);
    bufp->fullCData(oldp+198,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o),2);
    bufp->fullCData(oldp+199,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o),6);
    bufp->fullCData(oldp+200,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o),6);
    bufp->fullBit(oldp+201,(vlSelfRef.tb_pim_core__DOT__irq_ack_unused));
    bufp->fullCData(oldp+202,(vlSelfRef.tb_pim_core__DOT__irq_id_unused),5);
    bufp->fullBit(oldp+203,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clear_instr_valid_i));
    bufp->fullBit(oldp+204,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set));
    bufp->fullCData(oldp+205,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id),4);
    bufp->fullCData(oldp+206,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id),3);
    bufp->fullCData(oldp+207,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i),5);
    bufp->fullCData(oldp+208,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause),5);
    bufp->fullCData(oldp+209,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux),2);
    bufp->fullBit(oldp+210,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding));
    bufp->fullBit(oldp+211,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i));
    bufp->fullBit(oldp+212,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy));
    bufp->fullBit(oldp+213,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if));
    bufp->fullBit(oldp+214,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i));
    bufp->fullBit(oldp+215,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i));
    bufp->fullBit(oldp+216,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int));
    bufp->fullBit(oldp+217,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_irq_sec));
    bufp->fullBit(oldp+218,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause));
    bufp->fullBit(oldp+219,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if));
    bufp->fullBit(oldp+220,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id));
    bufp->fullCData(oldp+221,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause),6);
    bufp->fullBit(oldp+222,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id));
    bufp->fullBit(oldp+223,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_uret_id));
    bufp->fullBit(oldp+224,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id));
    bufp->fullBit(oldp+225,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
                             & (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id)))));
    bufp->fullCData(oldp+226,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause),3);
    bufp->fullBit(oldp+227,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_csr_save));
    bufp->fullBit(oldp+228,((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
                                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid))))));
    bufp->fullIData(oldp+229,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n),32);
    bufp->fullIData(oldp+230,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n),32);
    bufp->fullIData(oldp+231,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n),32);
    bufp->fullIData(oldp+232,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
    bufp->fullCData(oldp+233,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n),7);
    bufp->fullCData(oldp+234,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n),6);
    bufp->fullIData(oldp+235,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n),24);
    bufp->fullBit(oldp+236,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause) 
                                   >> 5U))));
    bufp->fullCData(oldp+237,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n),2);
    bufp->fullBit(oldp+238,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o));
    bufp->fullCData(oldp+239,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i),2);
    bufp->fullBit(oldp+240,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o));
    bufp->fullBit(oldp+241,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__hwlp_mask));
    bufp->fullBit(oldp+242,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id));
    bufp->fullBit(oldp+243,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o));
    bufp->fullBit(oldp+244,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o));
    bufp->fullBit(oldp+245,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o));
    bufp->fullBit(oldp+246,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o));
    bufp->fullBit(oldp+247,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o));
    bufp->fullCData(oldp+248,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel),2);
    bufp->fullCData(oldp+249,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel),2);
    bufp->fullCData(oldp+250,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel),2);
    bufp->fullIData(oldp+251,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id),32);
    bufp->fullIData(oldp+252,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id),32);
    bufp->fullIData(oldp+253,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id),32);
    bufp->fullIData(oldp+254,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b),32);
    bufp->fullIData(oldp+255,(((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b))),32);
    bufp->fullIData(oldp+256,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c),32);
    bufp->fullIData(oldp+257,(((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c))),32);
    bufp->fullIData(oldp+258,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
    bufp->fullBit(oldp+259,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret));
    bufp->fullBit(oldp+260,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall));
    bufp->fullCData(oldp+261,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),5);
    bufp->fullCData(oldp+262,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns),3);
    bufp->fullBit(oldp+263,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done));
    bufp->fullBit(oldp+264,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec));
    bufp->fullBit(oldp+265,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id));
    bufp->fullBit(oldp+266,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    bufp->fullBit(oldp+267,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode));
    bufp->fullBit(oldp+268,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
    bufp->fullBit(oldp+269,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
    bufp->fullBit(oldp+270,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
    bufp->fullBit(oldp+271,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid));
    bufp->fullBit(oldp+272,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i))));
    bufp->fullIData(oldp+273,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n),32);
    bufp->fullBit(oldp+274,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid));
    bufp->fullBit(oldp+275,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready));
    bufp->fullIData(oldp+276,(((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))
                                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr 
                                   << 8U) : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))
                                              ? (0x1a110800U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))))))
                                              : ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr 
                                                  << 8U) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id)))) 
                                                    & (((0U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))
                                                         ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i)
                                                         : 
                                                        ((- (IData)(
                                                                    (1U 
                                                                     != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux)))) 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i))) 
                                                       << 2U)))))),32);
    bufp->fullIData(oldp+277,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr),24);
    bufp->fullCData(oldp+278,(((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))
                                ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i)
                                : ((- (IData)((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux)))) 
                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i)))),5);
    bufp->fullBit(oldp+279,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready));
    bufp->fullBit(oldp+280,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid));
    bufp->fullIData(oldp+281,((0xfffffffeU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)),32);
    bufp->fullCData(oldp+282,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state),3);
    bufp->fullIData(oldp+283,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n),32);
    bufp->fullBit(oldp+284,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state));
    bufp->fullBit(oldp+285,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    bufp->fullIData(oldp+286,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr),32);
    bufp->fullBit(oldp+287,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i));
    bufp->fullBit(oldp+288,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)))));
    bufp->fullCData(oldp+290,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n),2);
    bufp->fullQData(oldp+291,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n),64);
    bufp->fullIData(oldp+293,((0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr)),32);
    bufp->fullBit(oldp+294,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
    bufp->fullBit(oldp+295,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
    bufp->fullCData(oldp+296,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt),2);
    bufp->fullIData(oldp+297,((0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)),32);
    bufp->fullBit(oldp+298,((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o))));
    bufp->fullIData(oldp+299,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1),32);
    bufp->fullIData(oldp+300,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2),32);
    bufp->fullIData(oldp+301,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum),20);
    bufp->fullIData(oldp+302,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum),20);
    bufp->fullBit(oldp+303,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q));
    bufp->fullBit(oldp+304,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q));
    bufp->fullBit(oldp+305,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q));
    bufp->fullBit(oldp+306,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__p_elw_busy_q));
    bufp->fullBit(oldp+307,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int));
    bufp->fullIData(oldp+308,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int),32);
    bufp->fullCData(oldp+309,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg),2);
    bufp->fullBit(oldp+310,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q));
    bufp->fullCData(oldp+311,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_state),2);
    bufp->fullCData(oldp+312,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state),2);
    bufp->fullBit(oldp+313,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__we_reg));
    bufp->fullIData(oldp+314,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__addr_reg),19);
    bufp->fullIData(oldp+315,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__wdata_reg),32);
    bufp->fullCData(oldp+316,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__be_reg),4);
    bufp->fullIData(oldp+317,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_reg),19);
    bufp->fullBit(oldp+318,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i));
    bufp->fullBit(oldp+319,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex));
    bufp->fullCData(oldp+320,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i),4);
    bufp->fullIData(oldp+321,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i),32);
    bufp->fullIData(oldp+322,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i),32);
    bufp->fullIData(oldp+323,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex),32);
    bufp->fullSData(oldp+324,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_flags_ex),15);
    bufp->fullBit(oldp+325,((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs))));
    bufp->fullBit(oldp+326,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                   >> 1U))));
    bufp->fullBit(oldp+327,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                   >> 2U))));
    bufp->fullCData(oldp+328,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_atop_ex),6);
    bufp->fullBit(oldp+329,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id));
    bufp->fullIData(oldp+330,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id),32);
    bufp->fullBit(oldp+331,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_compressed_id));
    bufp->fullBit(oldp+332,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__illegal_c_insn_id));
    bufp->fullBit(oldp+333,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id));
    bufp->fullIData(oldp+334,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q),32);
    bufp->fullIData(oldp+335,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id),32);
    bufp->fullBit(oldp+336,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex));
    bufp->fullBit(oldp+337,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle));
    bufp->fullIData(oldp+338,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex),32);
    bufp->fullBit(oldp+339,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex));
    bufp->fullBit(oldp+340,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                   >> 3U))));
    bufp->fullBit(oldp+341,(((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                             | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i))));
    bufp->fullIData(oldp+342,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_ex),32);
    bufp->fullBit(oldp+343,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex));
    bufp->fullCData(oldp+344,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex),7);
    bufp->fullIData(oldp+345,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex),32);
    bufp->fullCData(oldp+346,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex),5);
    bufp->fullCData(oldp+347,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex),5);
    bufp->fullCData(oldp+348,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex),2);
    bufp->fullCData(oldp+349,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex),2);
    bufp->fullBit(oldp+350,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex));
    bufp->fullBit(oldp+351,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex));
    bufp->fullCData(oldp+352,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex),2);
    bufp->fullCData(oldp+353,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex),3);
    bufp->fullIData(oldp+354,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex),32);
    bufp->fullIData(oldp+355,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex),32);
    bufp->fullIData(oldp+356,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex),32);
    bufp->fullBit(oldp+357,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex));
    bufp->fullBit(oldp+358,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex));
    bufp->fullCData(oldp+359,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex),2);
    bufp->fullCData(oldp+360,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex),5);
    bufp->fullIData(oldp+361,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex),32);
    bufp->fullIData(oldp+362,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex),32);
    bufp->fullIData(oldp+363,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex),32);
    bufp->fullCData(oldp+364,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex),2);
    bufp->fullBit(oldp+365,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex));
    bufp->fullCData(oldp+366,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_shift_ex),2);
    bufp->fullBit(oldp+367,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex));
    bufp->fullBit(oldp+368,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex));
    bufp->fullCData(oldp+369,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_op_ex),6);
    bufp->fullCData(oldp+370,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_lat_ex),2);
    bufp->fullWData(oldp+371,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_operands_ex),96);
    bufp->fullCData(oldp+374,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_waddr_ex),6);
    bufp->fullCData(oldp+375,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex),6);
    bufp->fullBit(oldp+376,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex));
    bufp->fullCData(oldp+377,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu),6);
    bufp->fullBit(oldp+378,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu));
    bufp->fullCData(oldp+379,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex),6);
    bufp->fullBit(oldp+380,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex));
    bufp->fullBit(oldp+381,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i));
    bufp->fullIData(oldp+382,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw),32);
    bufp->fullBit(oldp+383,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex));
    bufp->fullCData(oldp+384,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex),2);
    bufp->fullIData(oldp+385,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q),24);
    bufp->fullCData(oldp+386,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q),2);
    bufp->fullSData(oldp+387,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i),12);
    bufp->fullIData(oldp+388,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o),32);
    bufp->fullCData(oldp+389,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex),2);
    bufp->fullCData(oldp+390,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_sign_ext_ex),2);
    bufp->fullCData(oldp+391,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_reg_offset_ex),2);
    bufp->fullBit(oldp+392,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex));
    bufp->fullBit(oldp+393,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex));
    bufp->fullBit(oldp+394,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex));
    bufp->fullBit(oldp+395,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i))));
    bufp->fullBit(oldp+396,(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                             & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                >> 5U))));
    bufp->fullBit(oldp+397,(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                             & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                >> 6U))));
    bufp->fullIData(oldp+398,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q),32);
    bufp->fullIData(oldp+399,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q),32);
    bufp->fullIData(oldp+400,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q),32);
    bufp->fullBit(oldp+401,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    bufp->fullBit(oldp+402,((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                   >> 2U))));
    bufp->fullBit(oldp+403,((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                   >> 0x0000000fU))));
    bufp->fullBit(oldp+404,((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                   >> 0x0000000cU))));
    bufp->fullBit(oldp+405,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o));
    bufp->fullBit(oldp+406,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret));
    bufp->fullBit(oldp+407,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_load));
    bufp->fullBit(oldp+408,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_store));
    bufp->fullBit(oldp+409,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jump));
    bufp->fullBit(oldp+410,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch));
    bufp->fullBit(oldp+411,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch_taken));
    bufp->fullBit(oldp+412,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed));
    bufp->fullBit(oldp+413,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall));
    bufp->fullBit(oldp+414,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_imiss));
    bufp->fullBit(oldp+415,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall));
    bufp->fullBit(oldp+416,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_pipe_stall));
    bufp->fullIData(oldp+417,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
    bufp->fullBit(oldp+418,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
    bufp->fullIData(oldp+419,((0x28001040U | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                              << 2U))),32);
    bufp->fullIData(oldp+420,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q),32);
    bufp->fullIData(oldp+421,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q),32);
    bufp->fullIData(oldp+422,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q),32);
    bufp->fullIData(oldp+423,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n),32);
    bufp->fullIData(oldp+424,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q),32);
    bufp->fullIData(oldp+425,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n),32);
    bufp->fullIData(oldp+426,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q),32);
    bufp->fullIData(oldp+427,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n),32);
    bufp->fullCData(oldp+428,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q),7);
    bufp->fullCData(oldp+429,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q),6);
    bufp->fullCData(oldp+430,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_n),2);
    bufp->fullIData(oldp+431,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q),32);
    bufp->fullIData(oldp+432,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_n),32);
    bufp->fullIData(oldp+433,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata),32);
    bufp->fullBit(oldp+434,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we));
    bufp->fullWData(oldp+435,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
    bufp->fullIData(oldp+467,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
    bufp->fullSData(oldp+468,((1U | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed) 
                                       << 0x0000000aU) 
                                      | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch_taken) 
                                          << 9U) | 
                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch) 
                                          << 8U))) 
                                     | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jump) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_store) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_load) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_imiss))) 
                                         << 4U) | (
                                                   (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall) 
                                                       << 2U)) 
                                                   | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret) 
                                                      << 1U)))))),16);
    bufp->fullBit(oldp+469,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we));
    bufp->fullBit(oldp+470,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q));
    bufp->fullIData(oldp+471,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result),32);
    bufp->fullIData(oldp+472,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result),32);
    bufp->fullBit(oldp+473,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active));
    bufp->fullBit(oldp+474,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready));
    bufp->fullIData(oldp+475,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev),32);
    bufp->fullIData(oldp+476,((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)),32);
    bufp->fullIData(oldp+477,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev),32);
    bufp->fullIData(oldp+478,((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)),32);
    bufp->fullCData(oldp+479,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI),6);
    bufp->fullBit(oldp+480,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI));
    bufp->fullIData(oldp+481,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask),32);
    bufp->fullBit(oldp+482,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate));
    bufp->fullIData(oldp+483,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a),32);
    bufp->fullIData(oldp+484,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b),32);
    bufp->fullQData(oldp+485,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a),36);
    bufp->fullQData(oldp+487,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b),36);
    bufp->fullIData(oldp+489,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result),32);
    bufp->fullQData(oldp+490,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded),37);
    bufp->fullIData(oldp+492,(((- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                           | ((0x1fU 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                              | (0x1eU 
                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))) 
                               & VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U))),32);
    bufp->fullIData(oldp+493,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                               + ((- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                              | ((0x1fU 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                                 | (0x1eU 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))) 
                                  & VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U)))),32);
    bufp->fullBit(oldp+494,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left));
    bufp->fullBit(oldp+495,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round));
    bufp->fullBit(oldp+496,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic));
    bufp->fullIData(oldp+497,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left),32);
    bufp->fullIData(oldp+498,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt),32);
    bufp->fullIData(oldp+499,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int),32);
    bufp->fullIData(oldp+500,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex)
                                ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex) 
                                    << 0x00000010U) 
                                   | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex))
                                : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                    << 0x00000018U) 
                                   | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                       << 0x00000010U) 
                                      | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                          << 8U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex)))))),32);
    bufp->fullIData(oldp+501,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a),32);
    bufp->fullIData(oldp+502,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result),32);
    bufp->fullIData(oldp+503,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result),32);
    bufp->fullIData(oldp+504,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI),32);
    bufp->fullSData(oldp+505,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex),16);
    bufp->fullQData(oldp+506,(((0x26U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                ? (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                                : (((QData)((IData)(
                                                    (- (IData)(
                                                               ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                                 >> 0x0000001fU) 
                                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic)))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))))),64);
    bufp->fullCData(oldp+508,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal),4);
    bufp->fullCData(oldp+509,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater),4);
    bufp->fullCData(oldp+510,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed),4);
    bufp->fullCData(oldp+511,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec),4);
    bufp->fullCData(oldp+512,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec),4);
    bufp->fullIData(oldp+513,(((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex) 
                               & (- (IData)((0x17U 
                                             != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))),32);
    bufp->fullBit(oldp+514,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip));
    bufp->fullCData(oldp+515,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result),4);
    bufp->fullIData(oldp+516,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax),32);
    bufp->fullCData(oldp+517,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax),4);
    bufp->fullBit(oldp+518,(((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                             | ((0x10U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                | ((0x11U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                   | (0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))));
    bufp->fullIData(oldp+519,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b),32);
    bufp->fullIData(oldp+520,(((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
                                   & (- (IData)((1U 
                                                 & (~ 
                                                    ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x0000001fU) 
                                                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))))))
                                : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                    | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                       >> 0x00000024U))
                                    ? (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
                                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))),32);
    bufp->fullCData(oldp+521,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel),8);
    bufp->fullCData(oldp+522,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel),4);
    bufp->fullCData(oldp+523,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel),2);
    bufp->fullCData(oldp+524,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel),2);
    bufp->fullCData(oldp+525,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through),4);
    bufp->fullIData(oldp+526,(((((0x0000ff00U & (((0x00000080U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((0x00000040U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((0x00000040U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 8U)
                                                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((8U 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                          >> 0x00000018U)
                                                          : 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                          >> 0x00000010U))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                          >> 8U)
                                                          : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                           >> 0x00000018U)
                                                           : 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                           >> 0x00000010U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                           >> 8U)
                                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))))),32);
    bufp->fullIData(oldp+527,(((((0x0000ff00U & (((0x00000080U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((0x00000040U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((0x00000040U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 8U)
                                                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (0x00000020U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((8U 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                         ? 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                          >> 0x00000018U)
                                                          : 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                          >> 0x00000010U))
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                          >> 8U)
                                                          : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                           >> 0x00000018U)
                                                           : 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                           >> 0x00000010U))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                           >> 8U)
                                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))))),32);
    bufp->fullIData(oldp+528,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in),32);
    bufp->fullIData(oldp+529,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in),32);
    bufp->fullIData(oldp+530,(((((0x0000ff00U & (((8U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                   : 
                                                  ((0x00000080U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000040U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in))) 
                                                 << 8U)) 
                                 | (0x000000ffU & (
                                                   (4U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                    ? 
                                                   ((0x00000020U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                      >> 0x00000018U)
                                                      : 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                      >> 0x00000010U))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                      >> 8U)
                                                      : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                    : 
                                                   ((0x00000020U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                      >> 0x00000018U)
                                                      : 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                      >> 0x00000010U))
                                                     : 
                                                    ((0x00000010U 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                      ? 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                      >> 8U)
                                                      : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in))))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((2U 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                         ? 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                           >> 0x00000018U)
                                                           : 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                           >> 0x00000010U))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                           >> 8U)
                                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                         : 
                                                        ((8U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                           >> 0x00000018U)
                                                           : 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                           >> 0x00000010U))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                           >> 8U)
                                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in))) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((1U 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                          ? 
                                                         ((2U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                            ? 
                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                            >> 0x00000018U)
                                                            : 
                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                            >> 0x00000010U))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                            ? 
                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                            >> 8U)
                                                            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                            ? 
                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                            >> 0x00000018U)
                                                            : 
                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                            >> 0x00000010U))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                            ? 
                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                            >> 8U)
                                                            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in))))))),32);
    bufp->fullIData(oldp+531,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result),32);
    bufp->fullIData(oldp+532,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input),32);
    bufp->fullCData(oldp+533,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result),6);
    bufp->fullCData(oldp+534,((0x0000003fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                              - (IData)(1U)))),6);
    bufp->fullCData(oldp+535,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result),5);
    bufp->fullBit(oldp+536,((1U & (~ (0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))));
    bufp->fullCData(oldp+537,((0x0000001fU & ((IData)(0x1fU) 
                                              - (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))),5);
    bufp->fullCData(oldp+538,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result),6);
    bufp->fullBit(oldp+539,((0x28U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))));
    bufp->fullBit(oldp+540,(((0x28U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                >> (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))));
    bufp->fullIData(oldp+541,(((IData)(0xfffffffeU) 
                               << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))),32);
    bufp->fullIData(oldp+542,((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
    bufp->fullIData(oldp+543,(((0x2aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex
                                : (- (IData)(((0x28U 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))))))),32);
    bufp->fullIData(oldp+544,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result),32);
    bufp->fullIData(oldp+545,(((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)),32);
    bufp->fullIData(oldp+546,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
    bufp->fullIData(oldp+547,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev),32);
    bufp->fullIData(oldp+548,((((((((0x0000000cU & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      << 2U)) | (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 2U))) 
                                   << 0x0000000cU) 
                                  | (((0x0000000cU 
                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                          >> 2U)) | 
                                      (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 6U))) 
                                     << 8U)) | ((((0x0000000cU 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 6U)) 
                                                  | (3U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                        >> 0x0000000aU))) 
                                                 << 4U) 
                                                | ((0x0000000cU 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       >> 0x0000000aU)) 
                                                   | (3U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 0x0000000eU))))) 
                                << 0x00000010U) | (
                                                   ((((0x0000000cU 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 0x0000000eU)) 
                                                      | (3U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x00000012U))) 
                                                     << 0x0000000cU) 
                                                    | (((0x0000000cU 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x00000012U)) 
                                                        | (3U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                              >> 0x00000016U))) 
                                                       << 8U)) 
                                                   | ((((0x0000000cU 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x00000016U)) 
                                                        | (3U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                              >> 0x0000001aU))) 
                                                       << 4U) 
                                                      | ((0x0000000cU 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000001aU)) 
                                                         | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000001eU)))))),32);
    bufp->fullIData(oldp+549,(((((0x00000e00U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 << 7U)) 
                                 | ((0x000001c0U & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      << 1U)) | ((0x00000038U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 5U)) 
                                                 | (7U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       >> 0x0000000bU))))) 
                                << 0x00000012U) | (
                                                   (((0x000001c0U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 8U)) 
                                                     | ((0x00000038U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000000eU)) 
                                                        | (7U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                              >> 0x00000014U)))) 
                                                    << 9U) 
                                                   | ((0x000001c0U 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 0x00000011U)) 
                                                      | ((0x00000038U 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000017U)) 
                                                         | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000001dU)))))),32);
    bufp->fullIData(oldp+550,(((0U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                : ((1U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                    ? (((((((0x0000000cU 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                << 2U)) 
                                            | (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 2U))) 
                                           << 0x0000000cU) 
                                          | (((0x0000000cU 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 2U)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 6U))) 
                                             << 8U)) 
                                         | ((((0x0000000cU 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 6U)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000aU))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000aU)) 
                                               | (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000eU))))) 
                                        << 0x00000010U) 
                                       | (((((0x0000000cU 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0x0000000eU)) 
                                             | (3U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x00000012U))) 
                                            << 0x0000000cU) 
                                           | (((0x0000000cU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x00000012U)) 
                                               | (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x00000016U))) 
                                              << 8U)) 
                                          | ((((0x0000000cU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x00000016U)) 
                                               | (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001aU))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001aU)) 
                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000001eU)))))
                                    : ((2U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                        ? ((((0x00000e00U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 << 7U)) 
                                             | ((0x000001c0U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    << 1U)) 
                                                | ((0x00000038U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 0x0000000bU))))) 
                                            << 0x00000012U) 
                                           | ((((0x000001c0U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 8U)) 
                                                | ((0x00000038U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       >> 0x0000000eU)) 
                                                   | (7U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 0x00000014U)))) 
                                               << 9U) 
                                              | ((0x000001c0U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x00000011U)) 
                                                 | ((0x00000038U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                        >> 0x00000017U)) 
                                                    | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       >> 0x0000001dU)))))
                                        : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)))),32);
    bufp->fullCData(oldp+551,((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))),2);
    bufp->fullIData(oldp+552,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                                ? (- vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)),32);
    bufp->fullBit(oldp+553,((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))));
    bufp->fullBit(oldp+554,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI));
    bufp->fullCData(oldp+555,(((0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                ? (0x0000003fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                                  - (IData)(1U)))
                                : 0x0000001fU)),6);
    bufp->fullBit(oldp+556,((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
    bufp->fullCData(oldp+557,((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))),2);
    bufp->fullIData(oldp+558,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP),32);
    bufp->fullIData(oldp+559,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev),32);
    bufp->fullIData(oldp+560,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP),32);
    bufp->fullIData(oldp+561,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP),32);
    bufp->fullBit(oldp+562,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
    bufp->fullBit(oldp+563,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP));
    bufp->fullBit(oldp+564,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP));
    bufp->fullIData(oldp+565,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D),32);
    bufp->fullCData(oldp+566,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP),6);
    bufp->fullBit(oldp+567,((1U & (~ (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))))));
    bufp->fullBit(oldp+568,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S));
    bufp->fullCData(oldp+569,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP),2);
    bufp->fullIData(oldp+570,((((((((0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                            >> 0x0000001eU)) 
                                    << 6U) | (((0U 
                                                != 
                                                (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x0000001cU))) 
                                               << 5U) 
                                              | ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                      >> 0x0000001aU))) 
                                                 << 4U))) 
                                  | ((((0U != (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                >> 0x00000018U))) 
                                       << 3U) | ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                      >> 0x00000016U))) 
                                                 << 2U)) 
                                     | (((0U != (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x00000014U))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                       >> 0x00000012U)))))) 
                                 << 0x00000018U) | 
                                ((((((0U != (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 0x00000010U))) 
                                     << 3U) | ((0U 
                                                != 
                                                (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x0000000eU))) 
                                               << 2U)) 
                                   | (((0U != (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                >> 0x0000000cU))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x0000000aU))))) 
                                  << 0x00000014U) | 
                                 (((((0U != (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 8U))) 
                                     << 3U) | ((0U 
                                                != 
                                                (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 6U))) 
                                               << 2U)) 
                                   | (((0U != (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                >> 4U))) 
                                       << 1U) | (0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 2U))))) 
                                  << 0x00000010U))) 
                               | (((((((0U != (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)) 
                                       << 3U) | ((0U 
                                                  != 
                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 0x0000001cU)) 
                                                 << 2U)) 
                                     | (((0U != (0x0000000fU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x00000018U))) 
                                         << 1U) | (0U 
                                                   != 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                       >> 0x00000014U))))) 
                                    << 0x0000000cU) 
                                   | (((((0U != (0x0000000fU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x00000010U))) 
                                         << 3U) | (
                                                   (0U 
                                                    != 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                        >> 0x0000000cU))) 
                                                   << 2U)) 
                                       | (((0U != (0x0000000fU 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                      >> 8U))) 
                                           << 1U) | 
                                          (0U != (0x0000000fU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 4U))))) 
                                      << 8U)) | (((
                                                   (((0U 
                                                      != 
                                                      (0x0000000fU 
                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)) 
                                                     << 3U) 
                                                    | ((0U 
                                                        != 
                                                        (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                         >> 0x00000018U)) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                            >> 0x00000010U))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                             >> 8U))))) 
                                                  << 4U) 
                                                 | ((((0U 
                                                       != 
                                                       (0x000000ffU 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)) 
                                                      << 3U) 
                                                     | ((0U 
                                                         != 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                          >> 0x00000010U)) 
                                                        << 2U)) 
                                                    | (((0U 
                                                         != 
                                                         (0x0000ffffU 
                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)) 
                                                        << 1U) 
                                                       | (0U 
                                                          != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))))))),32);
    __Vtemp_32[0U] = (IData)((((QData)((IData)(((((
                                                   (0x00010000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 0x10U
                                                    : 0x11U) 
                                                  << 0x0000000fU) 
                                                 | (((0x00004000U 
                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                      ? 0x0eU
                                                      : 0x0fU) 
                                                    << 0x0000000aU)) 
                                                | ((((0x00001000U 
                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                      ? 0x0cU
                                                      : 0x0dU) 
                                                    << 5U) 
                                                   | ((0x00000400U 
                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                       ? 0x0aU
                                                       : 0x0bU))))) 
                               << 0x00000014U) | (QData)((IData)(
                                                                 (((((0x00000100U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 8U
                                                                      : 9U) 
                                                                    << 0x0000000fU) 
                                                                   | (((0x00000040U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 6U
                                                                        : 7U) 
                                                                      << 0x0000000aU)) 
                                                                  | ((((0x00000010U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 4U
                                                                        : 5U) 
                                                                      << 5U) 
                                                                     | ((4U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 2U
                                                                         : 3U)))))));
    __Vtemp_32[1U] = (((IData)((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__BRA__159__03a155__KET__) 
                                                    << 0x0000000fU) 
                                                   | (0x00007c00U 
                                                      & (0x00007800U 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x0000001eU))))) 
                                                            << 0x0000000aU)))) 
                                                  | ((((0x10000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x1cU
                                                        : 0x1dU) 
                                                      << 5U) 
                                                     | ((0x04000000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x1aU
                                                         : 0x1bU))))) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   (((((0x01000000U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 0x18U
                                                                        : 0x19U) 
                                                                      << 0x0000000fU) 
                                                                     | (((0x00400000U 
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                          ? 0x16U
                                                                          : 0x17U) 
                                                                        << 0x0000000aU)) 
                                                                    | ((((0x00100000U 
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                          ? 0x14U
                                                                          : 0x15U) 
                                                                        << 5U) 
                                                                       | ((0x00040000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x12U
                                                                           : 0x13U))))))) 
                       << 8U) | (IData)(((((QData)((IData)(
                                                           (((((0x00010000U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                ? 0x10U
                                                                : 0x11U) 
                                                              << 0x0000000fU) 
                                                             | (((0x00004000U 
                                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                  ? 0x0eU
                                                                  : 0x0fU) 
                                                                << 0x0000000aU)) 
                                                            | ((((0x00001000U 
                                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                  ? 0x0cU
                                                                  : 0x0dU) 
                                                                << 5U) 
                                                               | ((0x00000400U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                   ? 0x0aU
                                                                   : 0x0bU))))) 
                                           << 0x00000014U) 
                                          | (QData)((IData)(
                                                            (((((0x00000100U 
                                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                 ? 8U
                                                                 : 9U) 
                                                               << 0x0000000fU) 
                                                              | (((0x00000040U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                   ? 6U
                                                                   : 7U) 
                                                                 << 0x0000000aU)) 
                                                             | ((((0x00000010U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                   ? 4U
                                                                   : 5U) 
                                                                 << 5U) 
                                                                | ((4U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                    ? 2U
                                                                    : 3U)))))) 
                                         >> 0x00000020U)));
    __Vtemp_32[2U] = (((IData)((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__BRA__159__03a155__KET__) 
                                                    << 0x0000000fU) 
                                                   | (0x00007c00U 
                                                      & (0x00007800U 
                                                         | ((- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x0000001eU))))) 
                                                            << 0x0000000aU)))) 
                                                  | ((((0x10000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x1cU
                                                        : 0x1dU) 
                                                      << 5U) 
                                                     | ((0x04000000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x1aU
                                                         : 0x1bU))))) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   (((((0x01000000U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 0x18U
                                                                        : 0x19U) 
                                                                      << 0x0000000fU) 
                                                                     | (((0x00400000U 
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                          ? 0x16U
                                                                          : 0x17U) 
                                                                        << 0x0000000aU)) 
                                                                    | ((((0x00100000U 
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                          ? 0x14U
                                                                          : 0x15U) 
                                                                        << 5U) 
                                                                       | ((0x00040000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x12U
                                                                           : 0x13U))))))) 
                       >> 0x00000018U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__BRA__159__03a155__KET__) 
                                                                        << 0x0000000fU) 
                                                                       | (0x00007c00U 
                                                                          & (0x00007800U 
                                                                             | ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001eU))))) 
                                                                                << 0x0000000aU)))) 
                                                                      | ((((0x10000000U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 0x1cU
                                                                            : 0x1dU) 
                                                                          << 5U) 
                                                                         | ((0x04000000U 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                             ? 0x1aU
                                                                             : 0x1bU))))) 
                                                     << 0x00000014U) 
                                                    | (QData)((IData)(
                                                                      (((((0x01000000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x18U
                                                                           : 0x19U) 
                                                                         << 0x0000000fU) 
                                                                        | (((0x00400000U 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                             ? 0x16U
                                                                             : 0x17U) 
                                                                           << 0x0000000aU)) 
                                                                       | ((((0x00100000U 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                             ? 0x14U
                                                                             : 0x15U) 
                                                                           << 5U) 
                                                                          | ((0x00040000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x12U
                                                                              : 0x13U)))))) 
                                                   >> 0x00000020U)) 
                                          << 8U));
    __Vtemp_33[0U] = (IData)((((QData)((IData)(((((
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                     ? 2U
                                                     : 3U)) 
                                                  << 0x0000000fU) 
                                                 | (0x00007c00U 
                                                    & (((0U 
                                                         != 
                                                         (0x0000000fU 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                             >> 0x00000018U)))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                              >> 0x00000018U)))
                                                          ? 
                                                         ((0x01000000U 
                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                           ? 0x18U
                                                           : 0x19U)
                                                          : 
                                                         ((0x04000000U 
                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                           ? 0x1aU
                                                           : 0x1bU))
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                              >> 0x0000001cU)))
                                                          ? 
                                                         ((0x10000000U 
                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                           ? 0x1cU
                                                           : 0x1dU)
                                                          : 
                                                         (0x1eU 
                                                          | (- (IData)(
                                                                       (1U 
                                                                        & (~ 
                                                                           (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x0000001eU)))))))) 
                                                       << 0x0000000aU))) 
                                                | ((((0U 
                                                      != 
                                                      (0x0000000fU 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                          >> 0x00000010U)))
                                                      ? 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                           >> 0x00000010U)))
                                                       ? 
                                                      ((0x00010000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x10U
                                                        : 0x11U)
                                                       : 
                                                      ((0x00040000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x12U
                                                        : 0x13U))
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                           >> 0x00000014U)))
                                                       ? 
                                                      ((0x00100000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x14U
                                                        : 0x15U)
                                                       : 
                                                      ((0x00400000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                        ? 0x16U
                                                        : 0x17U))) 
                                                    << 5U) 
                                                   | ((0U 
                                                       != 
                                                       (0x0000000fU 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                           >> 8U)))
                                                       ? 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                            >> 8U)))
                                                        ? 
                                                       ((0x00000100U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 8U
                                                         : 9U)
                                                        : 
                                                       ((0x00000400U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x0aU
                                                         : 0x0bU))
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       ((0x00001000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x0cU
                                                         : 0x0dU)
                                                        : 
                                                       ((0x00004000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x0eU
                                                         : 0x0fU))))))) 
                               << 0x00000014U) | (QData)((IData)(
                                                                 (((((0U 
                                                                      != 
                                                                      (0x0000000fU 
                                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                      ? 
                                                                     ((0U 
                                                                       != 
                                                                       (3U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                       ? 
                                                                      (1U 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                                                       : 
                                                                      ((4U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 2U
                                                                        : 3U))
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                           >> 4U)))
                                                                       ? 
                                                                      ((0x00000010U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 4U
                                                                        : 5U)
                                                                       : 
                                                                      ((0x00000040U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                        ? 6U
                                                                        : 7U))) 
                                                                    << 0x0000000fU) 
                                                                   | (0x00007c00U 
                                                                      & (((0U 
                                                                           != 
                                                                           (0x000000ffU 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                               >> 0x00000010U)))
                                                                           ? 
                                                                          ((0U 
                                                                            != 
                                                                            (0x0000000fU 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000010U)))
                                                                            ? 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000010U)))
                                                                             ? 
                                                                            ((0x00010000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x10U
                                                                              : 0x11U)
                                                                             : 
                                                                            ((0x00040000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x12U
                                                                              : 0x13U))
                                                                            : 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000014U)))
                                                                             ? 
                                                                            ((0x00100000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x14U
                                                                              : 0x15U)
                                                                             : 
                                                                            ((0x00400000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x16U
                                                                              : 0x17U)))
                                                                           : 
                                                                          ((0U 
                                                                            != 
                                                                            (0x0000000fU 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000018U)))
                                                                            ? 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000018U)))
                                                                             ? 
                                                                            ((0x01000000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x18U
                                                                              : 0x19U)
                                                                             : 
                                                                            ((0x04000000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x1aU
                                                                              : 0x1bU))
                                                                            : 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001cU)))
                                                                             ? 
                                                                            ((0x10000000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x1cU
                                                                              : 0x1dU)
                                                                             : 
                                                                            (0x1eU 
                                                                             | (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001eU))))))))) 
                                                                         << 0x0000000aU))) 
                                                                  | ((((0U 
                                                                        != 
                                                                        (0x000000ffU 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                        ? 
                                                                       ((0U 
                                                                         != 
                                                                         (0x0000000fU 
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                         ? 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                          ? 
                                                                         (1U 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                                                          : 
                                                                         ((4U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 2U
                                                                           : 3U))
                                                                         : 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 4U)))
                                                                          ? 
                                                                         ((0x00000010U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 4U
                                                                           : 5U)
                                                                          : 
                                                                         ((0x00000040U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 6U
                                                                           : 7U)))
                                                                        : 
                                                                       ((0U 
                                                                         != 
                                                                         (0x0000000fU 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                             >> 8U)))
                                                                         ? 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 8U)))
                                                                          ? 
                                                                         ((0x00000100U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 8U
                                                                           : 9U)
                                                                          : 
                                                                         ((0x00000400U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0aU
                                                                           : 0x0bU))
                                                                         : 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 0x0000000cU)))
                                                                          ? 
                                                                         ((0x00001000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0cU
                                                                           : 0x0dU)
                                                                          : 
                                                                         ((0x00004000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0eU
                                                                           : 0x0fU)))) 
                                                                      << 5U) 
                                                                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))))));
    __Vtemp_33[1U] = (((IData)((((QData)((IData)(((
                                                   ((0x00000020U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                               >> 0x0000001cU)))
                                                           ? 
                                                          ((0x10000000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                            ? 0x1cU
                                                            : 0x1dU)
                                                           : 
                                                          (0x1eU 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                             >> 0x0000001eU))))))))) 
                                                   << 0x0000000aU) 
                                                  | ((((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                            >> 0x00000018U)))
                                                        ? 
                                                       ((0x01000000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x18U
                                                         : 0x19U)
                                                        : 
                                                       ((0x04000000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x1aU
                                                         : 0x1bU)) 
                                                      << 5U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                             >> 0x00000014U)))
                                                         ? 
                                                        ((0x00100000U 
                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                          ? 0x14U
                                                          : 0x15U)
                                                         : 
                                                        ((0x00400000U 
                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                          ? 0x16U
                                                          : 0x17U)))))) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   (((((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x00000010U)))
                                                                        ? 
                                                                       ((0x00010000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x10U
                                                                         : 0x11U)
                                                                        : 
                                                                       ((0x00040000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x12U
                                                                         : 0x13U)) 
                                                                      << 0x0000000fU) 
                                                                     | (((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 0x0000000cU)))
                                                                          ? 
                                                                         ((0x00001000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0cU
                                                                           : 0x0dU)
                                                                          : 
                                                                         ((0x00004000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0eU
                                                                           : 0x0fU)) 
                                                                        << 0x0000000aU)) 
                                                                    | ((((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 8U)))
                                                                          ? 
                                                                         ((0x00000100U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 8U
                                                                           : 9U)
                                                                          : 
                                                                         ((0x00000400U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0aU
                                                                           : 0x0bU)) 
                                                                        << 5U) 
                                                                       | ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                               >> 4U)))
                                                                           ? 
                                                                          ((0x00000010U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 4U
                                                                            : 5U)
                                                                           : 
                                                                          ((0x00000040U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 6U
                                                                            : 7U)))))))) 
                       << 8U) | (IData)(((((QData)((IData)(
                                                           (((((0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                ? 
                                                               (1U 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                                                : 
                                                               ((4U 
                                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                 ? 2U
                                                                 : 3U)) 
                                                              << 0x0000000fU) 
                                                             | (0x00007c00U 
                                                                & (((0U 
                                                                     != 
                                                                     (0x0000000fU 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                         >> 0x00000018U)))
                                                                     ? 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                          >> 0x00000018U)))
                                                                      ? 
                                                                     ((0x01000000U 
                                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                       ? 0x18U
                                                                       : 0x19U)
                                                                      : 
                                                                     ((0x04000000U 
                                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                       ? 0x1aU
                                                                       : 0x1bU))
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                          >> 0x0000001cU)))
                                                                      ? 
                                                                     ((0x10000000U 
                                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                       ? 0x1cU
                                                                       : 0x1dU)
                                                                      : 
                                                                     (0x1eU 
                                                                      | (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001eU)))))))) 
                                                                   << 0x0000000aU))) 
                                                            | ((((0U 
                                                                  != 
                                                                  (0x0000000fU 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                      >> 0x00000010U)))
                                                                  ? 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                       >> 0x00000010U)))
                                                                   ? 
                                                                  ((0x00010000U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                    ? 0x10U
                                                                    : 0x11U)
                                                                   : 
                                                                  ((0x00040000U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                    ? 0x12U
                                                                    : 0x13U))
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                       >> 0x00000014U)))
                                                                   ? 
                                                                  ((0x00100000U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                    ? 0x14U
                                                                    : 0x15U)
                                                                   : 
                                                                  ((0x00400000U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                    ? 0x16U
                                                                    : 0x17U))) 
                                                                << 5U) 
                                                               | ((0U 
                                                                   != 
                                                                   (0x0000000fU 
                                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                       >> 8U)))
                                                                   ? 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                        >> 8U)))
                                                                    ? 
                                                                   ((0x00000100U 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                     ? 8U
                                                                     : 9U)
                                                                    : 
                                                                   ((0x00000400U 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                     ? 0x0aU
                                                                     : 0x0bU))
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                        >> 0x0000000cU)))
                                                                    ? 
                                                                   ((0x00001000U 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                     ? 0x0cU
                                                                     : 0x0dU)
                                                                    : 
                                                                   ((0x00004000U 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                     ? 0x0eU
                                                                     : 0x0fU))))))) 
                                           << 0x00000014U) 
                                          | (QData)((IData)(
                                                            (((((0U 
                                                                 != 
                                                                 (0x0000000fU 
                                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                 ? 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                  ? 
                                                                 (1U 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                                                  : 
                                                                 ((4U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                   ? 2U
                                                                   : 3U))
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                      >> 4U)))
                                                                  ? 
                                                                 ((0x00000010U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                   ? 4U
                                                                   : 5U)
                                                                  : 
                                                                 ((0x00000040U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                   ? 6U
                                                                   : 7U))) 
                                                               << 0x0000000fU) 
                                                              | (0x00007c00U 
                                                                 & (((0U 
                                                                      != 
                                                                      (0x000000ffU 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                          >> 0x00000010U)))
                                                                      ? 
                                                                     ((0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                           >> 0x00000010U)))
                                                                       ? 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x00000010U)))
                                                                        ? 
                                                                       ((0x00010000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x10U
                                                                         : 0x11U)
                                                                        : 
                                                                       ((0x00040000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x12U
                                                                         : 0x13U))
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x00000014U)))
                                                                        ? 
                                                                       ((0x00100000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x14U
                                                                         : 0x15U)
                                                                        : 
                                                                       ((0x00400000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x16U
                                                                         : 0x17U)))
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (0x0000000fU 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                           >> 0x00000018U)))
                                                                       ? 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x00000018U)))
                                                                        ? 
                                                                       ((0x01000000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x18U
                                                                         : 0x19U)
                                                                        : 
                                                                       ((0x04000000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x1aU
                                                                         : 0x1bU))
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x0000001cU)))
                                                                        ? 
                                                                       ((0x10000000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x1cU
                                                                         : 0x1dU)
                                                                        : 
                                                                       (0x1eU 
                                                                        | (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001eU))))))))) 
                                                                    << 0x0000000aU))) 
                                                             | ((((0U 
                                                                   != 
                                                                   (0x000000ffU 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                   ? 
                                                                  ((0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                    ? 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                                                     ? 
                                                                    (1U 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                                                     : 
                                                                    ((4U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 2U
                                                                      : 3U))
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                         >> 4U)))
                                                                     ? 
                                                                    ((0x00000010U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 4U
                                                                      : 5U)
                                                                     : 
                                                                    ((0x00000040U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 6U
                                                                      : 7U)))
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (0x0000000fU 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                        >> 8U)))
                                                                    ? 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                         >> 8U)))
                                                                     ? 
                                                                    ((0x00000100U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 8U
                                                                      : 9U)
                                                                     : 
                                                                    ((0x00000400U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 0x0aU
                                                                      : 0x0bU))
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                         >> 0x0000000cU)))
                                                                     ? 
                                                                    ((0x00001000U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 0x0cU
                                                                      : 0x0dU)
                                                                     : 
                                                                    ((0x00004000U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                      ? 0x0eU
                                                                      : 0x0fU)))) 
                                                                 << 5U) 
                                                                | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))))) 
                                         >> 0x00000020U)));
    __Vtemp_33[2U] = (((IData)((((QData)((IData)(((
                                                   ((0x00000020U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                               >> 0x0000001cU)))
                                                           ? 
                                                          ((0x10000000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                            ? 0x1cU
                                                            : 0x1dU)
                                                           : 
                                                          (0x1eU 
                                                           | (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                             >> 0x0000001eU))))))))) 
                                                   << 0x0000000aU) 
                                                  | ((((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                            >> 0x00000018U)))
                                                        ? 
                                                       ((0x01000000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x18U
                                                         : 0x19U)
                                                        : 
                                                       ((0x04000000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                         ? 0x1aU
                                                         : 0x1bU)) 
                                                      << 5U) 
                                                     | ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                             >> 0x00000014U)))
                                                         ? 
                                                        ((0x00100000U 
                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                          ? 0x14U
                                                          : 0x15U)
                                                         : 
                                                        ((0x00400000U 
                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                          ? 0x16U
                                                          : 0x17U)))))) 
                                 << 0x00000014U) | (QData)((IData)(
                                                                   (((((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                            >> 0x00000010U)))
                                                                        ? 
                                                                       ((0x00010000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x10U
                                                                         : 0x11U)
                                                                        : 
                                                                       ((0x00040000U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                         ? 0x12U
                                                                         : 0x13U)) 
                                                                      << 0x0000000fU) 
                                                                     | (((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 0x0000000cU)))
                                                                          ? 
                                                                         ((0x00001000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0cU
                                                                           : 0x0dU)
                                                                          : 
                                                                         ((0x00004000U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0eU
                                                                           : 0x0fU)) 
                                                                        << 0x0000000aU)) 
                                                                    | ((((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                              >> 8U)))
                                                                          ? 
                                                                         ((0x00000100U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 8U
                                                                           : 9U)
                                                                          : 
                                                                         ((0x00000400U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                           ? 0x0aU
                                                                           : 0x0bU)) 
                                                                        << 5U) 
                                                                       | ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                               >> 4U)))
                                                                           ? 
                                                                          ((0x00000010U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 4U
                                                                            : 5U)
                                                                           : 
                                                                          ((0x00000040U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 6U
                                                                            : 7U)))))))) 
                       >> 0x00000018U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((((0x00000020U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0U 
                                                                               != 
                                                                               (3U 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001cU)))
                                                                               ? 
                                                                              ((0x10000000U 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                                ? 0x1cU
                                                                                : 0x1dU)
                                                                               : 
                                                                              (0x1eU 
                                                                               | (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000001eU))))))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((((0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000018U)))
                                                                            ? 
                                                                           ((0x01000000U 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                             ? 0x18U
                                                                             : 0x19U)
                                                                            : 
                                                                           ((0x04000000U 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                             ? 0x1aU
                                                                             : 0x1bU)) 
                                                                          << 5U) 
                                                                         | ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x00000014U)))
                                                                             ? 
                                                                            ((0x00100000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x14U
                                                                              : 0x15U)
                                                                             : 
                                                                            ((0x00400000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x16U
                                                                              : 0x17U)))))) 
                                                     << 0x00000014U) 
                                                    | (QData)((IData)(
                                                                      (((((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                               >> 0x00000010U)))
                                                                           ? 
                                                                          ((0x00010000U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 0x10U
                                                                            : 0x11U)
                                                                           : 
                                                                          ((0x00040000U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                            ? 0x12U
                                                                            : 0x13U)) 
                                                                         << 0x0000000fU) 
                                                                        | (((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 0x0000000cU)))
                                                                             ? 
                                                                            ((0x00001000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x0cU
                                                                              : 0x0dU)
                                                                             : 
                                                                            ((0x00004000U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x0eU
                                                                              : 0x0fU)) 
                                                                           << 0x0000000aU)) 
                                                                       | ((((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 8U)))
                                                                             ? 
                                                                            ((0x00000100U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 8U
                                                                              : 9U)
                                                                             : 
                                                                            ((0x00000400U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                              ? 0x0aU
                                                                              : 0x0bU)) 
                                                                           << 5U) 
                                                                          | ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                                >> 4U)))
                                                                              ? 
                                                                             ((0x00000010U 
                                                                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                               ? 4U
                                                                               : 5U)
                                                                              : 
                                                                             ((0x00000040U 
                                                                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                                               ? 6U
                                                                               : 7U))))))) 
                                                   >> 0x00000020U)) 
                                          << 8U));
    __Vtemp_34[0U] = __Vtemp_33[0U];
    __Vtemp_34[1U] = __Vtemp_33[1U];
    __Vtemp_34[2U] = ((__Vtemp_32[0U] << 0x00000010U) 
                      | __Vtemp_33[2U]);
    __Vtemp_34[3U] = ((__Vtemp_32[0U] >> 0x00000010U) 
                      | (__Vtemp_32[1U] << 0x00000010U));
    __Vtemp_34[4U] = ((__Vtemp_32[1U] >> 0x00000010U) 
                      | (__Vtemp_32[2U] << 0x00000010U));
    bufp->fullWData(oldp+571,(__Vtemp_34),160);
    bufp->fullIData(oldp+576,((((((((0x0000000cU & 
                                     (VL_COUNTONES_I(
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x0000001eU)) 
                                      << 2U)) | (3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 0x0000001cU))))) 
                                   << 0x0000000cU) 
                                  | (((0x0000000cU 
                                       & (VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                             >> 0x0000001aU))) 
                                          << 2U)) | 
                                      (3U & VL_COUNTONES_I(
                                                           (3U 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                               >> 0x00000018U))))) 
                                     << 8U)) | ((((0x0000000cU 
                                                   & (VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x00000016U))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                          >> 0x00000014U))))) 
                                                 << 4U) 
                                                | ((0x0000000cU 
                                                    & (VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                          >> 0x00000012U))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & VL_COUNTONES_I(
                                                                       (3U 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                           >> 0x00000010U))))))) 
                                << 0x00000010U) | (
                                                   ((((0x0000000cU 
                                                       & (VL_COUNTONES_I(
                                                                         (3U 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                             >> 0x0000000eU))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & VL_COUNTONES_I(
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                              >> 0x0000000cU))))) 
                                                     << 0x0000000cU) 
                                                    | (((0x0000000cU 
                                                         & (VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 0x0000000aU))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 8U))))) 
                                                       << 8U)) 
                                                   | ((((0x0000000cU 
                                                         & (VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 6U))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 4U))))) 
                                                       << 4U) 
                                                      | ((0x0000000cU 
                                                          & (VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 2U))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & VL_COUNTONES_I(
                                                                             (3U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)))))))),32);
    bufp->fullIData(oldp+577,((((((0x00000038U & ((
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 0x0000001eU))) 
                                                   + 
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x0000001cU))))) 
                                                  << 3U)) 
                                  | (7U & ((3U & VL_COUNTONES_I(
                                                                (3U 
                                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                    >> 0x0000001aU)))) 
                                           + (3U & 
                                              VL_COUNTONES_I(
                                                             (3U 
                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                 >> 0x00000018U))))))) 
                                 << 0x00000012U) | 
                                (((0x00000038U & ((
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x00000016U)))) 
                                                   + 
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x00000014U))))) 
                                                  << 3U)) 
                                  | (7U & ((3U & VL_COUNTONES_I(
                                                                (3U 
                                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                    >> 0x00000012U)))) 
                                           + (3U & 
                                              VL_COUNTONES_I(
                                                             (3U 
                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                 >> 0x00000010U))))))) 
                                 << 0x0000000cU)) | 
                               ((((0x00000038U & ((
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x0000000eU)))) 
                                                   + 
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x0000000cU))))) 
                                                  << 3U)) 
                                  | (7U & ((3U & VL_COUNTONES_I(
                                                                (3U 
                                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                    >> 0x0000000aU)))) 
                                           + (3U & 
                                              VL_COUNTONES_I(
                                                             (3U 
                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                 >> 8U))))))) 
                                 << 6U) | ((0x00000038U 
                                            & (((3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 6U)))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                        >> 4U))))) 
                                               << 3U)) 
                                           | (7U & 
                                              ((3U 
                                                & VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                     >> 2U)))) 
                                               + (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))))))))),24);
    bufp->fullSData(oldp+578,(((((0x000000f0U & (((7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x0000001eU))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                            >> 0x0000001cU)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                            >> 0x0000001aU)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                            >> 0x00000018U))))))) 
                                                 << 4U)) 
                                 | (0x0000000fU & (
                                                   (7U 
                                                    & ((3U 
                                                        & VL_COUNTONES_I(
                                                                         (3U 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                             >> 0x00000016U)))) 
                                                       + 
                                                       (3U 
                                                        & VL_COUNTONES_I(
                                                                         (3U 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                             >> 0x00000014U)))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & VL_COUNTONES_I(
                                                                         (3U 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                             >> 0x00000012U)))) 
                                                       + 
                                                       (3U 
                                                        & VL_COUNTONES_I(
                                                                         (3U 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                             >> 0x00000010U))))))))) 
                                << 8U) | ((0x000000f0U 
                                           & (((7U 
                                                & ((3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x0000000eU)))) 
                                                   + 
                                                   (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                         >> 0x0000000cU)))))) 
                                               + (7U 
                                                  & ((3U 
                                                      & VL_COUNTONES_I(
                                                                       (3U 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                           >> 0x0000000aU)))) 
                                                     + 
                                                     (3U 
                                                      & VL_COUNTONES_I(
                                                                       (3U 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                           >> 8U))))))) 
                                              << 4U)) 
                                          | (0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                          >> 6U)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                          >> 4U)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                            >> 2U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)))))))))),16);
    bufp->fullSData(oldp+579,(((0x000003e0U & (((0x0000000fU 
                                                 & ((7U 
                                                     & ((3U 
                                                         & VL_COUNTONES_I(
                                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                           >> 0x0000001eU))) 
                                                        + 
                                                        (3U 
                                                         & VL_COUNTONES_I(
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                              >> 0x0000001cU)))))) 
                                                    + 
                                                    (7U 
                                                     & ((3U 
                                                         & VL_COUNTONES_I(
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                              >> 0x0000001aU)))) 
                                                        + 
                                                        (3U 
                                                         & VL_COUNTONES_I(
                                                                          (3U 
                                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                              >> 0x00000018U)))))))) 
                                                + (0x0000000fU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 0x00000016U)))) 
                                                          + 
                                                          (3U 
                                                           & VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 0x00000014U)))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 0x00000012U)))) 
                                                          + 
                                                          (3U 
                                                           & VL_COUNTONES_I(
                                                                            (3U 
                                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                                >> 0x00000010U))))))))) 
                                               << 5U)) 
                               | (0x0000001fU & ((0x0000000fU 
                                                  & ((7U 
                                                      & ((3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 0x0000000eU)))) 
                                                         + 
                                                         (3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 0x0000000cU)))))) 
                                                     + 
                                                     (7U 
                                                      & ((3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 0x0000000aU)))) 
                                                         + 
                                                         (3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 8U)))))))) 
                                                 + 
                                                 (0x0000000fU 
                                                  & ((7U 
                                                      & ((3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 6U)))) 
                                                         + 
                                                         (3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 4U)))))) 
                                                     + 
                                                     (7U 
                                                      & ((3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                               >> 2U)))) 
                                                         + 
                                                         (3U 
                                                          & VL_COUNTONES_I(
                                                                           (3U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))))))))))),10);
    bufp->fullIData(oldp+580,(((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49) 
                                    >> 0x0000000fU)) 
                                << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49))),17);
    bufp->fullIData(oldp+581,((((IData)((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                          >> 1U) & 
                                         ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50) 
                                          >> 0x0000000fU))) 
                                << 0x00000010U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))),17);
    bufp->fullQData(oldp+582,((0x00000001ffffffffULL 
                               & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                   ? (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex)))
                                   : VL_EXTENDS_QI(33,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex)))),33);
    bufp->fullQData(oldp+584,((0x00000003ffffffffULL 
                               & VL_MULS_QQQ(34, (0x00000003ffffffffULL 
                                                  & VL_EXTENDS_QI(34,17, 
                                                                  ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                     & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49) 
                                                                        >> 0x0000000fU)) 
                                                                    << 0x00000010U) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49)))), 
                                             (0x00000003ffffffffULL 
                                              & VL_EXTENDS_QI(34,17, 
                                                              (((IData)(
                                                                        (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                          >> 1U) 
                                                                         & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50) 
                                                                            >> 0x0000000fU))) 
                                                                << 0x00000010U) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))))))),34);
    bufp->fullQData(oldp+586,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac),34);
    bufp->fullIData(oldp+588,(((- (IData)((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))) 
                               & VL_SHIFTR_III(32,32,32, 
                                               ((IData)(1U) 
                                                << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex)), 1U))),32);
    bufp->fullIData(oldp+589,(((IData)(1U) << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex))),32);
    bufp->fullQData(oldp+590,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result),34);
    bufp->fullBit(oldp+592,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                    ? (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                               >> 0x00000021U))
                                    : (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                               >> 0x0000001fU))))));
    bufp->fullBit(oldp+593,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                    ? (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                               >> 0x00000020U))
                                    : (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                               >> 0x0000001fU))))));
    bufp->fullCData(oldp+594,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex))),5);
    bufp->fullCData(oldp+595,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword),2);
    bufp->fullCData(oldp+596,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed),2);
    bufp->fullBit(oldp+597,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith));
    bufp->fullCData(oldp+598,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm),5);
    bufp->fullCData(oldp+599,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword),2);
    bufp->fullCData(oldp+600,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed),2);
    bufp->fullBit(oldp+601,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
    bufp->fullBit(oldp+602,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q));
    bufp->fullBit(oldp+603,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save));
    bufp->fullBit(oldp+604,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry));
    bufp->fullCData(oldp+605,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS),3);
    bufp->fullIData(oldp+606,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                               ^ (- (IData)((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))))),32);
    bufp->fullIData(oldp+607,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                               & (- (IData)((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))))),32);
    bufp->fullIData(oldp+608,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex 
                               + ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                                   & (- (IData)((1U 
                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))))) 
                                  + VL_MULS_III(32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex, 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                                                 ^ 
                                                 (- (IData)(
                                                            (1U 
                                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))))))))),32);
    bufp->fullBit(oldp+609,((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))));
    bufp->fullIData(oldp+610,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex 
                               + (VL_EXTENDS_II(32,18, 
                                                (0x0003ffffU 
                                                 & VL_MULS_III(18, 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))), 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex))))))) 
                                  + (VL_EXTENDS_II(32,18, 
                                                   (0x0003ffffU 
                                                    & VL_MULS_III(18, 
                                                                  (0x0003ffffU 
                                                                   & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                                  (0x0003ffffU 
                                                                   & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 8U)))))))) 
                                     + (VL_EXTENDS_II(32,18, 
                                                      (0x0003ffffU 
                                                       & VL_MULS_III(18, 
                                                                     (0x0003ffffU 
                                                                      & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                                     (0x0003ffffU 
                                                                      & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U)))))))) 
                                        + VL_EXTENDS_II(32,18, 
                                                        (0x0003ffffU 
                                                         & VL_MULS_III(18, 
                                                                       (0x0003ffffU 
                                                                        & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                                       (0x0003ffffU 
                                                                        & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U)))))))))))),32);
    bufp->fullQData(oldp+611,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result),33);
    bufp->fullIData(oldp+613,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)
                                ? (VL_EXTENDS_II(32,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex))))))
                                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex)),32);
    bufp->fullSData(oldp+614,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result),16);
    bufp->fullQData(oldp+615,((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                   << 0x00000011U) 
                                                  | (0x0001fe00U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                        >> 0x0000000fU))) 
                                                 | (((IData)(
                                                             (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                               >> 1U) 
                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                 >> 0x00000017U))) 
                                                     << 8U) 
                                                    | (0x000000ffU 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                          >> 0x00000010U)))))) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                     << 0x00000011U) 
                                                                    | (0x0001fe00U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                          << 1U))) 
                                                                   | (((IData)(
                                                                               (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                       << 8U) 
                                                                      | (0x000000ffU 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex))))))),36);
    bufp->fullQData(oldp+617,((((QData)((IData)(((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                   << 0x00000011U) 
                                                  | (0x0001fe00U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                        >> 0x0000000fU))) 
                                                 | ((0x00000100U 
                                                     & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                         << 8U) 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                           >> 0x0000000fU))) 
                                                    | (0x000000ffU 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                          >> 0x00000010U)))))) 
                                << 0x00000012U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                                     << 0x00000011U) 
                                                                    | (0x0001fe00U 
                                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                          << 1U))) 
                                                                   | ((0x00000100U 
                                                                       & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                           << 8U) 
                                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                             << 1U))) 
                                                                      | (0x000000ffU 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex))))))),36);
    __Vtemp_35[0U] = (IData)((((QData)((IData)((0x0003ffffU 
                                                & VL_MULS_III(18, 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 8U))))))))) 
                               << 0x00000012U) | (QData)((IData)(
                                                                 (0x0003ffffU 
                                                                  & VL_MULS_III(18, 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))), 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex))))))))));
    __Vtemp_35[1U] = (((IData)((((QData)((IData)((0x0003ffffU 
                                                  & VL_MULS_III(18, 
                                                                (0x0003ffffU 
                                                                 & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                                (0x0003ffffU 
                                                                 & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U)))))))) 
                                 << 0x00000012U) | (QData)((IData)(
                                                                   (0x0003ffffU 
                                                                    & VL_MULS_III(18, 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U))))))))))) 
                       << 4U) | (IData)(((((QData)((IData)(
                                                           (0x0003ffffU 
                                                            & VL_MULS_III(18, 
                                                                          (0x0003ffffU 
                                                                           & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                                          (0x0003ffffU 
                                                                           & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 8U))))))))) 
                                           << 0x00000012U) 
                                          | (QData)((IData)(
                                                            (0x0003ffffU 
                                                             & VL_MULS_III(18, 
                                                                           (0x0003ffffU 
                                                                            & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))), 
                                                                           (0x0003ffffU 
                                                                            & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex))))))))) 
                                         >> 0x00000020U)));
    __Vtemp_35[2U] = (((IData)((((QData)((IData)((0x0003ffffU 
                                                  & VL_MULS_III(18, 
                                                                (0x0003ffffU 
                                                                 & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                                (0x0003ffffU 
                                                                 & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U)))))))) 
                                 << 0x00000012U) | (QData)((IData)(
                                                                   (0x0003ffffU 
                                                                    & VL_MULS_III(18, 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U))))))))))) 
                       >> 0x0000001cU) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (0x0003ffffU 
                                                                      & VL_MULS_III(18, 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U)))))))) 
                                                     << 0x00000012U) 
                                                    | (QData)((IData)(
                                                                      (0x0003ffffU 
                                                                       & VL_MULS_III(18, 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(
                                                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                                                (0x0003ffffU 
                                                                                & VL_EXTENDS_II(18,9, 
                                                                                ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U)))))))))) 
                                                   >> 0x00000020U)) 
                                          << 4U));
    bufp->fullWData(oldp+619,(__Vtemp_35),72);
    bufp->fullQData(oldp+622,((((QData)((IData)((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                    >> 0x00000010U)))) 
                                << 0x00000011U) | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                    << 0x00000010U) 
                                                                   | (0x0000ffffU 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))))),34);
    bufp->fullQData(oldp+624,((((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)) 
                                << 0x00000011U) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)
                                                                    ? vlSelfRef.__VdfgRegularize_hebeb780c_0_57
                                                                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))),34);
    __Vtemp_36[0U] = (IData)((0x00000003ffffffffULL 
                              & VL_MULS_QQQ(34, (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                   << 0x00000010U) 
                                                                  | (0x0000ffffU 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))), 
                                            (0x00000003ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)
                                                               ? vlSelfRef.__VdfgRegularize_hebeb780c_0_57
                                                               : vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))));
    __Vtemp_36[1U] = (((IData)((0x00000003ffffffffULL 
                                & VL_MULS_QQQ(34, (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, 
                                                                   (0x0001ffffU 
                                                                    & ((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)))) 
                                                                       ^ 
                                                                       (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                         << 0x00000010U) 
                                                                        | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                           >> 0x00000010U)))))), 
                                              (0x00000003ffffffffULL 
                                               & VL_EXTENDS_QI(34,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__))))) 
                       << 2U) | (IData)(((0x00000003ffffffffULL 
                                          & VL_MULS_QQQ(34, 
                                                        (0x00000003ffffffffULL 
                                                         & VL_EXTENDS_QI(34,17, 
                                                                         (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                                           << 0x00000010U) 
                                                                          | (0x0000ffffU 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))), 
                                                        (0x00000003ffffffffULL 
                                                         & VL_EXTENDS_QI(34,17, 
                                                                         ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)
                                                                           ? vlSelfRef.__VdfgRegularize_hebeb780c_0_57
                                                                           : vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))) 
                                         >> 0x00000020U)));
    __Vtemp_36[2U] = (((IData)((0x00000003ffffffffULL 
                                & VL_MULS_QQQ(34, (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, 
                                                                   (0x0001ffffU 
                                                                    & ((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)))) 
                                                                       ^ 
                                                                       (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                         << 0x00000010U) 
                                                                        | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                           >> 0x00000010U)))))), 
                                              (0x00000003ffffffffULL 
                                               & VL_EXTENDS_QI(34,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__))))) 
                       >> 0x0000001eU) | ((IData)((
                                                   (0x00000003ffffffffULL 
                                                    & VL_MULS_QQQ(34, 
                                                                  (0x00000003ffffffffULL 
                                                                   & VL_EXTENDS_QI(34,17, 
                                                                                (0x0001ffffU 
                                                                                & ((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)))) 
                                                                                ^ 
                                                                                (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                                                << 0x00000010U) 
                                                                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U)))))), 
                                                                  (0x00000003ffffffffULL 
                                                                   & VL_EXTENDS_QI(34,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)))) 
                                                   >> 0x00000020U)) 
                                          << 2U));
    bufp->fullWData(oldp+626,(__Vtemp_36),68);
    bufp->fullIData(oldp+629,((0x0001ffffU & ((- (IData)(
                                                         ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex)) 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)))) 
                                              ^ (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                    >> 0x00000010U))))),17);
    bufp->fullIData(oldp+630,(VL_EXTENDS_II(32,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)),32);
    bufp->fullBit(oldp+631,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i));
    bufp->fullIData(oldp+632,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type),32);
    bufp->fullIData(oldp+633,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id, 0x00000014U)),32);
    bufp->fullIData(oldp+634,((((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (
                                                   (0x00000fe0U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 7U))))),32);
    bufp->fullIData(oldp+635,((((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x0000000dU) | (
                                                   (((2U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0000001eU)) 
                                                     | (1U 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 7U))) 
                                                    << 0x0000000bU) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 7U)))))),32);
    bufp->fullIData(oldp+636,((0xfffff000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)),32);
    bufp->fullIData(oldp+637,((((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001fU))) 
                                << 0x00000014U) | (
                                                   (((0x000001feU 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 0x00000014U))) 
                                                    << 0x0000000bU) 
                                                   | (0x000007feU 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x00000014U))))),32);
    bufp->fullIData(oldp+638,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000000fU))),32);
    bufp->fullIData(oldp+639,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000014U))),32);
    bufp->fullIData(oldp+640,((((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) 
                                << 5U) | (0x0000001fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)))),32);
    bufp->fullIData(oldp+641,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000019U))),32);
    bufp->fullIData(oldp+642,((((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000018U)))) 
                                << 6U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6))),32);
    bufp->fullIData(oldp+643,(vlSelfRef.__VdfgRegularize_hebeb780c_0_6),32);
    bufp->fullIData(oldp+644,(((((0x00000300U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000013U)) 
                                 | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000017U))) 
                                << 0x00000010U) | (
                                                   (0x00000300U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x0000000dU)) 
                                                   | ((2U 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x00000013U)) 
                                                      | (1U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x00000019U)))))),32);
    bufp->fullIData(oldp+645,(((0x00010000U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 4U)) 
                               | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                        >> 0x00000019U)))),32);
    bufp->fullIData(oldp+646,((((IData)(1U) << (0x0000001fU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x00000014U))) 
                               - (IData)(1U))),32);
    bufp->fullBit(oldp+647,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o));
    bufp->fullBit(oldp+648,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q));
    bufp->fullCData(oldp+649,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o),5);
    bufp->fullCData(oldp+650,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000000fU))),6);
    bufp->fullCData(oldp+651,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000014U))),6);
    bufp->fullCData(oldp+652,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))),6);
    bufp->fullIData(oldp+653,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o),32);
    bufp->fullIData(oldp+654,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                              [(0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000014U))]),32);
    bufp->fullCData(oldp+655,((3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6))),2);
    bufp->fullBit(oldp+656,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__id_valid_q));
    bufp->fullCData(oldp+657,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),5);
    bufp->fullCData(oldp+658,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs),3);
    bufp->fullBit(oldp+659,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q));
    bufp->fullBit(oldp+660,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q));
    bufp->fullBit(oldp+661,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
    bufp->fullBit(oldp+662,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q));
    bufp->fullBit(oldp+663,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q));
    bufp->fullCData(oldp+664,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q),2);
    bufp->fullCData(oldp+665,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q),6);
    bufp->fullCData(oldp+666,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q),6);
    bufp->fullIData(oldp+667,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual),32);
    bufp->fullWData(oldp+668,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem),1024);
    bufp->fullIData(oldp+700,(((((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                       & (0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                      << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                 & (0x1eU 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                         & (0x1dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                        << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                   << 0x0000000cU) 
                                  | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                         & (0x1bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                        << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                   & (0x1aU 
                                                      == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                  << 2U)) 
                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (0x19U 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                          & (0x18U 
                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                     << 8U)) | ((((
                                                   (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                     & (0x17U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                       & (0x16U 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                       & (0x15U 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                        & (0x14U 
                                                           == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                                 << 4U) 
                                                | (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                      & (0x13U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                        & (0x12U 
                                                           == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                       << 2U)) 
                                                   | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                        & (0x11U 
                                                           == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                       << 1U) 
                                                      | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                         & (0x10U 
                                                            == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))))) 
                                << 0x00000010U) | (
                                                   (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                         & (0x0fU 
                                                            == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                           & (0x0eU 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                           & (0x0dU 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                            & (0x0cU 
                                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                                     << 0x0000000cU) 
                                                    | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                           & (0x0bU 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                             & (0x0aU 
                                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                             & (9U 
                                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                              & (8U 
                                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                                       << 8U)) 
                                                   | (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                           & (7U 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                             & (6U 
                                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                             & (5U 
                                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                              & (4U 
                                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                                       << 4U) 
                                                      | (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                            & (3U 
                                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                              & (2U 
                                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                              & (1U 
                                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                               & (0U 
                                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))))))),32);
    bufp->fullIData(oldp+701,(((((((((((0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                      << 3U) | (((0x1eU 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                << 2U)) 
                                    | ((((0x1dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                        << 1U) | ((0x1cU 
                                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                   << 0x0000000cU) 
                                  | ((((((0x1bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                        << 3U) | ((
                                                   (0x1aU 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                  << 2U)) 
                                      | ((((0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 1U) | 
                                         ((0x18U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                     << 8U)) | ((((
                                                   (((0x17U 
                                                      == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                    << 3U) 
                                                   | (((0x16U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                      << 2U)) 
                                                  | ((((0x15U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                      << 1U) 
                                                     | ((0x14U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                        & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                                 << 4U) 
                                                | (((((0x13U 
                                                       == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                     << 3U) 
                                                    | (((0x12U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                        & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                       << 2U)) 
                                                   | ((((0x11U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                        & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                       << 1U) 
                                                      | ((0x10U 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))))) 
                                << 0x00000010U) | (
                                                   (((((((0x0fU 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                        << 3U) 
                                                       | (((0x0eU 
                                                            == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                          << 2U)) 
                                                      | ((((0x0dU 
                                                            == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                          << 1U) 
                                                         | ((0x0cU 
                                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                                     << 0x0000000cU) 
                                                    | ((((((0x0bU 
                                                            == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                          << 3U) 
                                                         | (((0x0aU 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                            << 2U)) 
                                                        | ((((9U 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                            << 1U) 
                                                           | ((8U 
                                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                                       << 8U)) 
                                                   | (((((((7U 
                                                            == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                          << 3U) 
                                                         | (((6U 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                            << 2U)) 
                                                        | ((((5U 
                                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                            << 1U) 
                                                           | ((4U 
                                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                                       << 4U) 
                                                      | (((((3U 
                                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                           << 3U) 
                                                          | (((2U 
                                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                             << 2U)) 
                                                         | ((((1U 
                                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                             << 1U) 
                                                            | ((0U 
                                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))))))),32);
    bufp->fullCData(oldp+702,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state),3);
    bufp->fullSData(oldp+703,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h),16);
    bufp->fullIData(oldp+704,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q),32);
    bufp->fullIData(oldp+705,(((IData)(4U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q)),32);
    bufp->fullIData(oldp+706,(((IData)(2U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q)),32);
    bufp->fullBit(oldp+707,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q));
    bufp->fullBit(oldp+708,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q));
    bufp->fullBit(oldp+709,((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))));
    bufp->fullCData(oldp+710,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q),2);
    bufp->fullIData(oldp+711,((IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                                       >> ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                                           << 5U)))),32);
    bufp->fullBit(oldp+712,((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))));
    bufp->fullBit(oldp+713,((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))));
    bufp->fullBit(oldp+714,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q));
    bufp->fullBit(oldp+715,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q));
    bufp->fullQData(oldp+716,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q),64);
    bufp->fullBit(oldp+718,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q))));
    bufp->fullCData(oldp+719,((0x0000000fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q) 
                                              | (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))))),4);
    bufp->fullIData(oldp+720,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                               & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))),32);
    bufp->fullCData(oldp+721,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q) 
                               & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))),6);
    bufp->fullBit(oldp+722,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q));
    bufp->fullIData(oldp+723,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q),32);
    bufp->fullBit(oldp+724,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
    bufp->fullCData(oldp+725,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q),4);
    bufp->fullIData(oldp+726,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q),32);
    bufp->fullCData(oldp+727,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q),6);
    bufp->fullBit(oldp+728,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q));
    bufp->fullCData(oldp+729,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q),2);
    bufp->fullCData(oldp+730,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q),2);
    bufp->fullIData(oldp+731,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q),32);
    bufp->fullIData(oldp+732,(((IData)(4U) + (0xfffffffcU 
                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q))),32);
    bufp->fullBit(oldp+733,((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))));
    bufp->fullCData(oldp+734,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q),2);
    bufp->fullIData(oldp+735,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int),32);
    bufp->fullCData(oldp+736,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
    bufp->fullCData(oldp+737,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
    bufp->fullCData(oldp+738,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q),2);
    bufp->fullBit(oldp+739,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
    bufp->fullBit(oldp+740,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q));
    bufp->fullCData(oldp+741,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset),2);
    bufp->fullIData(oldp+742,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),32);
    bufp->fullCData(oldp+743,(((0x20000000U == (0xfff00000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i))
                                ? 1U : 2U)),2);
    bufp->fullBit(oldp+744,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q) 
                             & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex)) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access) 
                             & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex) 
                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_lat_ex) 
                                   >> 1U)))));
    bufp->fullIData(oldp+746,((0x0000001fU & ((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel))))) 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x0000000fU)))),32);
    bufp->fullIData(oldp+747,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                               [(0x0000001fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
                               & (- (IData)((1U & (~ 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                                    >> 5U))))))),32);
    bufp->fullBit(oldp+748,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                             & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000014U))) 
                                & (0U != (0x0000001fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)))))));
    bufp->fullBit(oldp+749,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                             & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                                & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))));
    bufp->fullBit(oldp+750,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                             & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000014U))) 
                                & (0U != (0x0000001fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)))))));
    bufp->fullBit(oldp+751,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                             & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))));
    bufp->fullBit(oldp+752,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                             & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
                                 == (0x0000001fU & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000014U))) 
                                & (0U != (0x0000001fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000014U)))))));
    bufp->fullBit(oldp+753,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                             & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))));
    bufp->fullCData(oldp+754,((3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
                                      ? ((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)
                                          ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)))
                                      : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q) 
                                         - (IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid))))),2);
    bufp->fullIData(oldp+755,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q),32);
    bufp->fullIData(oldp+756,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q),32);
    bufp->fullIData(oldp+757,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q),32);
    bufp->fullIData(oldp+758,(vlSelfRef.tb_pim_core__DOT__data_rdata),32);
    bufp->fullBit(oldp+759,((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg))));
    bufp->fullCData(oldp+760,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg),2);
    bufp->fullIData(oldp+761,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_reg),19);
    bufp->fullCData(oldp+762,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q),2);
    bufp->fullBit(oldp+763,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q));
    bufp->fullBit(oldp+764,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o));
    bufp->fullBit(oldp+765,(vlSelfRef.tb_pim_core__DOT__data_rvalid));
    bufp->fullIData(oldp+766,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__jump_target_id_i),32);
    bufp->fullCData(oldp+767,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn),2);
    bufp->fullIData(oldp+768,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i),32);
    bufp->fullBit(oldp+769,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i));
    bufp->fullBit(oldp+770,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i));
    bufp->fullBit(oldp+771,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i));
    bufp->fullBit(oldp+772,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i));
    bufp->fullBit(oldp+773,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec));
    bufp->fullBit(oldp+774,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec));
    bufp->fullBit(oldp+775,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
    bufp->fullBit(oldp+776,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec));
    bufp->fullBit(oldp+777,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
    bufp->fullBit(oldp+778,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
    bufp->fullBit(oldp+779,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
    bufp->fullBit(oldp+780,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec));
    bufp->fullBit(oldp+781,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec));
    bufp->fullBit(oldp+782,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec));
    bufp->fullBit(oldp+783,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec));
    bufp->fullBit(oldp+784,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o));
    bufp->fullIData(oldp+785,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
    bufp->fullCData(oldp+786,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i),6);
    bufp->fullBit(oldp+787,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    bufp->fullCData(oldp+788,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),7);
    bufp->fullCData(oldp+789,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),3);
    bufp->fullCData(oldp+790,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel),3);
    bufp->fullCData(oldp+791,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel),2);
    bufp->fullCData(oldp+792,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux),2);
    bufp->fullBit(oldp+793,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
    bufp->fullCData(oldp+794,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),4);
    bufp->fullCData(oldp+795,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel),2);
    bufp->fullCData(oldp+796,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator),3);
    bufp->fullCData(oldp+797,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode),2);
    bufp->fullBit(oldp+798,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id));
    bufp->fullCData(oldp+799,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id),2);
    bufp->fullCData(oldp+800,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id),2);
    bufp->fullBit(oldp+801,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access));
    bufp->fullBit(oldp+802,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status));
    bufp->fullBit(oldp+803,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i));
    bufp->fullBit(oldp+804,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i));
    bufp->fullBit(oldp+805,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i));
    bufp->fullBit(oldp+806,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec));
    bufp->fullBit(oldp+807,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec));
    bufp->fullBit(oldp+808,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec));
    bufp->fullBit(oldp+809,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active));
    bufp->fullBit(oldp+810,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    bufp->fullBit(oldp+811,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    bufp->fullBit(oldp+812,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
    bufp->fullCData(oldp+813,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
    bufp->fullBit(oldp+814,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    bufp->fullBit(oldp+815,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    bufp->fullBit(oldp+816,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim));
    bufp->fullIData(oldp+817,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
    bufp->fullBit(oldp+818,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
    bufp->fullIData(oldp+819,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned),32);
    bufp->fullIData(oldp+820,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
    bufp->fullBit(oldp+821,((3U != (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))));
    bufp->fullBit(oldp+822,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up));
    bufp->fullBit(oldp+823,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
    bufp->fullIData(oldp+824,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
    bufp->fullIData(oldp+825,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
    bufp->fullBit(oldp+826,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en));
    bufp->fullBit(oldp+827,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int));
    bufp->fullBit(oldp+828,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i));
    bufp->fullBit(oldp+829,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int));
    bufp->fullIData(oldp+830,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int),19);
    bufp->fullCData(oldp+831,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int),4);
    bufp->fullIData(oldp+832,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int),32);
    bufp->fullBit(oldp+833,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_req));
    bufp->fullBit(oldp+834,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_gnt));
    bufp->fullBit(oldp+835,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_rvalid));
    bufp->fullCData(oldp+836,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_next),2);
    bufp->fullCData(oldp+837,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next),2);
    bufp->fullIData(oldp+838,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr),19);
    bufp->fullBit(oldp+839,(vlSelfRef.tb_pim_core__DOT__clk_i));
    bufp->fullBit(oldp+840,(vlSelfRef.tb_pim_core__DOT__rst_ni));
    bufp->fullBit(oldp+841,(vlSelfRef.tb_pim_core__DOT__instr_rvalid));
    bufp->fullIData(oldp+842,(vlSelfRef.tb_pim_core__DOT__instr_rdata),32);
    bufp->fullBit(oldp+843,(((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en)) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q))));
    bufp->fullIData(oldp+844,(vlSelfRef.tb_pim_core__DOT__cycle_count),32);
    bufp->fullIData(oldp+845,(vlSelfRef.tb_pim_core__DOT__result_add),32);
    bufp->fullIData(oldp+846,(vlSelfRef.tb_pim_core__DOT__result_mul),32);
    bufp->fullBit(oldp+847,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i));
    bufp->fullBit(oldp+848,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__ex_valid_o));
    bufp->fullBit(oldp+849,(((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim))));
    bufp->fullBit(oldp+850,(((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en))));
    bufp->fullCData(oldp+851,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS),3);
    bufp->fullCData(oldp+852,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
                               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o))))))),2);
    bufp->fullCData(oldp+853,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_a_id),5);
    bufp->fullCData(oldp+854,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_b_id),5);
    bufp->fullCData(oldp+855,((3U & (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                                      ? ((IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid)
                                          ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                                          : ((IData)(1U) 
                                             + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                                      : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                                         - (IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid))))),2);
    bufp->fullIData(oldp+856,(((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSelfRef.tb_pim_core__DOT__data_rdata 
                                        << 8U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x00000018U))
                                    : ((vlSelfRef.tb_pim_core__DOT__data_rdata 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000010U)))
                                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSelfRef.tb_pim_core__DOT__data_rdata 
                                        << 0x00000018U) 
                                       | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 8U)) : vlSelfRef.tb_pim_core__DOT__data_rdata))),32);
    bufp->fullIData(oldp+857,(((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((((- (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                                         & ((- (IData)(
                                                       (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                        >> 0x0000001fU))) 
                                            | (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                                        << 8U) | (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                  >> 0x00000018U))
                                    : ((((- (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                           >> 0x00000017U)))) 
                                            | (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                                        << 8U) | (0x000000ffU 
                                                  & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                     >> 0x00000010U))))
                                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((((- (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                           >> 0x0000000fU)))) 
                                            | (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                                        << 8U) | (0x000000ffU 
                                                  & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                     >> 8U)))
                                    : (((((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                         >> 7U)))) 
                                          | (- (IData)(
                                                       (2U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                                         & (- (IData)(
                                                      (0U 
                                                       != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                                        << 8U) | (0x000000ffU 
                                                  & vlSelfRef.tb_pim_core__DOT__data_rdata))))),32);
    bufp->fullBit(oldp+858,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    bufp->fullIData(oldp+859,(((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q))
                                ? (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q 
                                   + vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q)
                                : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q))
                                    ? vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q
                                    : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q))),32);
    bufp->fullBit(oldp+860,((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)))));
}
