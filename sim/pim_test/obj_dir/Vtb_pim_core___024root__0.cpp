// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pim_core.h for the primary calling header

#include "Vtb_pim_core__pch.h"

VL_ATTR_COLD void Vtb_pim_core___024root___eval_initial__TOP(Vtb_pim_core___024root* vlSelf);
VlCoroutine Vtb_pim_core___024root___eval_initial__TOP__Vtiming__0(Vtb_pim_core___024root* vlSelf);
VlCoroutine Vtb_pim_core___024root___eval_initial__TOP__Vtiming__1(Vtb_pim_core___024root* vlSelf);
VlCoroutine Vtb_pim_core___024root___eval_initial__TOP__Vtiming__2(Vtb_pim_core___024root* vlSelf);

void Vtb_pim_core___024root___eval_initial(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_initial\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pim_core___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vtb_pim_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pim_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_pim_core___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_pim_core___024root____VbeforeTrig_h02a4d73b__0(Vtb_pim_core___024root* vlSelf, const char* __VeventDescription);
void Vtb_pim_core___024root____VbeforeTrig_h02a4d417__0(Vtb_pim_core___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_pim_core___024root___eval_initial__TOP__Vtiming__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_pim_core__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_pim_core__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_pim_core__DOT__rst_ni = 0U;
    tb_pim_core__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, tb_pim_core__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_pim_core___024root____VbeforeTrig_h02a4d73b__0(vlSelf, 
                                                           "@(posedge tb_pim_core.clk_i)");
        co_await vlSelfRef.__VtrigSched_h02a4d73b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pim_core.clk_i)", 
                                                             "tb_pim_core.sv", 
                                                             56);
        tb_pim_core__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_pim_core__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    Vtb_pim_core___024root____VbeforeTrig_h02a4d417__0(vlSelf, 
                                                       "@(negedge tb_pim_core.clk_i)");
    co_await vlSelfRef.__VtrigSched_h02a4d417__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pim_core.clk_i)", 
                                                         "tb_pim_core.sv", 
                                                         57);
    vlSelfRef.tb_pim_core__DOT__rst_ni = 1U;
    co_return;
}

void Vtb_pim_core___024root____VbeforeTrig_hd0fb909f__0(Vtb_pim_core___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_pim_core___024root___eval_initial__TOP__Vtiming__1(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pim_core__DOT__cycle_count = 0U;
    vlSelfRef.tb_pim_core__DOT__result_add = 0U;
    vlSelfRef.tb_pim_core__DOT__result_mul = 0U;
    VL_WRITEF_NX("[%0t ns] Simulation start \342\200\224 waiting for reset deassertion.\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    Vtb_pim_core___024root____VbeforeTrig_hd0fb909f__0(vlSelf, 
                                                       "@(posedge tb_pim_core.rst_ni)");
    co_await vlSelfRef.__VtrigSched_hd0fb909f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_pim_core.rst_ni)", 
                                                         "tb_pim_core.sv", 
                                                         266);
    VL_WRITEF_NX("[%0t ns] Reset deasserted \342\200\224 core is now running.\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    {
        while (true) {
            Vtb_pim_core___024root____VbeforeTrig_h02a4d73b__0(vlSelf, 
                                                               "@(posedge tb_pim_core.clk_i)");
            co_await vlSelfRef.__VtrigSched_h02a4d73b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_pim_core.clk_i)", 
                                                                 "tb_pim_core.sv", 
                                                                 271);
            co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                                 nullptr, 
                                                 "tb_pim_core.sv", 
                                                 272);
            vlSelfRef.tb_pim_core__DOT__cycle_count 
                = ((IData)(1U) + vlSelfRef.tb_pim_core__DOT__cycle_count);
            if (VL_UNLIKELY((VL_LTES_III(32, 0x00002710U, vlSelfRef.tb_pim_core__DOT__cycle_count)))) {
                VL_WRITEF_NX("[%0t ns] TIMEOUT: test did not complete within 10000 cycles!\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_FINISH_MT("tb_pim_core.sv", 280, "");
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((0x0000deadU == vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[27U])))) {
                vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__std_cycles 
                    = VL_ITOR_D_I(32, vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[25U]);
                vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__pim_cycles 
                    = VL_ITOR_D_I(32, vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[26U]);
                vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__speedup_pct 
                    = (100.0 * ((vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__std_cycles 
                                 - vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__pim_cycles) 
                                / vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__std_cycles));
                VL_WRITEF_NX("========================================================\n             PIM PERFORMANCE BENCHMARK                  \n========================================================\n  Standard RISC-V IMAGE PROCESSING : %0.0f cycles\n  PIM-Accelerated IMAGE PROCESSING : %0.0f cycles\n--------------------------------------------------------\n  Total Cycle Reduction      : %0.0f cycles\n  Performance Improvement    : %0.2f %%\n========================================================\n",4
                             , 'D',vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__std_cycles
                             , 'D',vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__pim_cycles
                             , 'D',(vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__std_cycles 
                                    - vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__pim_cycles)
                             , 'D',vlSelfRef.tb_pim_core__DOT__unnamedblk1__DOT__speedup_pct);
                VL_FINISH_MT("tb_pim_core.sv", 298, "");
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vtb_pim_core___024root___eval_initial__TOP__Vtiming__2(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_pim_core.sv", 
                                             51);
        vlSelfRef.tb_pim_core__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__clk_i)));
    }
    co_return;
}

void Vtb_pim_core___024root___eval_triggers_vec__act(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_triggers_vec__act\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 0x00000011U) 
                                                      | (((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__rst_ni__0))) 
                                                         << 0x00000010U)) 
                                                     | ((((((((~ (IData)(vlSelfRef.tb_pim_core__DOT__clk_i)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk__0))) 
                                                               << 2U)) 
                                                           | ((((~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__rst_ni__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o__0)))) 
                                                          << 0x0000000cU) 
                                                         | (((((vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i__0) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i__0)) 
                                                               << 3U) 
                                                              | ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex__0) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__data_rvalid__0)) 
                                                                 << 1U) 
                                                                | (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__data_rdata__0))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0 
        = vlSelfRef.tb_pim_core__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__data_rdata__0 
        = vlSelfRef.tb_pim_core__DOT__data_rdata;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__data_rvalid__0 
        = vlSelfRef.tb_pim_core__DOT__data_rvalid;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__rst_ni__0 
        = vlSelfRef.tb_pim_core__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk;
}

bool Vtb_pim_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_pim_core___024root___act_sequent__TOP__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___act_sequent__TOP__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__clk_i)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hf40be3a8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h21c33103_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hb631a9a4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h03efe2d9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h9d404c63_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h4f689d40_0;

