// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pim_core.h for the primary calling header

#include "Vtb_pim_core__pch.h"

VL_ATTR_COLD void Vtb_pim_core___024root___eval_static__TOP(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___timing_ready(Vtb_pim_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_pim_core___024root___eval_static(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_static\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pim_core___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000800ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000001000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
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
    Vtb_pim_core___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_pim_core___024root___eval_static__TOP(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_static__TOP\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgBinToOneHot_Pre_h9a3b41c9_0_0 = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0.fill(0U);
}

VL_ATTR_COLD void Vtb_pim_core___024root___eval_initial__TOP(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_initial__TOP\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_a_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_b_id = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0x0000000fU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[10U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[11U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[12U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[13U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[14U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[15U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[16U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[17U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[18U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[19U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[20U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[21U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[22U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[23U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[24U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[25U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[26U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[27U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[28U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[29U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[30U] = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[31U] = 0U;
    vlSelfRef.tb_pim_core__DOT__clk_i = 0U;
    VL_READMEM_N(true, 32, 16384, 0, "pim_test.hex"s
                 ,  &(vlSelfRef.tb_pim_core__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.tb_pim_core__DOT__instr_rvalid = 0U;
    vlSelfRef.tb_pim_core__DOT__instr_rdata = 0U;
    vlSymsp->_vm_contextp__->dumpfile("pim_waves.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vtb_pim_core___024root___eval_final(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_final\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pim_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_pim_core___024root___eval_phase__stl(Vtb_pim_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_pim_core___024root___eval_settle(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_settle\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_pim_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_pim_core.sv", 23, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_pim_core___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_pim_core___024root___eval_triggers_vec__stl(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_triggers_vec__stl\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i__0)) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i__0 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vtb_pim_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pim_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_pim_core___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_pim_core.u_core.id_stage_i.controller_i.ctrl_transfer_insn_in_id_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_pim_core.u_core.if_stage_i.id_ready_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] tb_pim_core.u_core.ex_stage_i.mult_i.ex_ready_i)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_pim_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 512> Vtb_pim_core__ConstPool__TABLE_h26b33901_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtb_pim_core__ConstPool__TABLE_h76c253c8_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_pim_core__ConstPool__TABLE_h24c6f5fc_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtb_pim_core__ConstPool__TABLE_h00098a28_0;

VL_ATTR_COLD void Vtb_pim_core___024root___stl_sequent__TOP__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___stl_sequent__TOP__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
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
    // Body
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__255__03a192__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__191__03a128__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__63__03a0__KET__ 
        = (1ULL + (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((0x0000003eU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x00000013U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x00000019U)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSelfRef.tb_pim_core__DOT__instr_rdata
            : (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                           << 5U))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
              >> 0x00000014U));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
        = vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
        [(0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
           == ((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex) 
               & (- (IData)((0x17U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))))));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    vlSelfRef.tb_pim_core__DOT__data_rdata = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    if ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex));
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex));
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex;
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 1U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else {
            if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 1U;
            } else if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle = 1U;
            }
            if ((2U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                }
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_56 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_53 = (1U 
                                                 & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                       >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_54 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex) 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                    >> 0x0000001fU));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active = 1U;
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))) 
           << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI 
        = ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
            >> 0x0000001fU) & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = (1U 
                                                 & (~ (IData)(
                                                              (4U 
                                                               == 
                                                               (0x00000804U 
                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q)))));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i 
        = ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex)) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex));
    __Vtableidx2 = (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vtb_pim_core__ConstPool__TABLE_h26b33901_0
        [__Vtableidx2];
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
    __VdfgRegularize_hebeb780c_0_38 = ((0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                       | (0x18U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_16 = ((0x1dU 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                                 | (0x1cU 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)));
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
    __VdfgRegularize_hebeb780c_0_39 = ((0x19U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                       | ((0x1dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                          | ((0x1bU 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                             | (0x1fU 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex)))) {
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i 
        = (0x00000fffU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex)))));
    __VdfgRegularize_hebeb780c_0_37 = ((0x31U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                       | ((0x30U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex)
            ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
               + vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex);
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id 
              == vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
    if ((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg))) {
        vlSelfRef.tb_pim_core__DOT__data_rdata = vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int;
    } else if ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg))) {
        vlSelfRef.tb_pim_core__DOT__data_rdata = 0xdeadbeefU;
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_58 = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_53) 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_57 = (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex 
                                                    >> 0x00000010U));
    if (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex))));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (1U 
                                                 & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                                    & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex 
                                                        >> 0x0000001fU) 
                                                       ^ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI))));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
            | (0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q) 
              | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i)));
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i 
        = (1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
                 | ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                     >> 2U) | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o))));
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
    if ((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__clk_i)))) {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en;
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
    vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int) 
           & (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state)));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI)
            ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI)
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex);
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o 
        = ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
              | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex) 
                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i)) 
                 | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i)))));
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

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hf40be3a8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h21c33103_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hb631a9a4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h03efe2d9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h9d404c63_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h4f689d40_0;

