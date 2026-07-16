// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pim_core.h for the primary calling header

#include "Vtb_pim_core__pch.h"

extern const VlUnpacked<CData/*1:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hf40be3a8_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h21c33103_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_hb631a9a4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h03efe2d9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h9d404c63_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_pim_core__ConstPool__TABLE_h4f689d40_0;

void Vtb_pim_core___024root___nba_comb__TOP__1(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_comb__TOP__1\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                   + vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
}

void Vtb_pim_core___024root___nba_comb__TOP__3(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_comb__TOP__3\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_40;
    __VdfgRegularize_hebeb780c_0_40 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_40 = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                       & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
                                          & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i) 
                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i))));
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

void Vtb_pim_core___024root___nba_comb__TOP__4(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___nba_comb__TOP__4\n"); );
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
    vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i 
        = ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o))))));
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

void Vtb_pim_core___024root___nba_sequent__TOP__0(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_sequent__TOP__1(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_sequent__TOP__2(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_sequent__TOP__3(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_sequent__TOP__4(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_sequent__TOP__5(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___nba_comb__TOP__0(Vtb_pim_core___024root* vlSelf);
void Vtb_pim_core___024root___act_sequent__TOP__0(Vtb_pim_core___024root* vlSelf);

void Vtb_pim_core___024root___eval_nba(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_nba\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000002008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000001ff0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x0000000000002008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000006008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x0000000000006004ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[10U] = 1U;
    }
    if ((0x0000000000026008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000600cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x000000000000600fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pim_core___024root___nba_comb__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[11U] = 1U;
    }
}

void Vtb_pim_core___024root___timing_ready(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___timing_ready\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h02a4d73b__0.ready("@(posedge tb_pim_core.clk_i)");
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h02a4d417__0.ready("@(negedge tb_pim_core.clk_i)");
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd0fb909f__0.ready("@(posedge tb_pim_core.rst_ni)");
    }
}

void Vtb_pim_core___024root___timing_resume(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___timing_resume\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h02a4d73b__0.moveToResumeQueue(
                                                          "@(posedge tb_pim_core.clk_i)");
    vlSelfRef.__VtrigSched_h02a4d417__0.moveToResumeQueue(
                                                          "@(negedge tb_pim_core.clk_i)");
    vlSelfRef.__VtrigSched_hd0fb909f__0.moveToResumeQueue(
                                                          "@(posedge tb_pim_core.rst_ni)");
    vlSelfRef.__VtrigSched_h02a4d73b__0.resume("@(posedge tb_pim_core.clk_i)");
    vlSelfRef.__VtrigSched_h02a4d417__0.resume("@(negedge tb_pim_core.clk_i)");
    vlSelfRef.__VtrigSched_hd0fb909f__0.resume("@(posedge tb_pim_core.rst_ni)");
    if ((0x0000000000020000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_pim_core___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_pim_core___024root___eval_triggers_vec__act(Vtb_pim_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pim_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_pim_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_pim_core___024root___eval_act(Vtb_pim_core___024root* vlSelf);

bool Vtb_pim_core___024root___eval_phase__act(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_phase__act\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pim_core___024root___eval_triggers_vec__act(vlSelf);
    Vtb_pim_core___024root___timing_ready(vlSelf);
    Vtb_pim_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pim_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_pim_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_pim_core___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_pim_core___024root___timing_resume(vlSelf);
        Vtb_pim_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pim_core___024root___eval_phase__inact(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_phase__inact\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_pim_core.sv", 23, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_pim_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_pim_core___024root___eval_phase__nba(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_phase__nba\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_pim_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_pim_core___024root___eval_nba(vlSelf);
        Vtb_pim_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_pim_core___024root___eval(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_pim_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_pim_core.sv", 23, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_pim_core.sv", 23, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_pim_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_pim_core.sv", 23, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_pim_core___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_pim_core___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_pim_core___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_pim_core___024root____VbeforeTrig_h02a4d73b__0(Vtb_pim_core___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root____VbeforeTrig_h02a4d73b__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_pim_core__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0)) 
                                   << 0x0000000fU) 
                                  | (((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0))) 
                                     << 3U))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0 
        = vlSelfRef.tb_pim_core__DOT__clk_i;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h02a4d73b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h02a4d73b__0.ready(__VeventDescription);
    }
    if ((0x0000000000008000ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h02a4d417__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_pim_core___024root____VbeforeTrig_h02a4d417__0(Vtb_pim_core___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root____VbeforeTrig_h02a4d417__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_pim_core__DOT__clk_i)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0)) 
                                   << 0x0000000fU) 
                                  | (((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0))) 
                                     << 3U))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__clk_i__0 
        = vlSelfRef.tb_pim_core__DOT__clk_i;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h02a4d73b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h02a4d73b__0.ready(__VeventDescription);
    }
    if ((0x0000000000008000ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h02a4d417__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_pim_core___024root____VbeforeTrig_hd0fb909f__0(Vtb_pim_core___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root____VbeforeTrig_hd0fb909f__0\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_pim_core__DOT__rst_ni) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__rst_ni__0))) 
                                  << 0x00000010U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pim_core__DOT__rst_ni__0 
        = vlSelfRef.tb_pim_core__DOT__rst_ni;
    if ((0x0000000000010000ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd0fb909f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_pim_core___024root___eval_debug_assertions(Vtb_pim_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root___eval_debug_assertions\n"); );
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