void Vtb_pim_core___024root___act_sequent__TOP__1(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___act_sequent__TOP__1\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_40;
    __VdfgRegularize_hebeb780c_0_40 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) 
                      << 5U) | (((2U & ((~ (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))) 
                                        << 1U)) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S)) 
                                << 3U)) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vtb_pim_core__ConstPool__TABLE_hf40be3a8_0
        [__Vtableidx3];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vtb_pim_core__ConstPool__TABLE_h21c33103_0
        [__Vtableidx3];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vtb_pim_core__ConstPool__TABLE_hb631a9a4_0
        [__Vtableidx3];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vtb_pim_core__ConstPool__TABLE_h03efe2d9_0
        [__Vtableidx3];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vtb_pim_core__ConstPool__TABLE_h9d404c63_0
        [__Vtableidx3];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vtb_pim_core__ConstPool__TABLE_h4f689d40_0
        [__Vtableidx3];
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x0000003fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                     >> 1U));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                   >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex;
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x0000003fU & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))
                               ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
        = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
             ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                 << 0x0000001fU) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 1U)) : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
        = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
            ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI
                : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                    << 0x0000001fU) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                       >> 1U))) : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    __VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                       & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
                                          & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i) 
                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                   + vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex) 
           | (IData)(__VdfgRegularize_hebeb780c_0_40));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__ex_valid_o 
        = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex) 
            | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex) 
               | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex) 
                  | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex)))) 
           & (IData)(__VdfgRegularize_hebeb780c_0_40));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 512> Vtb_pim_core__ConstPool__TABLE_ha96f118e_0;

void Vtb_pim_core___024root___act_comb__TOP__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___act_comb__TOP__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_47;
    __VdfgRegularize_hebeb780c_0_47 = 0;
    // Body
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_uret_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_irq_sec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
    vlSelfRef.tb_pim_core__DOT__irq_ack_unused = 0U;
    vlSelfRef.tb_pim_core__DOT__irq_id_unused = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           | (1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_csr_save = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__hwlp_mask = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 3U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                    }
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                          | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o)) 
                         | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec))) 
                        | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0x0bU : 0x0cU);
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 2U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_csr_save = 1U;
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause = 3U;
                } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause = 4U;
                }
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 2U;
                if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_csr_save = 1U;
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause = 2U;
                    } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause = 1U;
                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause = 3U;
                    }
                }
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 7U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec))))))) {
                    if ((0U != (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec) 
                                 << 2U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1138: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_controller.sv", 1138, "");
                        }
                    }
                }
                if ((1U & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause 
                    = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex)
                        ? 5U : 7U);
            } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause = 1U;
            } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                if ((1U & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            } else {
                if (((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                          | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec)) 
                         | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                        | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                       | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status)) 
                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 0U;
                        if ((1U & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id 
                            = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                        if ((1U & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id 
                            = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_uret_id 
                            = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status)))) {
                        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec) {
                            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                            }
                        } else {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                        }
                    }
                }
                if ((1U & (~ VL_ONEHOT_I(((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)))))))) {
                    if ((0U != ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                    << 3U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status) 
                                      << 1U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 << 4U) | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1070: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_controller.sv", 1070, "");
                        }
                    }
                }
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__ex_valid_o) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause = 2U;
                } else {
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause = 3U;
                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause = 0x0bU;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if ((0U != (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                     << 1U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:948: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.controller_i", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000));
                                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_controller.sv", 948, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 3U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                    if ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o)) 
                         & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                    } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o) 
                                & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__hwlp_mask = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_irq_sec 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q;
                        vlSelfRef.tb_pim_core__DOT__irq_ack_unused = 1U;
                        vlSelfRef.tb_pim_core__DOT__irq_id_unused 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause 
                            = (0x00000020U | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o));
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id = 1U;
                    } else {
                        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                    ? 8U : 5U);
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                        } else {
                            if ((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                    | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                   | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                  | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status))) {
                                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 2U;
                                    if ((1U & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o)) 
                                               & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                    }
                                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                            ? 0x0dU
                                            : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                                    ? 8U
                                                    : 5U)));
                                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                             | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)
                                            ? 7U : 5U);
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                                }
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status) 
                                                        << 6U) 
                                                       | (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                             | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                            | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))))) {
                                if ((0U != ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                    | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                   | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                             << 3U) 
                                            | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:557: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000));
                                        VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_controller.sv", 557, "");
                                    }
                                }
                            }
                        }
                        if ((1U & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                        | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))
                                        ? 8U : (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                  | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec))
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0x0eU
                                                   : 0x0dU))));
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                               | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                                | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)))))))) {
                                    if ((0U != ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                    << 2U)) 
                                                | ((((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:693: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000));
                                            VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_controller.sv", 693, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall = 0U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o) 
                     & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 4U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_irq_sec 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q;
                    vlSelfRef.tb_pim_core__DOT__irq_ack_unused = 1U;
                    vlSelfRef.tb_pim_core__DOT__irq_id_unused 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause 
                        = (0x00000020U | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o));
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i) {
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int = 1U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set = 1U;
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int = 0U;
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    __Vtableidx1 = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns 
        = Vtb_pim_core__ConstPool__TABLE_ha96f118e_0
        [__Vtableidx1];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    if (((((((((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                                = (((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))) 
                                     << 5U) | (((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 7U))) 
                                               << 3U)) 
                                   | ((6U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000000aU)) 
                                      | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x11U))));
                        }
                    } else if ((0x0304U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0305U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0340U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                                        = (0xfffffffeU 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x0342U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x00000020U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x0000001aU)) 
                   | (0x0000001fU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else if ((0x07b0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffff7fffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00008000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffffc3ffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00000800U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xfffffdffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xffffffefU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xfffffff8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n) 
                         | (4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else if ((0x07b1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n 
                = (0xfffffffeU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id) 
                                   << 1U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if)))))) {
            if ((0U != (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id) 
                         << 1U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1044: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_cs_registers.sv", 1044, "");
                }
            }
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_csr_save) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause) 
                      << 6U));
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x00000020U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                 << 2U)));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x0000000eU | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n));
    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q);
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id) 
                               << 2U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id) 
                                          << 1U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause))))))) {
        if ((0U != (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id) 
                     << 2U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id) 
                                << 1U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1041: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_cs_registers.sv", 1041, "");
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause) 
           & (- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q)))));
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux)) 
                               << 1U) | (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))))))) {
        if ((0U != (((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux)) 
                     << 1U) | (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:132: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_if_stage.sv", 132, "");
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:138: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_if_stage.sv", 138, "");
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr 
        = ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q
            : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q 
               & (- (IData)((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
        = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
            & (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id)))
            ? 0U : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int) 
           & (2U > ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                       & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set)))))))));
    __VdfgRegularize_hebeb780c_0_47 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
                                       | (0U < (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n = 0U;
    if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n = 0U;
                }
            }
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                    ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                        ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q
                        : 0U) : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                                  ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q
                                  : ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))
                                      ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr 
                                         << 8U) : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))
                                                    ? 
                                                   (0x1a110800U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))))))
                                                    : 
                                                   ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr 
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
                                                          << 2U)))))))
                : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                    ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                        ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex
                        : vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__jump_target_id_i)
                    : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id))
                        ? ((IData)(4U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id)
                        : 0U)));
    }
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o) 
                              >> 5U)))) << 6U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2 
        = (((- (IData)((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o) 
                              >> 5U)))) << 6U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o));
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
             & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set)
                ? (0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
             & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                   & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set)
                ? (0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)));
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                  ? ((IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid)
                      ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid 
        = ((~ (IData)(__VdfgRegularize_hebeb780c_0_47)) 
           & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex) 
           & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex)) 
              & ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o)) 
                 & ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex))
                     ? (0U != (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                     : ((3U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int)) 
                        & (1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex)))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q;
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum 
        = (0x000fffffU & (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1 
                          + (0x0007ffffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                            >> 2U))));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum 
        = (0x000fffffU & (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2 
                          + (0x0007ffffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                            >> 2U))));
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q;
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o 
            = (0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr);
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 2U;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                 == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 2U;
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
        }
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) {
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
                 == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 1U;
        }
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 0U;
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) {
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i)))) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o 
        = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i) 
            | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                    == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000014U))) 
                   & (0U != (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x00000014U))))) 
               | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding) 
                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                      & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i)) 
                         & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                            == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 7U)))))) 
                  | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                     & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                        & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))))) 
           & (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i)) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu)) 
              | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex) 
                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                >> 0x00000014U))]));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                          >> 5U))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o 
        = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o) 
                 | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                    | ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding)) 
                       | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i)) 
           & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o)) 
              & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o)) 
                 & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access) 
                        & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex) 
                           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_lat_ex) 
                              >> 1U)))) & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__jump_target_id_i
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b)
                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel))))) 
                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0000000fU))))
                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_44 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id) 
                                                 & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clear_instr_valid_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i) 
           | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if)) 
           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) 
           & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid) 
             & (0U < (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    } else if (((IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid) 
                & (0U < (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set)))) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int) 
                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i 
        = ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i 
        = ((~ (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready) 
                & (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
               | (IData)(__VdfgRegularize_hebeb780c_0_47))) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
        = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i)
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q))
                  : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
         & (2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i) 
         & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i)) 
          & (2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
         & (2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.tb_pim_core__DOT__instr_rdata)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U))));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_46 = ((2U 
                                                  != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q))
                  : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
}