VL_ATTR_COLD void Vtb_pim_core___024root___stl_comb__TOP__0(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___stl_comb__TOP__0\n"); );
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
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x0000003fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI));
    } else {
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
        vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
            = (0x0000003fU & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))
                               ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                  - (IData)(1U)) : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)));
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

VL_ATTR_COLD void Vtb_pim_core___024root____Vm_traceActivitySetAll(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_comb__TOP__4(Vtb_pim_core___024root* vlSelf);

VL_ATTR_COLD void Vtb_pim_core___024root___eval_stl(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_stl\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vtb_pim_core___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_pim_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_pim_core___024root___stl_comb__TOP__0(vlSelf);
        Vtb_pim_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vtb_pim_core___024root___nba_comb__TOP__4(vlSelf);
        Vtb_pim_core___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_pim_core___024root___eval_phase__stl(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_phase__stl\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_pim_core___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pim_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_pim_core___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_pim_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_pim_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pim_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_pim_core___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] tb_pim_core.u_core.id_stage_i.controller_i.ctrl_transfer_insn_in_id_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] tb_pim_core.u_core.if_stage_i.id_ready_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] tb_pim_core.u_core.ex_stage_i.mult_i.ex_ready_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge tb_pim_core.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_pim_core.data_rdata)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_pim_core.data_rvalid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_pim_core.u_core.alu_operand_a_ex)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_pim_core.u_core.ex_stage_i.data_req_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_pim_core.u_core.id_stage_i.controller_i.pim_cmd_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( tb_pim_core.u_core.id_stage_i.controller_i.pim_imm1_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( tb_pim_core.u_core.id_stage_i.controller_i.pim_imm2_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( tb_pim_core.u_core.load_store_unit_i.data_obi_i.trans_addr_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( tb_pim_core.u_core.load_store_unit_i.data_obi_i.trans_ready_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(negedge tb_pim_core.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge tb_pim_core.u_core.if_stage_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(negedge tb_pim_core.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge tb_pim_core.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_pim_core___024root____Vm_traceActivitySetAll(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root____Vm_traceActivitySetAll\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[10U] = 1U;
    vlSelfRef.__Vm_traceActivity[11U] = 1U;
}

VL_ATTR_COLD void Vtb_pim_core___024root___ctor_var_reset(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___ctor_var_reset\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_pim_core__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17196796276893760560ull);
    vlSelf->tb_pim_core__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8988361984859911867ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_pim_core__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16499542889509237791ull);
    }
    vlSelf->tb_pim_core__DOT__instr_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15314181747417504285ull);
    vlSelf->tb_pim_core__DOT__instr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14792520413015297772ull);
    vlSelf->tb_pim_core__DOT__data_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16129880194302950036ull);
    vlSelf->tb_pim_core__DOT__data_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1972713512685037354ull);
    vlSelf->tb_pim_core__DOT__irq_ack_unused = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15609081240835206783ull);
    vlSelf->tb_pim_core__DOT__irq_id_unused = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8002610847494432599ull);
    vlSelf->tb_pim_core__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11514490639226965088ull);
    vlSelf->tb_pim_core__DOT__result_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12499355993364724505ull);
    vlSelf->tb_pim_core__DOT__result_mul = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16800697043199448443ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__instr_valid_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14266061074525788278ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11328756041177993019ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116341300569460866ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944161344050321627ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4487477994480134727ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3759015254577313930ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__pc_mux_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7694793175425188042ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3168122667369049843ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__exc_cause = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13643724192719450088ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__trap_addr_mux = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7890481739293471217ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16154532244349042317ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__is_decoding = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14956425998821508551ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__useincr_addr_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11325363174889824723ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_multicycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7214189509440177393ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__branch_in_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18119269276759080786ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2852923114108203460ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__pc_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17904678417838675033ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10349845111920067106ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_operator_ex = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13630053559461218ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13705368931371973240ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2332331944066642521ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 884915891634122345ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__bmask_a_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10188483398452862883ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__bmask_b_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9499217585130196019ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1158813010441968277ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 854681000831551299ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4799183293621844041ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4801479144528452567ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11217095377916348968ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_operator_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4970093015069214719ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8216742146285038856ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6117213450081735217ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11333578927712076549ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912520263443863361ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17860736958447618843ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9579220887298648499ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_imm_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5217724063590073895ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10089546546992503408ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 971473888398560309ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11015636582059063806ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4513594232778153616ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5604569435094845176ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1474563410288101960ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8911233830464199229ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__apu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6245003156948416681ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__apu_flags_ex = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 18297293702445030926ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__apu_op_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7358464317663709517ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__apu_lat_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13920384642242384873ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->tb_pim_core__DOT__u_core__DOT__apu_operands_ex, __VscopeHash, 16637518797932622629ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__apu_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 566134570964321511ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15347687354008172981ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__regfile_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6509245302648211638ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18122612018683105994ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3575965678222885906ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1348624323576772452ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_access_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13155762714675626020ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_op_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6196430314560807569ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7232388573381655303ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_atop_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1735518171395747755ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_type_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9287372812651692927ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_sign_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8029034945539901039ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_reg_offset_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7599092799384704188ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_req_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2616203944264174377ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_load_event_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3075023295830558253ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__data_misaligned_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9962899221066206618ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__instr_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11278606164207821457ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_irq_sec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10219614853201900855ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_save_cause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15512391395258020155ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_save_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13104145640164654479ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_save_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2890844243693987351ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_cause = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11360312021536551536ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18224411643186558918ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_restore_uret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 727657813425770175ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6233944600616081513ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__debug_cause = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18117312180739015805ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__debug_csr_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3304113448643726338ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11860701613219976379ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1474936286226964286ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6958699279643481896ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9385306380263177313ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15283458347071844536ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8125711277182002828ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13308808795462072355ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8339100197794025786ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_imiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673291349308157354ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10346079337518800479ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__mhpmevent_pipe_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13598668276915598186ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15705272705540283553ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6619924064462639750ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 253968996825241882ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9838082686662744349ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__p_elw_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598149929348990842ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14973817925653641866ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10905925573212323633ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16850743461330611989ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6759653981159400869ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3013290615540697065ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clear_instr_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1745453279270478125ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7677464638709097281ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__jump_target_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11795342651643133729ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3092395999236615772ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11607352678998324937ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15318483909978042442ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1190821939769021015ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6811779545558307046ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16293864472368817573ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6860181766537510002ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2652473489728683110ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17034920935671712040ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6108738160845471734ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16657721825523256439ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 674969730583238878ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13767162692416688369ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11271670506484309351ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4779518133849485938ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12052629805240444940ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17724879206519470110ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3170073243077946842ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10102891644082509020ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4198659099628977333ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14606952487167821800ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6731991095755258399ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823737662103944155ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3942328150905777410ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17691162724261268408ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8468022457126522038ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6189864814321544134ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10228748255993461174ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4964853749550087944ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 148008975396221342ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9131617657104742215ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10215520615161004788ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14772624973231544ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15840418156108056705ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7018222222924592699ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1557412214935257242ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8355903053688135612ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2394782991753693134ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10545540456119656323ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16034098403541816728ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9799919515983501469ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5958704859004979503ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15201836164724459317ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6931899579251559906ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1783248570227748234ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10059593856335319966ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8077613182113432459ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18276121137829999422ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6112731621561523211ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16061240786222667215ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12112745187862258274ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10936549807691077261ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 661074492715621754ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16372052473727184030ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16712081088099590159ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13703284221868178346ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9994107713048308810ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234594944169932811ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17827842090489114011ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14886389973262152880ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11708436978062378138ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13452124158811020863ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13935395776249049986ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__hwlp_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11789737446884615805ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 429839732048318491ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11295468911951119454ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15686765479437122230ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3009786930378003214ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11873563953049416207ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5031436121868978321ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10279019455045797046ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17326421283424167028ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10521188770852553462ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17535989247931448591ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5577914717229531871ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13382266654402433588ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3576691888056375566ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9281836596564604736ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7120212439162514139ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12340350427795599438ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13668506505952817095ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 178905845229450939ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18275418418557501642ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3057569463179061013ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6222278014410569581ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12390392909459652035ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15591602449594563524ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18080960974545469202ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15871408077554335228ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13536952422344314720ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5563385300049830829ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4563755423913718828ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_a_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8350180263915649239ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_b_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8510134686352163000ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14552632913333785574ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10970475563477534404ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3878530490599241521ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__id_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4226817013688106479ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9310667686149650733ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14552756687336856836ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6208901795869884141ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5543675050866239925ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9879733851186731380ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2539427120259000677ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem, __VscopeHash, 8107022527407274328ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638539849533631600ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1681896631897220405ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 854863967612481507ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6454768150186448161ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13407332186346509611ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18361076127349583440ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3078002450047173779ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7148494235818069544ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5544712771527667335ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12012394622295256363ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12687005750713268536ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4578436728785517839ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2974244090599718133ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3627084662444772163ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16905066595140178732ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13176407563352116720ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15213560092595296775ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6298039739772824844ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12089607228976477126ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2120599249849836875ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9485482756808396580ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14941105573596359423ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17155202973073415793ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8850062226554670853ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3799764297770346452ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2540262826876713799ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17634078245061273117ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8983877889603502784ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 507184304114630068ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15959834442747430334ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14965488982858317456ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15973382402944198702ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17615509632453795682ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17459098431446927143ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10308520845942944203ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16301520519623580482ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8269270959168188201ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10492970008260228881ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5080200077070601517ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8189335057123716795ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 765615623072419615ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6773610245388769729ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14083515109215067655ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10268456994957001133ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14996914761609333604ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6595966678877617284ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2007383865064820918ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16934277087299182876ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13157196546943927472ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14943609012001847ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4086058569968696264ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7063733758743617392ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1055332071713877013ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13079782135654198499ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8257306164837174755ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17766124614591475172ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15855199889818251407ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__ex_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5343901860924584021ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12349589474565472156ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13568459985826509467ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3739616695345443467ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11349891207990494076ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14787284790753486188ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15271494519519892759ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__apu_rvalid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9773579179967011417ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__apu_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18066922882812604123ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__apu_flags_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13262255974593404043ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4718808770321823343ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17808867869206403157ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13733600238820906214ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15733233155604538097ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16344772672282812230ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9448029449160296908ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4819126326084667695ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 44840263025211749ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16208224941007577553ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 1451941444950062998ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13800447562687880804ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7544420601748030907ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12769547802102173315ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12511867284312987525ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7371127503368716860ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 912441013046476210ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15535168400471886991ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8975105753455683015ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16321459048228427979ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3428534892622319822ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4943673781780290436ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 864574628640386489ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5996161130533934619ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5704863921854865762ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7826510901824410602ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10569702135777965506ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10535148683853049924ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5186907263534357156ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3881433983372046862ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2572267829197348534ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7031634161809486674ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8028706027869777371ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11572654960068060458ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15046105601099453282ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9986185150157782313ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6427177475861940125ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10132261493289186248ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10797081909255200627ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7973398077620919815ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2335099238324055721ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17907730482170874343ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2491155353192082760ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16994786363858875304ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1197678413608580178ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__BRA__159__03a155__KET__ = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8020722053068962452ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15186499108140528299ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9698657962945796919ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17040205864426830300ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11566918363497766193ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6329646054656597353ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16630176147663208199ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4562446897981480995ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7624590822841937074ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2623953968209320280ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13453136425978651836ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3937174655453353969ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 153723290735483225ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14525844916929600501ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12830267646858627326ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11308229404476926191ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8279700864845737016ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14969148401952119696ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1858096169769793569ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14884034396962422492ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14667694940073559814ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2465910791337861480ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17558193058452756869ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5344852227793823293ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12138191780398046754ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14066714109876829856ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251294424215472321ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 962033395389073225ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10309836128281171680ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16710962820765005278ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17498136854089522792ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17067678154556770558ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8287519912280146347ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12512092468819940503ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 144493142052739779ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17276037743646904799ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12327660022390285292ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11388662880270375367ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1771049957574589007ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1756411638910075374ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5765678497064724192ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12776366005733928787ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1863006406369355310ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4423545727731952042ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2242512513593621641ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7927207577325608103ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10027349921989840885ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16781525732803370703ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 44200887851930927ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3391551683696131997ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7200598220756908616ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6266619055471537023ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7435540789868773441ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5575240061455596944ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15594372973420498282ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5723426150079550905ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10135818254768212682ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3845162986777350217ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16781200870711860572ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10775075906412977797ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15870388849086747106ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6124453249566785289ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_h_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1337556398236340356ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12780104313461672311ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16717120815711037992ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15391167004170922653ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14871084224396925334ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14806938501093093874ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2849408776197679549ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1080022198104590924ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15957024347466410890ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4749464681596560679ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__frm_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8297648689639527174ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__frm_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10869648521554119119ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__fflags_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13329566568003591868ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__fflags_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17125157703135606806ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__fcsr_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16034718931341465395ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17402741663935899126ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14452992127093560810ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6298577669058042407ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13013605058992377735ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12511857480091856859ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4227060875881407401ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1075442434921037333ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14730301980536750838ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17895778802090238306ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1171357790894601312ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10747044835224940326ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14245310089356433038ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11545721006492276755ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2337249568657624624ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18220002420721977644ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_fs_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14029846634167658829ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_fs_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1157923433538693874ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17652133369972560863ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10985665721953761259ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11852172344731894501ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12459299484536759777ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5764253408442090362ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5868827026514811971ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 646617952858672470ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4518264634480505266ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9988697016122867618ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4661380056888743990ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5431438803552212604ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q, __VscopeHash, 7222177105022093315ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q, __VscopeHash, 9246344148399731301ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n, __VscopeHash, 16975225340101649099ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3840338607614542005ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9359435304979134175ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__255__03a192__KET__ = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2347474274111240524ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__191__03a128__KET__ = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12083896726966635405ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment__BRA__63__03a0__KET__ = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6381590301594994011ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3488940513791636182ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049552450956872806ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3952324318881849903ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 185053529186732664ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6877065994035656088ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1343271059076139414ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12246896416991252555ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5900167600929143604ull);
    vlSelf->tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4949610950503837286ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13926786467067779151ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17882466174850708399ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9418332644925657401ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8203610432215291795ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 951407760909040921ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__be_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2254059287821997915ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13723730996138709192ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2614261722541803004ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1259237840207407430ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8461735549544422557ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8303148651909930573ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14836356231558456823ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13454135559289284571ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16827968868911337849ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5954014912828446834ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2367538408356153886ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1492036359120039069ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__we_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15080945326009111816ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__addr_reg = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 4301503815826894016ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__wdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1416675822756856691ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__be_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9275552118007115646ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16831747411883529199ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3170719673775231402ull);
    for (int __Vi0 = 0; __Vi0 < 524288; ++__Vi0) {
        vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13192228772982758681ull);
    }
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12538906544666987974ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_reg = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 9764535182740581790ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_reg = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 1818403710295744851ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12315499893322559531ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2191694193668230458ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16330456575155503829ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15304789300488217965ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 11200317598105787903ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11978110715724811048ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1335935916735057465ull);
    vlSelf->tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6121613018381903266ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_16 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_44 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_46 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_49 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_50 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_51 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_52 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_53 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_54 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_56 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_57 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_58 = 0;
    vlSelf->__Vdly__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg = 0;
    vlSelf->__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 = 0;
    vlSelf->__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 = 0;
    vlSelf->__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v0 = 0;
    vlSelf->__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 = 0;
    vlSelf->__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v1 = 0;
    vlSelf->__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 = 0;
    vlSelf->__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 = 0;
    vlSelf->__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v2 = 0;
    vlSelf->__VdlyVal__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 = 0;
    vlSelf->__VdlyDim0__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 = 0;
    vlSelf->__VdlySet__tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mem_array__v3 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__data_rdata__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__data_rvalid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