void Vtb_pim_core___024root___eval_act(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_act\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000020000ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_pim_core___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_pim_core___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_pim_core___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_pim_core___024root___nba_sequent__TOP__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_sequent__TOP__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 = 0U;
    vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 = 0U;
    vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 = 0U;
    if (((((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i)) 
          & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int)) 
         & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o)))) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0x00080000U & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum)))) {
                VL_WRITEF_NX("[%0t] %%Error: sram_controller.sv:103: Assertion failed in %m: [sram_ctrl] PIM Port-A address out of range: base_word=0x%05x  imm=%0d  result_word=0x%06x\n",6, 'M',vlSymsp->name(),"tb_pim_core.u_pim_subsystem.u_sram_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',19,(0x0007ffffU 
                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                          >> 2U)), '~',6,vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1
                             , '#',20,vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum);
                VL_STOP_MT("../../rtl/include/../../rtl/sram_controller.sv", 103, "");
            }
            if (VL_UNLIKELY(((0x00080000U & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum)))) {
                VL_WRITEF_NX("[%0t] %%Error: sram_controller.sv:106: Assertion failed in %m: [sram_ctrl] PIM Port-B address out of range: base_word=0x%05x  imm=%0d  result_word=0x%06x\n",6, 'M',vlSymsp->name(),"tb_pim_core.u_pim_subsystem.u_sram_ctrl", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',19,(0x0007ffffU 
                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                          >> 2U)), '~',6,vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2
                             , '#',20,vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum);
                VL_STOP_MT("../../rtl/include/../../rtl/sram_controller.sv", 106, "");
            }
        }
    }
    if (vlSelfRef.tb_pim_core__DOT__rst_ni) {
        if ((((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
              & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i)) 
             & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int)))) {
            if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int))) {
                vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 
                    = (0x000000ffU & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int);
                vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 
                    = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr;
                vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int))) {
                vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 
                    = (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int 
                                      >> 8U));
                vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 
                    = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr;
                vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int))) {
                vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 
                    = (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int 
                                      >> 0x10U));
                vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 
                    = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr;
                vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int))) {
                vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 
                    = (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int 
                       >> 0x18U);
                vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 
                    = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr;
                vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 = 1U;
            }
        }
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o) {
        vlSelfRef.tb_pim_core__DOT__instr_rdata = vlSelfRef.tb_pim_core__DOT__imem
            [(0x00003fffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o 
                             >> 2U))];
    }
    vlSelfRef.tb_pim_core__DOT__instr_rvalid = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o;
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hbec546d7_0;

void Vtb_pim_core___024root___nba_sequent__TOP__1(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_sequent__TOP__1\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__Vdly__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg 
        = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg;
    __Vtableidx5 = ((((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q) 
                      << 4U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i) 
                                << 3U)) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)))));
    vlSelfRef.__Vdly__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg 
        = Vtb_pim_core__ConstPool__TABLE_hbec546d7_0
        [__Vtableidx5];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__p_elw_busy_q = 0U;
    if (vlSelfRef.tb_pim_core__DOT__rst_ni) {
        if (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_reg 
                = (0x0007ffffU & (((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int) 
                                   & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o)))
                                   ? ((0x00080000U 
                                       & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum)
                                       ? ((0x00000020U 
                                           & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1)
                                           ? 0U : 0x0007ffffU)
                                       : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum)
                                   : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int));
        }
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int = 0U;
        if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int = 1U;
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int 
                = ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q))
                    ? (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q 
                       + vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q)
                    : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q))
                        ? vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q
                        : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q));
        }
        if (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__wdata_reg 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i;
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__be_reg 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i;
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__addr_reg 
                = (0x0007ffffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
                                  >> 2U));
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__we_reg 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex;
        }
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_state 
            = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_next;
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg 
                = ((0x20000000U == (0xfff00000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i))
                    ? 1U : 2U);
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q = 1U;
        } else if (vlSelfRef.tb_pim_core__DOT__data_rvalid) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q = 0U;
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        }
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state 
            = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next;
    } else {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_reg = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__wdata_reg = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__be_reg = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_state = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__addr_reg = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__we_reg = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state = 0U;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q 
        = vlSelfRef.tb_pim_core__DOT__rst_ni;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid)) 
               | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy) 
                  | ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                     | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i)))));
}

void Vtb_pim_core___024root___nba_sequent__TOP__2(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_sequent__TOP__2\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("[%0t ns] pim_cmd=%02b imm1=%02d imm2=%02d base=0x%08x | data_req=%b gnt=%b rvalid=%b addr=0x%08x rdata=0x%08x\n",11, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o)
                 , '#',6,vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o
                 , '#',6,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o)
                 , '#',32,vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex
                 , '#',1,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i)
                 , '#',1,vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o
                 , '#',1,(IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)
                 , '#',32,vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i
                 , '#',32,vlSelfRef.tb_pim_core__DOT__data_rdata);
}

extern const VlWide<32>/*1023:0*/ Vtb_pim_core__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vtb_pim_core__ConstPool__CONST_h6be9aa18_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtb_pim_core__ConstPool__TABLE_h26b33901_0;

void Vtb_pim_core___024root___nba_sequent__TOP__3(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_sequent__TOP__3\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_22;
    __VdfgRegularize_hebeb780c_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_37;
    __VdfgRegularize_hebeb780c_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_38;
    __VdfgRegularize_hebeb780c_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_39;
    __VdfgRegularize_hebeb780c_0_39 = 0;
    VlWide<64>/*2047:0*/ __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<64>/*2047:0*/ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<32>/*1023:0*/ __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q);
    VlWide<32>/*1023:0*/ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q);
    IData/*31:0*/ __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    IData/*31:0*/ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    // Body
    __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)
               ? (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0xffffU | __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)) 
                    | vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n)));
    __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (1U | __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffbU & __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (4U & (((~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)) 
                     << 2U) | (0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (4U | __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff7U & __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (8U & (((~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)) 
                     << 3U) | (0xfffffff8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (8U | __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_waddr_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_op_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_operands_ex[0U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_operands_ex[1U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_operands_ex[2U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_flags_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_lat_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_shift_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex = 0U;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_pipe_stall 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done) 
               & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = 0U;
    if (vlSelfRef.tb_pim_core__DOT__rst_ni) {
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__) 
                             | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__)))))) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__63__03a0__KET__);
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__63__03a0__KET__ 
                           >> 0x00000020U));
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        } else if (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
                    & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__)) 
                       & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                              >> 2U)) & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret))))) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__191__03a128__KET__);
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__191__03a128__KET__ 
                           >> 0x00000020U));
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        } else if (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
                    & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__)) 
                       & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                              >> 3U)) & (0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
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
                                                               << 1U))))))))))) {
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__255__03a192__KET__);
            __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__255__03a192__KET__ 
                           >> 0x00000020U));
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
            __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        }
    } else {
        __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        __Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
        __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q)));
    __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U])));
    VL_ASSIGN_W(1024, __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q, Vtb_pim_core__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
        = ((__Vdly__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
            & __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U]) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
              & (~ __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])));
    VL_ASSIGN_W(2048, __VdlyMask__tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q, Vtb_pim_core__ConstPool__CONST_h6be9aa18_0);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jump 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret) 
               & ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i)) 
                  | (2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__255__03a192__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__191__03a128__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__63__03a0__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_compressed_id)));
    if (vlSelfRef.tb_pim_core__DOT__rst_ni) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns;
        if (vlSelfRef.__VdfgRegularize_hebeb780c_0_46) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n;
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q 
                = (1U & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry)) 
                         & (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                    >> 0x20U))));
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_n;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n;
        if (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o;
        }
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
             | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr;
        }
        if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set))))) {
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_fifo.sv:117: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_pim_core.u_core.if_stage_i.prefetch_buffer_i.fifo_i", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_fifo.sv", 117, "");
                }
            }
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q = 0U;
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n;
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q 
                    = (0x0000003fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000014U) 
                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)))));
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q 
                    = (0x0000003fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000001aU) 
                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)))));
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q 
                    = (((3U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0000000cU)))
                         ? 1U : (2U & (- (IData)((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0000000cU))))))) 
                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44))));
            }
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q 
            = (6U | (0x00000028U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n)));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_n;
        if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle)))) {
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) {
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_atop_ex = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_reg_offset_ex = 0U;
                    }
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator;
                    }
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex 
                            = (3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6));
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_a_id;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_b_id;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
                    }
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex 
                        = (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i));
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex 
                        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
                           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o))))));
                    if (((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i)) 
                         | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id;
                    }
                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex = 3U;
                }
            }
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id;
            } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) {
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c;
                }
            }
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h 
                = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                   >> 0x10U);
        }
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__illegal_c_insn_id 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clear_instr_valid_i) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id = 0U;
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n;
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex;
            if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                    = (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int);
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_sign_ext_ex;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex;
            }
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i) {
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle)))) {
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o;
            } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex = 0U;
            } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid) 
             & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex) 
                    | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i))
                    ? vlSelfRef.tb_pim_core__DOT__data_rdata
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext);
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex;
        }
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i) {
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex = 4U;
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id;
                }
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle)))) {
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) {
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                        = (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel)) 
                            & ((0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                               | (0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))))
                            ? (0x7fffffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b)
                            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b);
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a;
                }
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex = 1U;
            } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex = 0U;
            }
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n;
        if ((vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[1954U] 
             & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if ((vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[1953U] 
             & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q 
                = (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((5U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (5U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((6U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (6U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((7U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (7U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((8U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (8U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((9U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (9U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x0aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x0bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x0cU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0cU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x0dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x0eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x0fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x10U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x10U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x11U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x11U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x12U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x12U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x13U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x13U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x14U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x14U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x15U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x15U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x18U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x18U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x1aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x1bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x1cU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1cU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x1dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x1eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if (((0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall 
            = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o) 
                & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__id_valid_q));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall 
            = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o) 
                & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__id_valid_q));
        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__ex_valid_o) {
            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex;
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
            }
        } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle)))) {
                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i) {
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex 
                            = (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                     >> 0x0dU));
                    }
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex = 0U;
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_sign_ext_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id;
                    }
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access;
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex 
                            = (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U));
                    }
                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex 
                            = (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U));
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex = 0U;
                    }
                } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex = 0U;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_compressed_id 
                = (3U != (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned));
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs = 1U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = 0ULL;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q = 1U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_atop_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_reg_offset_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q = 6U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__illegal_c_insn_id = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q = 0x40000003U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex = 3U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_sign_ext_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_compressed_id = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id = 0U;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_imiss 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
                        | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch_taken 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch) 
               & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                  >> 3U)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_store 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o)) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_load 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o)) 
               & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev 
        = ((((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        << 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                          >> 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001fU))))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))) 
                               << 2U) | (((1U == (3U 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))))))))) {
        if ((0U != (((2U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))) 
                     << 2U) | (((1U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))) 
                                << 1U) | (0U == (3U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:863: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 863, "");
            }
        }
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_51 = (IData)(
                                                        (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                          >> 1U) 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                            >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_52 = (IData)(
                                                        (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                          >> 1U) 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                            >> 0x0000001fU)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))) 
           << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = (1U 
                                                 & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                       >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                    >> 0x0000001fU));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active = 0U;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else {
        if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active = 1U;
        } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        }
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = (1U 
                                                 & (~ (IData)(
                                                              (4U 
                                                               == 
                                                               (0x00000804U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q)))));
    __Vtableidx2 = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vtb_pim_core__ConstPool__TABLE_h26b33901_0
        [__Vtableidx2];
    __VdfgRegularize_hebeb780c_0_38 = ((0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                       | (0x18U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((0x1dU 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                                 | (0x1cU 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)));
    __VdfgRegularize_hebeb780c_0_39 = ((0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                       | ((0x1dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                          | ((0x1bU 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                             | (0x1fU 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))));
    __VdfgRegularize_hebeb780c_0_37 = ((0x31U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                       | ((0x30U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
           == ((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex) 
               & (- (IData)((0x17U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI 
        = ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
            >> 0x0000001fU) & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x0000003fU & ((0x0000001fU & ((0x0000000fU 
                                           & ((7U & 
                                               ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                   >> 0x0000001eU))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                        >> 0x0000001cU)))))) 
                                              + (7U 
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
                                                + (7U 
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
                                                                            >> 0x00000010U)))))))))) 
                          + (0x0000001fU & ((0x0000000fU 
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
                                                                            >> 8U)))))))) 
                                            + (0x0000000fU 
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
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)))))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((((((((2U & ((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex) 
                        << 1U)) | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                            >> 1U)))) 
                << 6U) | (((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                      >> 2U)) << 1U)) 
                           | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                       >> 3U)))) << 4U)) 
              | ((((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                              >> 4U)) << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 5U)))) 
                  << 2U) | ((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                       >> 6U)) << 1U)) 
                            | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                        >> 7U)))))) 
             << 0x00000018U) | ((((((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                               >> 8U)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                >> 9U)))) 
                                   << 6U) | (((2U & 
                                               ((~ 
                                                 (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                  >> 0x0000000aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000000bU)))) 
                                             << 4U)) 
                                 | ((((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                 >> 0x0000000cU)) 
                                             << 1U)) 
                                      | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                  >> 0x0000000dU)))) 
                                     << 2U) | ((2U 
                                                & ((~ 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000000eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x0000000fU)))))) 
                                << 0x00000010U)) | 
           (((((((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                            >> 0x00000010U)) << 1U)) 
                 | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                             >> 0x00000011U)))) << 6U) 
               | (((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                              >> 0x00000012U)) << 1U)) 
                   | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               >> 0x00000013U)))) << 4U)) 
              | ((((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                              >> 0x00000014U)) << 1U)) 
                   | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               >> 0x00000015U)))) << 2U) 
                 | ((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               >> 0x00000016U)) << 1U)) 
                    | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                >> 0x00000017U)))))) 
             << 8U) | (((((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                     >> 0x00000018U)) 
                                 << 1U)) | (1U & (~ 
                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                   >> 0x00000019U)))) 
                         << 6U) | (((2U & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                               >> 0x0000001aU)) 
                                           << 1U)) 
                                    | (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                >> 0x0000001bU)))) 
                                   << 4U)) | ((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                       >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                       >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                        >> 0x0000001fU))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
               >> 0x00000018U) == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                        << 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                          >> 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                    >> 0x00000010U));
    if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
            } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
        = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                  ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith)
                  : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex)));
    if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
        = (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                  ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword)
                  : (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex)))));
    if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex));
            } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex));
            } else if ((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex;
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
            ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed)
            : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret) 
               & (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__id_valid_q 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
           && (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               >> 0x0000001fU) & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                           >> 0x0000000fU) 
                                          & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                       >> 7U) 
                                                      & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                             << 1U) 
                                                            & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)), 
                                                       ((0x00000100U 
                                                         & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_38) 
              | ((0x24U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_hebeb780c_0_38) 
           | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
              | ((0x1bU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                 | ((0x1eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                    | ((0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                       | (0x1aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex)
            ? (~ ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                   << 0x00000010U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                      >> 0x00000010U)))
            : ((IData)(__VdfgRegularize_hebeb780c_0_39)
                ? (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex) 
           | (IData)(__VdfgRegularize_hebeb780c_0_39));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_37) 
              | ((0x27U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                 | ((0x37U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                    | ((0x35U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                       | (0x49U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex) 
           & (IData)(__VdfgRegularize_hebeb780c_0_37));
    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex)))));
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0x0eU;
                            } else {
                                if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0x0fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (0x00000050U 
                                              | (((8U 
                                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                                      << 3U)) 
                                                  | (2U 
                                                     & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                                        << 1U))) 
                                                 << 4U)));
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                        = ((0xf0U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                           | (4U | 
                                              ((8U 
                                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                                   << 3U)) 
                                               | (2U 
                                                  & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                                     << 1U)))));
                                }
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0x0cU;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:593: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 593, "");
                                    }
                                }
                            }
                            if ((0x3eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (((0x00000030U 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                           >> 0x00000014U)) 
                                       | ((0x0000000cU 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                              >> 0x0000000eU)) 
                                          | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                   >> 8U)))) 
                                      << 2U));
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xfcU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex));
                        } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0x0fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (0x00000040U | 
                                      (((8U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                               >> 0x0000000dU)) 
                                        | (2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                 >> 0x0000000fU))) 
                                       << 4U)));
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xf0U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (4U | ((8U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                   << 3U)) 
                                            | (2U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                << 1U)))));
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:653: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 653, "");
                                }
                            }
                        }
                        if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                    >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                  >> 0x12U)))) 
                                          << 2U));
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                   >> 0x0aU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                    >> 2U)))));
                            } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                    >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                  >> 0x11U)))) 
                                          << 2U));
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                    >> 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:535: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 535, "");
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 4U;
                        } else {
                            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                            }
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:633: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 633, "");
                                }
                            }
                        }
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                    } else {
                        if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 1U;
                        } else {
                            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                            }
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:613: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 613, "");
                                }
                            }
                        }
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                            if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex))
                                        ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex))
                                            ? 7U : 0x0bU)
                                        : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex))
                                            ? 0x0dU
                                            : 0x0eU));
                            } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex)))) 
                                          << 2U));
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:554: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_alu.sv", 554, "");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex
            : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))
                : ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 7U)))))))
            : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (1U 
                                                 & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                                    & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                        >> 0x0000001fU) 
                                                       ^ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
            | (0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex;
    } else if ((((0x30U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                 || (0x32U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) 
                || (0x37U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                 || (0x33U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) 
                || (0x35U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                >> 0x1fU) ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q) 
                          | (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o 
        = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
           & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q) 
           & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)
            ? vlSelfRef.__VdfgRegularize_hebeb780c_0_58
            : vlSelfRef.__VdfgRegularize_hebeb780c_0_57);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_49 = (0x0000ffffU 
                                                 & ((1U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                                                     >> 0x00000010U)
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_50 = (0x0000ffffU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                                     ? 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                                                     >> 0x00000010U)
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i 
        = (0x00000fffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
            ? (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)
            : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex)
                ? ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                    << 0x00000010U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                       >> 0x00000010U))
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                     | (0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))))))) {
        if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
            | (0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id 
              == vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                   ? ((0x00000080U 
                                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000018U)
                                           : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 8U)
                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                   : ((0x00000080U 
                                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000018U)
                                           : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 8U)
                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                               : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                                  >> 0x00000018U)) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                ? (
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
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                : (
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
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                            : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                                               >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                ((2U 
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
                                                 : 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? 
                                                 ((1U 
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
                                                     : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                  : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex)
            ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
               + vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = (0x0000001fU & ((0U != (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                           ? ((0U != (0x000000ffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                               ? ((0U != (0x0000000fU 
                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                   ? ((0U != (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                       ? (1U & (- (IData)(
                                                          (1U 
                                                           & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                       : ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 2U : 3U))
                                   : ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 4U)))
                                       ? ((0x00000010U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 4U : 5U)
                                       : ((0x00000040U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 6U : 7U)))
                               : ((0U != (0x0000000fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 8U)))
                                   ? ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 8U)))
                                       ? ((0x00000100U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 8U : 9U)
                                       : ((0x00000400U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0aU : 0x0bU))
                                   : ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000000cU)))
                                       ? ((0x00001000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0cU : 0x0dU)
                                       : ((0x00004000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0eU : 0x0fU))))
                           : ((0U != (0x000000ffU & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       >> 0x00000010U)))
                               ? ((0U != (0x0000000fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000010U)))
                                   ? ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000010U)))
                                       ? ((0x00010000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x10U : 0x11U)
                                       : ((0x00040000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x12U : 0x13U))
                                   : ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000014U)))
                                       ? ((0x00100000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x14U : 0x15U)
                                       : ((0x00400000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x16U : 0x17U)))
                               : ((0U != (0x0000000fU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000018U)))
                                   ? ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000018U)))
                                       ? ((0x01000000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x18U : 0x19U)
                                       : ((0x04000000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1aU : 0x1bU))
                                   : ((0U != (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000001cU)))
                                       ? ((0x10000000U 
                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1cU : 0x1dU)
                                       : (0x1eU | (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                  >> 0x0000001eU)))))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, (IData)(
                                                                 (0x00000003ffffffffULL 
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
                                                                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))))) 
                                    + (VL_EXTENDS_QI(33,32, (IData)(
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
                                                                                & VL_EXTENDS_QI(34,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)))))) 
                                       + VL_EXTENDS_QI(33,32, 
                                                       ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)
                                                         ? 
                                                        (VL_EXTENDS_II(32,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex))))))
                                                         : vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x00000003ffffffffULL & (VL_MULS_QQQ(34, 
                                                (0x00000003ffffffffULL 
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
                                                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))))) 
                                    + (VL_EXTENDS_QQ(34,33, 
                                                     (0x00000001ffffffffULL 
                                                      & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                                          ? 
                                                         (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex)))
                                                          : 
                                                         VL_EXTENDS_QI(33,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex)))) 
                                       + VL_EXTENDS_QI(34,32, 
                                                       ((- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))) 
                                                        & VL_SHIFTR_III(32,32,32, 
                                                                        ((IData)(1U) 
                                                                         << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex)), 1U))))));
    __VdfgRegularize_hebeb780c_0_5 = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))];
    __VdfgRegularize_hebeb780c_0_2 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U))))));
    __VdfgRegularize_hebeb780c_0_3 = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                         << 1U))];
    vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_h9a3b41c9_0_0] = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i] = 1U;
    vlSelfRef.__VdfgBinToOneHot_Pre_h9a3b41c9_0_0 = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i;
    if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)(((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                        | ((0x10U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                           | ((0x11U 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                              | (0x16U 
                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 0U;
    if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 1U;
        } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 1U;
        } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 1U;
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex))
                           ? ((0U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                               ? 1U : ((1U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                                 ? 4U
                                                 : 8U)))
                           : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex))
                               ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex)
                                   ? 1U : ((0U == (3U 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                             ? 6U : 
                                            ((2U == 
                                              (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                              ? 0x0cU
                                              : 8U))))
                               : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex)
                                   ? ((1U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                       ? 1U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                                ? 3U
                                                : (7U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int)))))))
                                   : (((1U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 0x0eU : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int))
                                                    ? 0x0cU
                                                    : 8U)) 
                                      | (- (IData)(
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int)))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_reg_offset_ex)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex)
            ? (0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                           ? (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = (0x0000003fU & ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   (0x0000001fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                                    : 0x20U)
                                                   : 
                                                  ((0U 
                                                    != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)
                                                    : 0x20U))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x1fU)
                                                     ? 0x1fU
                                                     : 0U))
                                                   : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
                    }
                }
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI 
        = (0x0000003fU & ((1U & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI)))))) 
                          + ((0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                 - (IData)(1U)) : 0x1fU)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_shift_ex)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x00000003ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                  (((QData)((IData)(
                                                                    ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                     & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                                                         ? (IData)(
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000021U))
                                                                         : (IData)(
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                        & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                                                            ? (IData)(
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000020U))
                                                                            : (IData)(
                                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), 
                                                  ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                                    ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                                    : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex))));
    __VdfgRegularize_hebeb780c_0_22 = ((0x00000080U 
                                        & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? __VdfgRegularize_hebeb780c_0_2
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                    ? __VdfgRegularize_hebeb780c_0_2
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                     ? __VdfgRegularize_hebeb780c_0_2
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                      ? __VdfgRegularize_hebeb780c_0_2
                                                      : 
                                                     (__VdfgRegularize_hebeb780c_0_2 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                >> 6U)))))))
                                        : ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                ? __VdfgRegularize_hebeb780c_0_3
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                    ? __VdfgRegularize_hebeb780c_0_3
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                     ? __VdfgRegularize_hebeb780c_0_3
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                                      ? __VdfgRegularize_hebeb780c_0_3
                                                      : 
                                                     (__VdfgRegularize_hebeb780c_0_3 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                >> 6U))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2819U]);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2818U]);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2816U]);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[803U] 
              | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[804U] 
                 | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[805U] 
                    | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[806U] 
                       | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[807U] 
                          | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[808U] 
                             | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[809U] 
                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[810U] 
                                   | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[811U] 
                                      | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[812U] 
                                         | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[813U] 
                                            | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[814U] 
                                               | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[815U] 
                                                  | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[816U] 
                                                     | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[817U] 
                                                        | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[818U] 
                                                           | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[819U] 
                                                              | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[820U] 
                                                                 | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[821U] 
                                                                    | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[822U] 
                                                                       | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[823U] 
                                                                          | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[824U] 
                                                                             | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[825U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[826U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[827U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[828U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[829U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[830U] 
                                                                                | vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[831U])))))))))))))))))))))))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex))
                ? ((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex) 
                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                   | vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we) 
               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[772U])
               ? (0xffff0888U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata)
               : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex) 
           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
              >> 3U));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                    << 0x00000018U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                                       >> 8U)) : ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                    << 8U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex 
                              >> 0x00000018U)) : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI)
            ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI)
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result = 0U;
    if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))) {
        if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result 
                    = (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result 
                = ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))
                    ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)
                        ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex)
                            ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex))
                            : ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex) 
                               | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex 
                       + (VL_EXTENDS_II(32,18, (0x0003ffffU 
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
                          + (VL_EXTENDS_II(32,18, (0x0003ffffU 
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
                                                                                >> 0x00000018U))))))))))));
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result 
            = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))
                ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex 
                   + ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                       & (- (IData)((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))))) 
                      + VL_MULS_III(32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex, 
                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                                     ^ (- (IData)((1U 
                                                   == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))))))));
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o 
        = ((0x00000800U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
            ? ((0x00000400U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                ? ((0x00000200U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))))))
                    : (__VdfgRegularize_hebeb780c_0_22 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
                : (__VdfgRegularize_hebeb780c_0_22 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                ? (((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                             ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                          : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                              ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))))))
                              : ((0x28001040U | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                 << 2U)) 
                                 & (- (IData)((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))))) 
                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))))))
                                       : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                           ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                            ? ((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                ? __VdfgRegularize_hebeb780c_0_5
                                : ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? __VdfgRegularize_hebeb780c_0_5
                                    : ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? __VdfgRegularize_hebeb780c_0_5
                                        : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? (__VdfgRegularize_hebeb780c_0_5 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))
                                            : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? (((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                 >> 8U)))))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex))
                ? ((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex) 
                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o)
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                   | vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o))
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2947U]));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2946U]));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__)) 
              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2944U]));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o 
        = (0x0000001fU & (((0x40000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o 
        = ((0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual) 
           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
              & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 5U)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex
                                                  : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((0x0000003eU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x00000019U)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
              >> 0x00000014U));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
        [(0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex)
                ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex))
                : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                    << 0x00000018U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                        << 0x00000010U) 
                                       | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                           << 8U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex)))))
            : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                   + ((- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                  | ((0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                     | (0x1eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))) 
                      & VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U)))
                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex));
    if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((((0x26U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                         ? (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                         : (((QData)((IData)((- (IData)(
                                                        ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                          >> 0x0000001fU) 
                                                         & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic)))))) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))) 
                       >> (0x0000001fU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q;
    if (((((((((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                        if ((0x0304U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((0x0340U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)) 
                        | (2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                       | (3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                      | (0x0300U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                     | (0x0304U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                    | (0x0305U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                   | (0x0340U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) 
                  | (0x0341U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)))))) {
        if ((0x0342U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x07b0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x07b1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x07b2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x07b3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                    if ((0x07b2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i)), 5U)), vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[800U])
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI 
        = ((((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = (((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
            & ((0x2aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex
                : (- (IData)(((0x28U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))))))) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                    = ((0U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                        ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                        : ((1U == (3U 
                                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                            ? (((((
                                                   ((0x0000000cU 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
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
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                                ? (
                                                   (((0x00000e00U 
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
                                                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
            if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                    if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                        ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                            ? (- vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D));
            }
        } else if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                            ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               ^ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
                            : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               | vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex))
                        : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)))
                    : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                            ? ((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)
                            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                        ? ((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                            ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
                               & (- (IData)((1U & (~ 
                                                   ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                     >> 0x0000001fU) 
                                                    | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))))))
                            : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                   >> 0x00000024U))
                                ? (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
                                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))
                        : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                            ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
                            : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex)
                                ? ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))
                                : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
        if ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                          >> 1U)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result) 
                       | (((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                          >> 3U)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                           >> 2U)))))) 
                          << 0x00000010U));
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result) 
                       | ((0x0000ff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                          (0x000000ffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result) 
                   | (((0x0000ff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                   >> 2U)))))) 
                      << 0x00000010U));
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result) 
                   | ((0x0000ff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                     >> 3U));
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result) 
               | (((0x0000ff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 3U)))) 
                                   << 8U)) | (0x000000ffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                               >> 2U)))))) 
                  << 0x00000010U));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result) 
               | ((0x0000ff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0x000000ffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw = 0U;
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o;
    }
}

void Vtb_pim_core___024root___nba_sequent__TOP__4(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_sequent__TOP__4\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_pim_core__DOT__rst_ni) {
        if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q 
                = (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q 
                   * vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q);
        }
        if ((1U & (~ (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i)) 
                      & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int)))))) {
            if (((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q))) {
                vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q 
                    = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array
                    [vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr];
            }
        }
        if ((((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
              & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q)) 
             & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q)))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q 
                = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array
                [vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_reg];
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0) {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0] 
            = ((0xffffff00U & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array
                [vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0));
    }
    if (vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1) {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array
                [vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2) {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array
                [vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3) {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3] 
            = ((0x00ffffffU & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array
                [vlSelfRef.__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3) 
                  << 0x00000018U));
    }
}

void Vtb_pim_core___024root___nba_sequent__TOP__5(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_sequent__TOP__5\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pim_core__DOT__data_rdata = 0U;
    if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg))) {
        vlSelfRef.tb_pim_core__DOT__data_rdata = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int;
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg))) {
        vlSelfRef.tb_pim_core__DOT__data_rdata = 0xdeadbeefU;
    }
    if (vlSelfRef.tb_pim_core__DOT__rst_ni) {
        if (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg)) 
             & (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i))) {
            if (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int) {
                vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q = 1U;
                vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o;
            } else {
                vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q = 0U;
                vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q = 0U;
            }
            if (((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int) 
                 & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o)))) {
                vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_reg 
                    = (0x0007ffffU & ((0x00080000U 
                                       & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum)
                                       ? ((0x00000020U 
                                           & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2)
                                           ? 0U : 0x0007ffffU)
                                       : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum));
            }
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q = 0U;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_reg = 0U;
    }
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg 
        = vlSelfRef.__Vdly__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg;
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtb_pim_core__ConstPool__TABLE_h76c253c8_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_pim_core__ConstPool__TABLE_h24c6f5fc_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_pim_core__ConstPool__TABLE_h00098a28_0;

void Vtb_pim_core___024root___nba_comb__TOP__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_comb__TOP__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSelfRef.tb_pim_core__DOT__instr_rdata
            : (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                           << 5U))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int = 0U;
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_req = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q)))) {
        if ((1U == ((0x20000000U == (0xfff00000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i))
                     ? 1U : 2U))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i;
        }
        if ((1U != ((0x20000000U == (0xfff00000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i))
                     ? 1U : 2U))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_req 
                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i;
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
            ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((((- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                          >> 7U)))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                           << 8U)) 
                                       | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000018U)))
                : ((((- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((vlSelfRef.tb_pim_core__DOT__data_rdata 
                                    >> 0x0000001fU))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                       >> 0x00000010U)))
            : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((((- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                          >> 0x00000017U)))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                          >> 8U))) : 
               (((((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                     >> 0x0000000fU)))) 
                   | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                  & (- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                 << 0x00000010U) | (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__data_rdata))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata
                : ((0xffff0000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x10U)));
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q) 
              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i 
        = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
                 | ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                     >> 2U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o))));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int) 
           & (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state)));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next 
        = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state;
    if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state))) {
        if (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg))) {
            vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next = 2U;
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next = 0U;
    }
    __Vtableidx4 = (((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_req) 
                     << 2U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_state));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_next 
        = Vtb_pim_core__ConstPool__TABLE_h76c253c8_0
        [__Vtableidx4];
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_gnt 
        = Vtb_pim_core__ConstPool__TABLE_h24c6f5fc_0
        [__Vtableidx4];
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_rvalid 
        = Vtb_pim_core__ConstPool__TABLE_h00098a28_0
        [__Vtableidx4];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((vlSelfRef.tb_pim_core__DOT__data_rdata 
                                        >> 0x0000001fU))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                  >> 0x00000018U)) : 
                   ((((- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                      & ((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                           >> 0x00000017U)))) 
                         | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                     << 8U) | (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                              >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                              >> 0x0000000fU)))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                                 >> 8U)))
                    : (((((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__data_rdata 
                                            >> 7U)))) 
                          | (- (IData)((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                         & (- (IData)((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                        << 8U) | (0x000000ffU & vlSelfRef.tb_pim_core__DOT__data_rdata))))
            : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_h_ext
                : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.tb_pim_core__DOT__data_rdata 
                            << 8U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x00000018U))
                        : ((vlSelfRef.tb_pim_core__DOT__data_rdata 
                            << 0x00000010U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.tb_pim_core__DOT__data_rdata 
                            << 0x00000018U) | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 8U))
                        : vlSelfRef.tb_pim_core__DOT__data_rdata))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                               << 2U) | (((1U == (3U 
                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)))))))) {
        if ((0U != (((2U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                     << 2U) | (((1U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                                << 1U) | (0U == (3U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_compressed_decoder.sv:52: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.if_stage_i.compressed_decoder_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_compressed_decoder.sv", 52, "");
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 5U)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                        if ((0x00000400U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                            if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00000400U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                    if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                  >> 0x0cU)))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                                ? ((0x00000020U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)))))
                                : ((0x00000020U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))));
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))));
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                        : ((0U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 2U)))
                            ? (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0U == ((0x00000020U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((2U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                          << 0x00000012U))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 7U))) ? 
                               (0x37U | (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 0x0cU)))) 
                                          << 0x00000011U) 
                                         | ((0x0001f000U 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x0000000aU)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                                : (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                            >> 0x0cU)))) 
                                             << 0x00000011U) 
                                            | ((0x0001f000U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x0000000aU)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                        ? (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x6fU | (((((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)))));
        }
    } else if ((2U == (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 8U))))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 8U)))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                        : (((0U == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 2U))) 
                            | (0U == (0x0000001fU & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)))) ? 
                           (0x00001013U | ((0x01f00000U 
                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x00000012U)) 
                                           | ((0x000f8000U 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 8U)) 
                                              | (0x00000f80U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00001013U | ((0x01f00000U 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x00000012U)) 
                                              | ((0x000f8000U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000f80U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned;
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 3U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux = 3U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator = 2U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim = 0U;
    if ((0x00000040U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
        if ((0x00000020U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            if ((0x00000010U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U))))) {
                                if ((0U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x14U))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                } else if ((1U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec = 1U;
                                } else if ((0x0302U 
                                            == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec = 1U;
                                } else if ((2U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec = 1U;
                                } else if ((0x07b2U 
                                            == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec 
                                        = (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec 
                                        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec = 1U;
                                } else if ((0x0105U 
                                            == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                                    }
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((0x0105U 
                                                             == 
                                                             (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                              >> 0x14U)) 
                                                            << 5U) 
                                                           | (((0x07b2U 
                                                                == 
                                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x14U)) 
                                                               << 4U) 
                                                              | ((2U 
                                                                  == 
                                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 3U))) 
                                                          | (((0x0302U 
                                                               == 
                                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x14U)) 
                                                              << 2U) 
                                                             | (((1U 
                                                                  == 
                                                                  (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   == 
                                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                    >> 0x14U))))))))) {
                                    if ((0U != ((((0x0105U 
                                                   == 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                  << 5U) 
                                                 | (((0x07b2U 
                                                      == 
                                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                       >> 0x14U)) 
                                                     << 4U) 
                                                    | ((2U 
                                                        == 
                                                        (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 3U))) 
                                                | (((0x0302U 
                                                     == 
                                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x14U))))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2725: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                                         , '#',12,
                                                         (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                          >> 0x14U));
                                            VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_decoder.sv", 2725, "");
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
                            }
                            if ((1U == (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2796: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,
                                                     (3U 
                                                      & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_decoder.sv", 2796, "");
                                    }
                                }
                            }
                            if ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x08000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x04000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x20000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                                    } else {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x10000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                            } else {
                                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec 
                                = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        } else {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 2U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        if ((0U != (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 3U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 2U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                    if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                    ? 0x0bU : 1U) : 
                               ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                 ? 0x0aU : 0U));
                    } else if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                ? 0x0dU : 0x0cU);
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
        if ((0x00000010U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            if ((8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((3U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                >> 0x1eU))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((2U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x1eU))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        if ((1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x1cU)))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                        }
                        if ((0x40000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0x20000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x02000000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00004000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                } else if ((0x00001000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00001000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x19U;
                            }
                        } else if ((0x20000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x10000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x08000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x04000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x02000000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                            if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x32U;
                                    } else {
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x33U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x30U;
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x31U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator = 6U;
                                } else {
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode = 1U;
                                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator = 6U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux = 3U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode = 3U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator = 6U;
                            } else {
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator = 0U;
                                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux = 3U;
                            }
                        } else {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                    ? ((0x00002000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                            ? 0x15U
                                            : 0x2eU)
                                        : ((0x00001000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                            ? 0x25U
                                            : 0x2fU))
                                    : ((0x00002000U 
                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                            ? 3U : 2U)
                                        : ((0x00001000U 
                                            & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                            ? 0x27U
                                            : 0x18U)));
                        }
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                if ((1U & (~ VL_ONEHOT_I((((2U == (7U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (7U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if ((0U != (((2U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                 << 2U) | (((1U == 
                                             (7U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x0cU))))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:384: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(7U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)));
                            VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_decoder.sv", 384, "");
                        }
                    }
                }
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id = 1U;
                if ((0U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 2U;
                } else if ((1U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 1U;
                } else if ((2U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id = 0U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
        if ((8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                                ? 0x15U : 0x2eU);
                    } else if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        if ((0U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x19U))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x25U;
                        } else if ((0x20U == (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x19U))) {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                        } else {
                            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x2fU;
                    }
                } else if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator 
                        = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                            ? 3U : 2U);
                } else if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x27U;
                    if ((0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                >> 0x19U))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((8U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
        if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2704: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,
                                             (7U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0cU)));
                                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_decoder.sv", 2704, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((4U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    } else if ((2U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
        if ((1U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = 0x18U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id 
                = (1U & (~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                            >> 0x0eU)));
            if ((0x00004000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id = 1U;
                        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim = 1U;
                    }
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id 
                        = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                            ? 1U : 2U);
                }
            } else if ((0x00002000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                if ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id = 1U;
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim = 1U;
                } else {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = 0U;
                }
            } else {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id 
                    = ((0x00001000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)
                        ? 1U : 2U);
            }
        } else {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__illegal_c_insn_id) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int 
        = (1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i)
                     ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex)
                     : (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__we_reg))));
    if (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i) {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int 
            = (0x0007ffffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
                              >> 2U));
    } else {
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int 
            = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__be_reg;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int 
            = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__wdata_reg;
        vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int 
            = (0x0007ffffU & vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__addr_reg);
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q)) 
           & ((1U == ((0x20000000U == (0xfff00000U 
                                       & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i))
                       ? 1U : 2U)) ? (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i)
               : (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_gnt)));
    vlSelfRef.tb_pim_core__DOT__data_rvalid = 0U;
    if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg))) {
        vlSelfRef.tb_pim_core__DOT__data_rvalid = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int;
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg))) {
        vlSelfRef.tb_pim_core__DOT__data_rvalid = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_rvalid;
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)))))))) {
        if ((0U == (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:617: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.immediate_a_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_id_stage.sv", 617, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:617: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.immediate_a_mux", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_id_stage.sv", 617, "");
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x00000018U)))) 
                            << 5U) | (0x0000001fU & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000014U)))
                        : vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? VL_SHIFTR_III(32,32,32, (
                                                   ((IData)(1U) 
                                                    << 
                                                    (0x0000001fU 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 0x00000014U))) 
                                                   - (IData)(1U)), 1U)
                        : ((0x00010000U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 4U)) 
                           | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x00000019U))))))
            : ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((((- (IData)((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000018U)))) 
                         & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel)))))) 
                        << 6U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6))
                    : (0x0000001fU & ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                       ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000019U)
                                       : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                          >> 0x00000014U))))
                : ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_compressed_id)
                            ? 2U : 4U) : (0xfffff000U 
                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id))
                    : (((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | (0x00000fffU 
                                           & ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                               ? ((0x00000fe0U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 7U)))
                                               : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U)))))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                               << 2U) | (((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                          << 1U) | 
                                         (1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                     << 2U) | (((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                << 1U) | (1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:581: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"tb_pim_core.u_core.id_stage_i.jump_target_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel));
                VL_STOP_MT("../../rtl/include/../../rtl/cv32e40p_id_stage.sv", 581, "");
            }
        }
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__jump_target_id_i 
        = ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id 
               + (((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                               >> 0x0000001fU))) << 0x00000014U) 
                  | ((((0x000001feU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000000bU)) 
                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                >> 0x00000014U))) << 0x0000000bU) 
                     | (0x000007feU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000014U)))))
            : ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id 
                   + (((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 7U))))))
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
                   + vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i 
        = ((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux))
            ? (0x0000001fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                               >> 0x0000000fU) & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux)))))))
            : (0x0000001fU & ((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux))
                               ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                  >> 7U) : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x0000001bU))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
               == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr 
        = ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg))
            ? vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int
            : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_reg);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid) 
           | (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o 
        = ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
              | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex) 
                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i)) 
                 | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)
                      ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i 
        = (1U & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex)) 
                 | ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
                     : ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid) 
                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up))
                         : (IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i));
}
