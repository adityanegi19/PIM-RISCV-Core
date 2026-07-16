// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_pim_core__Syms.h"


void Vtb_pim_core___024root__trace_chg_0_sub_0(Vtb_pim_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_pim_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_chg_0\n"); );
    // Body
    Vtb_pim_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pim_core___024root*>(voidSelf);
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_pim_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_pim_core___024root__trace_chg_0_sub_0(Vtb_pim_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_chg_0_sub_0\n"); );
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
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgIData(oldp+0,((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we) 
                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[772U])
                                 ? (0xffff0888U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata)
                                 : vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q)),32);
        bufp->chgIData(oldp+1,(((((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2847U]) 
                                       << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2846U]) 
                                                 << 2U)) 
                                     | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2845U]) 
                                         << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2844U]))) 
                                    << 0x0000000cU) 
                                   | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2843U]) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2842U]) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2841U]) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2840U]))) 
                                      << 8U)) | (((
                                                   ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
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
                                 << 0x00000010U) | 
                                ((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2831U]) 
                                      << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2830U]) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2829U]) 
                                        << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2828U]))) 
                                   << 0x0000000cU) 
                                  | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2827U]) 
                                        << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2826U]) 
                                                  << 2U)) 
                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2825U]) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2824U]))) 
                                     << 8U)) | ((((
                                                   (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
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
        bufp->chgIData(oldp+2,(((((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
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
                                    << 0x0000000cU) 
                                   | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                          & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2843U])) 
                                             & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2971U])) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2842U])) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2970U])) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2841U])) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2969U])) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                           & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2840U])) 
                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2968U])))) 
                                      << 8U)) | (((
                                                   ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
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
                                 << 0x00000010U) | 
                                ((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2831U])) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2959U])) 
                                      << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2830U])) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2958U])) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2829U])) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2957U])) 
                                        << 1U) | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2828U])) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2956U])))) 
                                   << 0x0000000cU) 
                                  | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2827U])) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2955U])) 
                                        << 3U) | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2826U])) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2954U])) 
                                                  << 2U)) 
                                      | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                           & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2825U])) 
                                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2953U])) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                          & ((~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2824U])) 
                                             & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[2952U])))) 
                                     << 8U)) | ((((
                                                   (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
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
        bufp->chgBit(oldp+3,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[774U])));
        bufp->chgBit(oldp+4,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                              & vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[800U])));
        bufp->chgBit(oldp+5,((vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[1953U] 
                              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))));
        bufp->chgBit(oldp+6,((vlSelfRef.__VdfgBinToOneHot_Tab_h9a3b41c9_0_0[1954U] 
                              & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_27))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[6U])))) {
        bufp->chgWData(oldp+7,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q),2048);
        bufp->chgWData(oldp+71,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
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
        bufp->chgWData(oldp+104,(__Vtemp_31),2048);
        bufp->chgIData(oldp+168,(((((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
                                    & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__)) 
                                       & ((~ (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                              >> 3U)) 
                                          & (0U != 
                                             (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
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
                                              << 2U) 
                                             | (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__) 
                                                    | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                       | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__)))))))),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[3U] 
                       | vlSelfRef.__Vm_traceActivity[6U]) 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgIData(oldp+169,((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                                    ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                        << 0x0000001fU) 
                                       | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                          >> 1U)) : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
                                  & (- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))))),32);
        bufp->chgIData(oldp+170,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
                                   ? (((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                                       & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                                       ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                                          + vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                                       : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                                          - vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
                                   : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)),32);
        bufp->chgIData(oldp+171,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
                                   ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                       ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI
                                       : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                                           << 0x0000001fU) 
                                          | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                             >> 1U)))
                                   : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)),32);
        bufp->chgBit(oldp+172,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                       ? ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                          >> 1U) : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)))));
        bufp->chgBit(oldp+173,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                 ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI)
                                 : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP))));
        bufp->chgBit(oldp+174,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                 ? (((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                                     | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex) 
                                        >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19))
                                 : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP))));
        bufp->chgIData(oldp+175,((((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                                   & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                                   ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                                      + vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                                   : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                                      - vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))),32);
        bufp->chgIData(oldp+176,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                   ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI
                                   : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                                       << 0x0000001fU) 
                                      | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                         >> 1U)))),32);
        bufp->chgCData(oldp+177,((0x0000003fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                                                  ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI)
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                                   - (IData)(1U))
                                                   : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))))),6);
        bufp->chgBit(oldp+178,(((~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_19)) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[10U])))) {
        bufp->chgBit(oldp+179,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready));
        bufp->chgIData(oldp+180,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D),32);
        bufp->chgIData(oldp+181,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D),32);
        bufp->chgBit(oldp+182,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S));
        bufp->chgBit(oldp+183,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S));
        bufp->chgBit(oldp+184,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S));
        bufp->chgBit(oldp+185,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S));
        bufp->chgCData(oldp+186,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN),2);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[4U] 
                       | vlSelfRef.__Vm_traceActivity[6U]) 
                      | vlSelfRef.__Vm_traceActivity[11U])))) {
        bufp->chgBit(oldp+187,(((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                                | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))));
        bufp->chgCData(oldp+188,((((3U == (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x0000000cU)))
                                    ? 1U : (2U & (- (IData)(
                                                            (6U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 0x0000000cU))))))) 
                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44))))),2);
        bufp->chgCData(oldp+189,((0x0000003fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x0000001aU) 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)))))),6);
        bufp->chgCData(oldp+190,((0x0000003fU & ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U) 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_44)))))),6);
        bufp->chgBit(oldp+191,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i)
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q))
                                       : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)))));
        bufp->chgBit(oldp+192,((1U & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)
                                       ? ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q))
                                       : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)))));
        bufp->chgBit(oldp+193,(((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))));
        bufp->chgCData(oldp+194,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                                  & (- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set))))))),2);
        bufp->chgBit(oldp+195,((((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                                 | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid)) 
                                | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy) 
                                   | ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity[11U])))) {
        bufp->chgBit(oldp+196,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_req_o));
        bufp->chgIData(oldp+197,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_addr_o),32);
        bufp->chgCData(oldp+198,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o),2);
        bufp->chgCData(oldp+199,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_o),6);
        bufp->chgCData(oldp+200,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_o),6);
        bufp->chgBit(oldp+201,(vlSelfRef.tb_pim_core__DOT__irq_ack_unused));
        bufp->chgCData(oldp+202,(vlSelfRef.tb_pim_core__DOT__irq_id_unused),5);
        bufp->chgBit(oldp+203,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__clear_instr_valid_i));
        bufp->chgBit(oldp+204,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set));
        bufp->chgCData(oldp+205,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id),4);
        bufp->chgCData(oldp+206,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id),3);
        bufp->chgCData(oldp+207,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i),5);
        bufp->chgCData(oldp+208,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_cause),5);
        bufp->chgCData(oldp+209,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux),2);
        bufp->chgBit(oldp+210,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_decoding));
        bufp->chgBit(oldp+211,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_misaligned_i));
        bufp->chgBit(oldp+212,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ctrl_busy));
        bufp->chgBit(oldp+213,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_if));
        bufp->chgBit(oldp+214,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i));
        bufp->chgBit(oldp+215,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i));
        bufp->chgBit(oldp+216,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_req_int));
        bufp->chgBit(oldp+217,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_irq_sec));
        bufp->chgBit(oldp+218,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_cause));
        bufp->chgBit(oldp+219,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_if));
        bufp->chgBit(oldp+220,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_save_id));
        bufp->chgCData(oldp+221,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause),6);
        bufp->chgBit(oldp+222,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_mret_id));
        bufp->chgBit(oldp+223,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_uret_id));
        bufp->chgBit(oldp+224,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_restore_dret_id));
        bufp->chgBit(oldp+225,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
                                & (0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_mux_id)))));
        bufp->chgCData(oldp+226,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_cause),3);
        bufp->chgBit(oldp+227,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__debug_csr_save));
        bufp->chgBit(oldp+228,((1U & (~ ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_set) 
                                         | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid))))));
        bufp->chgIData(oldp+229,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n),32);
        bufp->chgIData(oldp+230,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n),32);
        bufp->chgIData(oldp+231,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_n),32);
        bufp->chgIData(oldp+232,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
        bufp->chgCData(oldp+233,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n),7);
        bufp->chgCData(oldp+234,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n),6);
        bufp->chgIData(oldp+235,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n),24);
        bufp->chgBit(oldp+236,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_cause) 
                                      >> 5U))));
        bufp->chgCData(oldp+237,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_n),2);
        bufp->chgBit(oldp+238,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o));
        bufp->chgCData(oldp+239,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i),2);
        bufp->chgBit(oldp+240,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o));
        bufp->chgBit(oldp+241,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__hwlp_mask));
        bufp->chgBit(oldp+242,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__halt_id));
        bufp->chgBit(oldp+243,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o));
        bufp->chgBit(oldp+244,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o));
        bufp->chgBit(oldp+245,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o));
        bufp->chgBit(oldp+246,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o));
        bufp->chgBit(oldp+247,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o));
        bufp->chgCData(oldp+248,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_mux_sel),2);
        bufp->chgCData(oldp+249,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_mux_sel),2);
        bufp->chgCData(oldp+250,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_mux_sel),2);
        bufp->chgIData(oldp+251,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw_id),32);
        bufp->chgIData(oldp+252,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw_id),32);
        bufp->chgIData(oldp+253,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c_fw_id),32);
        bufp->chgIData(oldp+254,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b),32);
        bufp->chgIData(oldp+255,(((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b 
                                   << 0x00000010U) 
                                  | (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_b))),32);
        bufp->chgIData(oldp+256,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c),32);
        bufp->chgIData(oldp+257,(((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c 
                                   << 0x00000010U) 
                                  | (0x0000ffffU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__operand_c))),32);
        bufp->chgIData(oldp+258,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        bufp->chgBit(oldp+259,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__minstret));
        bufp->chgBit(oldp+260,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__perf_pipeline_stall));
        bufp->chgCData(oldp+261,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),5);
        bufp->chgCData(oldp+262,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns),3);
        bufp->chgBit(oldp+263,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done));
        bufp->chgBit(oldp+264,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec));
        bufp->chgBit(oldp+265,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id));
        bufp->chgBit(oldp+266,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
        bufp->chgBit(oldp+267,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode));
        bufp->chgBit(oldp+268,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
        bufp->chgBit(oldp+269,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
        bufp->chgBit(oldp+270,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
        bufp->chgBit(oldp+271,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__if_valid));
        bufp->chgBit(oldp+272,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__id_ready_i))));
        bufp->chgIData(oldp+273,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n),32);
        bufp->chgBit(oldp+274,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_valid));
        bufp->chgBit(oldp+275,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_ready));
        bufp->chgIData(oldp+276,(((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__exc_pc_mux_id))
                                   ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr 
                                      << 8U) : ((2U 
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
                                                       << 2U)))))),32);
        bufp->chgIData(oldp+277,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__trap_base_addr),24);
        bufp->chgCData(oldp+278,(((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux))
                                   ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i)
                                   : ((- (IData)((1U 
                                                  != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__trap_addr_mux)))) 
                                      & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i)))),5);
        bufp->chgBit(oldp+279,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_ready));
        bufp->chgBit(oldp+280,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_valid));
        bufp->chgIData(oldp+281,((0xfffffffeU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)),32);
        bufp->chgCData(oldp+282,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__next_state),3);
        bufp->chgIData(oldp+283,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n),32);
        bufp->chgBit(oldp+284,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__update_state));
        bufp->chgBit(oldp+285,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
        bufp->chgIData(oldp+286,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr),32);
        bufp->chgBit(oldp+287,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i));
        bufp->chgBit(oldp+288,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i));
        bufp->chgBit(oldp+289,((1U & (~ (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_46)))));
        bufp->chgCData(oldp+290,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n),2);
        bufp->chgQData(oldp+291,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n),64);
        bufp->chgIData(oldp+293,((0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr)),32);
        bufp->chgBit(oldp+294,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
        bufp->chgBit(oldp+295,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
        bufp->chgCData(oldp+296,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt),2);
        bufp->chgIData(oldp+297,((0xfffffffcU & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)),32);
        bufp->chgBit(oldp+298,((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_o))));
        bufp->chgIData(oldp+299,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm1),32);
        bufp->chgIData(oldp+300,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_imm2),32);
        bufp->chgIData(oldp+301,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_sum),20);
        bufp->chgIData(oldp+302,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_sum),20);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+303,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q));
        bufp->chgBit(oldp+304,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q));
        bufp->chgBit(oldp+305,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q));
        bufp->chgBit(oldp+306,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__p_elw_busy_q));
        bufp->chgBit(oldp+307,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rvalid_int));
        bufp->chgIData(oldp+308,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_rdata_int),32);
        bufp->chgCData(oldp+309,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__resp_target_reg),2);
        bufp->chgBit(oldp+310,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__outstanding_q));
        bufp->chgCData(oldp+311,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_state),2);
        bufp->chgCData(oldp+312,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__state),2);
        bufp->chgBit(oldp+313,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__we_reg));
        bufp->chgIData(oldp+314,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__addr_reg),19);
        bufp->chgIData(oldp+315,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__wdata_reg),32);
        bufp->chgCData(oldp+316,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__be_reg),4);
        bufp->chgIData(oldp+317,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_a_reg),19);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+318,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i));
        bufp->chgBit(oldp+319,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_we_ex));
        bufp->chgCData(oldp+320,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i),4);
        bufp->chgIData(oldp+321,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i),32);
        bufp->chgIData(oldp+322,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i),32);
        bufp->chgIData(oldp+323,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex),32);
        bufp->chgSData(oldp+324,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_flags_ex),15);
        bufp->chgBit(oldp+325,((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs))));
        bufp->chgBit(oldp+326,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                      >> 1U))));
        bufp->chgBit(oldp+327,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                                      >> 2U))));
        bufp->chgCData(oldp+328,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_atop_ex),6);
        bufp->chgBit(oldp+329,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_valid_id));
        bufp->chgIData(oldp+330,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id),32);
        bufp->chgBit(oldp+331,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_compressed_id));
        bufp->chgBit(oldp+332,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__illegal_c_insn_id));
        bufp->chgBit(oldp+333,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__is_fetch_failed_id));
        bufp->chgIData(oldp+334,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q),32);
        bufp->chgIData(oldp+335,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_id),32);
        bufp->chgBit(oldp+336,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__useincr_addr_ex));
        bufp->chgBit(oldp+337,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_multicycle));
        bufp->chgIData(oldp+338,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex),32);
        bufp->chgBit(oldp+339,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__branch_in_ex));
        bufp->chgBit(oldp+340,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                      >> 3U))));
        bufp->chgBit(oldp+341,(((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i))));
        bufp->chgIData(oldp+342,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__pc_ex),32);
        bufp->chgBit(oldp+343,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_en_ex));
        bufp->chgCData(oldp+344,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex),7);
        bufp->chgIData(oldp+345,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex),32);
        bufp->chgCData(oldp+346,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex),5);
        bufp->chgCData(oldp+347,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex),5);
        bufp->chgCData(oldp+348,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__imm_vec_ext_ex),2);
        bufp->chgCData(oldp+349,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_vec_mode_ex),2);
        bufp->chgBit(oldp+350,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex));
        bufp->chgBit(oldp+351,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_subrot_ex));
        bufp->chgCData(oldp+352,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex),2);
        bufp->chgCData(oldp+353,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex),3);
        bufp->chgIData(oldp+354,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex),32);
        bufp->chgIData(oldp+355,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex),32);
        bufp->chgIData(oldp+356,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex),32);
        bufp->chgBit(oldp+357,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_en_ex));
        bufp->chgBit(oldp+358,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_sel_subword_ex));
        bufp->chgCData(oldp+359,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_signed_mode_ex),2);
        bufp->chgCData(oldp+360,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex),5);
        bufp->chgIData(oldp+361,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex),32);
        bufp->chgIData(oldp+362,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex),32);
        bufp->chgIData(oldp+363,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex),32);
        bufp->chgCData(oldp+364,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_signed_ex),2);
        bufp->chgBit(oldp+365,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex));
        bufp->chgCData(oldp+366,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_shift_ex),2);
        bufp->chgBit(oldp+367,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex));
        bufp->chgBit(oldp+368,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex));
        bufp->chgCData(oldp+369,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_op_ex),6);
        bufp->chgCData(oldp+370,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_lat_ex),2);
        bufp->chgWData(oldp+371,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_operands_ex),96);
        bufp->chgCData(oldp+374,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_waddr_ex),6);
        bufp->chgCData(oldp+375,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex),6);
        bufp->chgBit(oldp+376,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_we_ex));
        bufp->chgCData(oldp+377,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu),6);
        bufp->chgBit(oldp+378,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu));
        bufp->chgCData(oldp+379,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex),6);
        bufp->chgBit(oldp+380,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_we_ex));
        bufp->chgBit(oldp+381,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i));
        bufp->chgIData(oldp+382,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_wdata_fw),32);
        bufp->chgBit(oldp+383,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_access_ex));
        bufp->chgCData(oldp+384,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__csr_op_ex),2);
        bufp->chgIData(oldp+385,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_q),24);
        bufp->chgCData(oldp+386,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_q),2);
        bufp->chgSData(oldp+387,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_addr_i),12);
        bufp->chgIData(oldp+388,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_o),32);
        bufp->chgCData(oldp+389,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_type_ex),2);
        bufp->chgCData(oldp+390,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_sign_ext_ex),2);
        bufp->chgCData(oldp+391,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_reg_offset_ex),2);
        bufp->chgBit(oldp+392,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_req_ex));
        bufp->chgBit(oldp+393,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex));
        bufp->chgBit(oldp+394,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex));
        bufp->chgBit(oldp+395,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_load_event_ex) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__data_req_i))));
        bufp->chgBit(oldp+396,(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                   >> 5U))));
        bufp->chgBit(oldp+397,(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_23) 
                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q) 
                                   >> 6U))));
        bufp->chgIData(oldp+398,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mepc_q),32);
        bufp->chgIData(oldp+399,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__depc_q),32);
        bufp->chgIData(oldp+400,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q),32);
        bufp->chgBit(oldp+401,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        bufp->chgBit(oldp+402,((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                      >> 2U))));
        bufp->chgBit(oldp+403,((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                      >> 0x0000000fU))));
        bufp->chgBit(oldp+404,((1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q 
                                      >> 0x0000000cU))));
        bufp->chgBit(oldp+405,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__trigger_match_o));
        bufp->chgBit(oldp+406,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_minstret));
        bufp->chgBit(oldp+407,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_load));
        bufp->chgBit(oldp+408,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_store));
        bufp->chgBit(oldp+409,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jump));
        bufp->chgBit(oldp+410,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch));
        bufp->chgBit(oldp+411,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_branch_taken));
        bufp->chgBit(oldp+412,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed));
        bufp->chgBit(oldp+413,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_jr_stall));
        bufp->chgBit(oldp+414,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_imiss));
        bufp->chgBit(oldp+415,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_ld_stall));
        bufp->chgBit(oldp+416,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_pipe_stall));
        bufp->chgIData(oldp+417,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+418,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+419,((0x28001040U | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                 << 2U))),32);
        bufp->chgIData(oldp+420,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q),32);
        bufp->chgIData(oldp+421,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_q),32);
        bufp->chgIData(oldp+422,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_q),32);
        bufp->chgIData(oldp+423,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n),32);
        bufp->chgIData(oldp+424,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_q),32);
        bufp->chgIData(oldp+425,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n),32);
        bufp->chgIData(oldp+426,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_q),32);
        bufp->chgIData(oldp+427,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n),32);
        bufp->chgCData(oldp+428,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_q),7);
        bufp->chgCData(oldp+429,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcause_q),6);
        bufp->chgCData(oldp+430,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_mode_n),2);
        bufp->chgIData(oldp+431,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_q),32);
        bufp->chgIData(oldp+432,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mie_n),32);
        bufp->chgIData(oldp+433,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_wdata),32);
        bufp->chgBit(oldp+434,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__csr_mie_we));
        bufp->chgWData(oldp+435,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
        bufp->chgIData(oldp+467,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
        bufp->chgSData(oldp+468,((1U | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mhpmevent_compressed) 
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
                                                 << 1U)))))),16);
        bufp->chgBit(oldp+469,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we));
        bufp->chgBit(oldp+470,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q));
        bufp->chgIData(oldp+471,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_result),32);
        bufp->chgIData(oldp+472,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_result),32);
        bufp->chgBit(oldp+473,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active));
        bufp->chgBit(oldp+474,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready));
        bufp->chgIData(oldp+475,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev),32);
        bufp->chgIData(oldp+476,((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)),32);
        bufp->chgIData(oldp+477,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev),32);
        bufp->chgIData(oldp+478,((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)),32);
        bufp->chgCData(oldp+479,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI),6);
        bufp->chgBit(oldp+480,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI));
        bufp->chgIData(oldp+481,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask),32);
        bufp->chgBit(oldp+482,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate));
        bufp->chgIData(oldp+483,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a),32);
        bufp->chgIData(oldp+484,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b),32);
        bufp->chgQData(oldp+485,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a),36);
        bufp->chgQData(oldp+487,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b),36);
        bufp->chgIData(oldp+489,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result),32);
        bufp->chgQData(oldp+490,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded),37);
        bufp->chgIData(oldp+492,(((- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                              | ((0x1fU 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                                 | (0x1eU 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))) 
                                  & VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U))),32);
        bufp->chgIData(oldp+493,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                                  + ((- (IData)(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_16) 
                                                 | ((0x1fU 
                                                     == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                                    | (0x1eU 
                                                       == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))) 
                                     & VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U)))),32);
        bufp->chgBit(oldp+494,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left));
        bufp->chgBit(oldp+495,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round));
        bufp->chgBit(oldp+496,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic));
        bufp->chgIData(oldp+497,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left),32);
        bufp->chgIData(oldp+498,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt),32);
        bufp->chgIData(oldp+499,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int),32);
        bufp->chgIData(oldp+500,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_is_clpx_ex)
                                   ? (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex) 
                                       << 0x00000010U) 
                                      | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex))
                                   : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                       << 0x00000018U) 
                                      | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                          << 0x00000010U) 
                                         | (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_b_ex)))))),32);
        bufp->chgIData(oldp+501,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a),32);
        bufp->chgIData(oldp+502,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result),32);
        bufp->chgIData(oldp+503,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result),32);
        bufp->chgIData(oldp+504,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI),32);
        bufp->chgSData(oldp+505,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_clpx_shift_ex),16);
        bufp->chgQData(oldp+506,(((0x26U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
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
        bufp->chgCData(oldp+508,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal),4);
        bufp->chgCData(oldp+509,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater),4);
        bufp->chgCData(oldp+510,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed),4);
        bufp->chgCData(oldp+511,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec),4);
        bufp->chgCData(oldp+512,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec),4);
        bufp->chgIData(oldp+513,(((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex) 
                                  & (- (IData)((0x17U 
                                                != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))),32);
        bufp->chgBit(oldp+514,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip));
        bufp->chgCData(oldp+515,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result),4);
        bufp->chgIData(oldp+516,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax),32);
        bufp->chgCData(oldp+517,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax),4);
        bufp->chgBit(oldp+518,(((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                | ((0x10U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                   | ((0x11U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                      | (0x16U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)))))));
        bufp->chgIData(oldp+519,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b),32);
        bufp->chgIData(oldp+520,(((0x17U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                   ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                         >> 0x0000001fU) 
                                                        | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))))))
                                   : (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                       | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                          >> 0x00000024U))
                                       ? (~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_b_ex)
                                       : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))),32);
        bufp->chgCData(oldp+521,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel),8);
        bufp->chgCData(oldp+522,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel),4);
        bufp->chgCData(oldp+523,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel),2);
        bufp->chgCData(oldp+524,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel),2);
        bufp->chgCData(oldp+525,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through),4);
        bufp->chgIData(oldp+526,(((((0x0000ff00U & 
                                     (((0x00000080U 
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
                                      << 8U)) | (0x000000ffU 
                                                 & ((0x00000020U 
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
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                         ? ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                             ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                >> 0x00000018U)
                                             : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                >> 0x00000010U))
                                         : ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                             ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                >> 8U)
                                             : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                       << 8U)) | (0x000000ffU 
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
        bufp->chgIData(oldp+527,(((((0x0000ff00U & 
                                     (((0x00000080U 
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
                                            : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                      << 8U)) | (0x000000ffU 
                                                 & ((0x00000020U 
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
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                         ? ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                             ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                >> 0x00000018U)
                                             : (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                >> 0x00000010U))
                                         : ((4U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                             ? (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                >> 8U)
                                             : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                       << 8U)) | (0x000000ffU 
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
        bufp->chgIData(oldp+528,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in),32);
        bufp->chgIData(oldp+529,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in),32);
        bufp->chgIData(oldp+530,(((((0x0000ff00U & 
                                     (((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
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
                                      << 8U)) | (0x000000ffU 
                                                 & ((4U 
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
                                   << 0x00000010U) 
                                  | ((0x0000ff00U & 
                                      (((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                         ? ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                 >> 0x00000018U)
                                                 : 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                 >> 0x00000010U))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                 >> 8U)
                                                 : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                         : ((8U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                 >> 0x00000018U)
                                                 : 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                 >> 0x00000010U))
                                             : ((4U 
                                                 & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                 >> 8U)
                                                 : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in))) 
                                       << 8U)) | (0x000000ffU 
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
        bufp->chgIData(oldp+531,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result),32);
        bufp->chgIData(oldp+532,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input),32);
        bufp->chgCData(oldp+533,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result),6);
        bufp->chgCData(oldp+534,((0x0000003fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                                 - (IData)(1U)))),6);
        bufp->chgCData(oldp+535,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result),5);
        bufp->chgBit(oldp+536,((1U & (~ (0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))));
        bufp->chgCData(oldp+537,((0x0000001fU & ((IData)(0x1fU) 
                                                 - (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))),5);
        bufp->chgCData(oldp+538,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result),6);
        bufp->chgBit(oldp+539,((0x28U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))));
        bufp->chgBit(oldp+540,(((0x28U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                   >> (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))));
        bufp->chgIData(oldp+541,(((IData)(0xfffffffeU) 
                                  << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))),32);
        bufp->chgIData(oldp+542,((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
        bufp->chgIData(oldp+543,(((0x2aU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))
                                   ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_c_ex
                                   : (- (IData)(((0x28U 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex)) 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))))))),32);
        bufp->chgIData(oldp+544,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result),32);
        bufp->chgIData(oldp+545,(((~ vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)),32);
        bufp->chgIData(oldp+546,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                  | vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)),32);
        bufp->chgIData(oldp+547,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev),32);
        bufp->chgIData(oldp+548,((((((((0x0000000cU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 2U))) 
                                      << 0x0000000cU) 
                                     | (((0x0000000cU 
                                          & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 2U)) 
                                         | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 6U))) 
                                        << 8U)) | (
                                                   (((0x0000000cU 
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
                                        | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0x00000012U))) 
                                       << 0x0000000cU) 
                                      | (((0x0000000cU 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000012U)) 
                                          | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x00000016U))) 
                                         << 8U)) | 
                                     ((((0x0000000cU 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            >> 0x00000016U)) 
                                        | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0x0000001aU))) 
                                       << 4U) | ((0x0000000cU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001aU)) 
                                                 | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001eU)))))),32);
        bufp->chgIData(oldp+549,(((((0x00000e00U & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      << 7U)) | ((0x000001c0U 
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
                                          | (7U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x00000014U)))) 
                                      << 9U) | ((0x000001c0U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000011U)) 
                                                | ((0x00000038U 
                                                    & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                       >> 0x00000017U)) 
                                                   | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU)))))),32);
        bufp->chgIData(oldp+550,(((0U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                   ? vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                   : ((1U == (3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
                                       ? (((((((0x0000000cU 
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
                                       : ((2U == (3U 
                                                  & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex)))
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
        bufp->chgCData(oldp+551,((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__bmask_a_ex))),2);
        bufp->chgIData(oldp+552,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                                   ? (- vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                                   : vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)),32);
        bufp->chgBit(oldp+553,((1U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))));
        bufp->chgBit(oldp+554,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI));
        bufp->chgCData(oldp+555,(((0U != vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                   ? (0x0000003fU & 
                                      ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                       - (IData)(1U)))
                                   : 0x0000001fU)),6);
        bufp->chgBit(oldp+556,((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
        bufp->chgCData(oldp+557,((3U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operator_ex))),2);
        bufp->chgIData(oldp+558,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP),32);
        bufp->chgIData(oldp+559,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev),32);
        bufp->chgIData(oldp+560,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP),32);
        bufp->chgIData(oldp+561,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP),32);
        bufp->chgBit(oldp+562,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        bufp->chgBit(oldp+563,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP));
        bufp->chgBit(oldp+564,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP));
        bufp->chgIData(oldp+565,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D),32);
        bufp->chgCData(oldp+566,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP),6);
        bufp->chgBit(oldp+567,((1U & (~ (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))))));
        bufp->chgBit(oldp+568,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S));
        bufp->chgCData(oldp+569,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP),2);
        bufp->chgIData(oldp+570,((((((((0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
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
                                     | ((((0U != (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x00000018U))) 
                                          << 3U) | 
                                         ((0U != (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x00000016U))) 
                                          << 2U)) | 
                                        (((0U != (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x00000014U))) 
                                          << 1U) | 
                                         (0U != (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x00000012U)))))) 
                                    << 0x00000018U) 
                                   | ((((((0U != (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x00000010U))) 
                                          << 3U) | 
                                         ((0U != (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x0000000eU))) 
                                          << 2U)) | 
                                        (((0U != (3U 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x0000000cU))) 
                                          << 1U) | 
                                         (0U != (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x0000000aU))))) 
                                       << 0x00000014U) 
                                      | (((((0U != 
                                             (3U & 
                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 8U))) 
                                            << 3U) 
                                           | ((0U != 
                                               (3U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 6U))) 
                                              << 2U)) 
                                          | (((0U != 
                                               (3U 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 4U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 2U))))) 
                                         << 0x00000010U))) 
                                  | (((((((0U != (3U 
                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)) 
                                          << 3U) | 
                                         ((0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                  >> 0x0000001cU)) 
                                          << 2U)) | 
                                        (((0U != (0x0000000fU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x00000018U))) 
                                          << 1U) | 
                                         (0U != (0x0000000fU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 0x00000014U))))) 
                                       << 0x0000000cU) 
                                      | (((((0U != 
                                             (0x0000000fU 
                                              & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                 >> 0x00000010U))) 
                                            << 3U) 
                                           | ((0U != 
                                               (0x0000000fU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 0x0000000cU))) 
                                              << 2U)) 
                                          | (((0U != 
                                               (0x0000000fU 
                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                   >> 8U))) 
                                              << 1U) 
                                             | (0U 
                                                != 
                                                (0x0000000fU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 4U))))) 
                                         << 8U)) | 
                                     ((((((0U != (0x0000000fU 
                                                  & vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)) 
                                          << 3U) | 
                                         ((0U != (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                  >> 0x00000018U)) 
                                          << 2U)) | 
                                        (((0U != (0x000000ffU 
                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                     >> 0x00000010U))) 
                                          << 1U) | 
                                         (0U != (0x000000ffU 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                    >> 8U))))) 
                                       << 4U) | (((
                                                   (0U 
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
        __Vtemp_32[0U] = (IData)((((QData)((IData)(
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
                                                            : 3U)))))));
        __Vtemp_32[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp_32[2U] = (((IData)((((QData)((IData)(
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
                                                              : 0x13U))))))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(
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
        __Vtemp_33[0U] = (IData)((((QData)((IData)(
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
                                                        | (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))))));
        __Vtemp_33[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp_33[2U] = (((IData)((((QData)((IData)(
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
                                                               : 7U)))))))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(
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
        bufp->chgWData(oldp+571,(__Vtemp_34),160);
        bufp->chgIData(oldp+576,((((((((0x0000000cU 
                                        & (VL_COUNTONES_I(
                                                          (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                           >> 0x0000001eU)) 
                                           << 2U)) 
                                       | (3U & VL_COUNTONES_I(
                                                              (3U 
                                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                  >> 0x0000001cU))))) 
                                      << 0x0000000cU) 
                                     | (((0x0000000cU 
                                          & (VL_COUNTONES_I(
                                                            (3U 
                                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                >> 0x0000001aU))) 
                                             << 2U)) 
                                         | (3U & VL_COUNTONES_I(
                                                                (3U 
                                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                    >> 0x00000018U))))) 
                                        << 8U)) | (
                                                   (((0x0000000cU 
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
                                   << 0x00000010U) 
                                  | (((((0x0000000cU 
                                         & (VL_COUNTONES_I(
                                                           (3U 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                               >> 0x0000000eU))) 
                                            << 2U)) 
                                        | (3U & VL_COUNTONES_I(
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
                                          | (3U & VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                     >> 8U))))) 
                                         << 8U)) | 
                                     ((((0x0000000cU 
                                         & (VL_COUNTONES_I(
                                                           (3U 
                                                            & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                               >> 6U))) 
                                            << 2U)) 
                                        | (3U & VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                   >> 4U))))) 
                                       << 4U) | ((0x0000000cU 
                                                  & (VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                        >> 2U))) 
                                                     << 2U)) 
                                                 | (3U 
                                                    & VL_COUNTONES_I(
                                                                     (3U 
                                                                      & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)))))))),32);
        bufp->chgIData(oldp+577,((((((0x00000038U & 
                                      (((3U & VL_COUNTONES_I(
                                                             (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                              >> 0x0000001eU))) 
                                        + (3U & VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                   >> 0x0000001cU))))) 
                                       << 3U)) | (7U 
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
                                    << 0x00000012U) 
                                   | (((0x00000038U 
                                        & (((3U & VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                     >> 0x00000016U)))) 
                                            + (3U & 
                                               VL_COUNTONES_I(
                                                              (3U 
                                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                  >> 0x00000014U))))) 
                                           << 3U)) 
                                       | (7U & ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 0x00000012U)))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                        >> 0x00000010U))))))) 
                                      << 0x0000000cU)) 
                                  | ((((0x00000038U 
                                        & (((3U & VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                     >> 0x0000000eU)))) 
                                            + (3U & 
                                               VL_COUNTONES_I(
                                                              (3U 
                                                               & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                  >> 0x0000000cU))))) 
                                           << 3U)) 
                                       | (7U & ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 0x0000000aU)))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                        >> 8U))))))) 
                                      << 6U) | ((0x00000038U 
                                                 & (((3U 
                                                      & VL_COUNTONES_I(
                                                                       (3U 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                           >> 6U)))) 
                                                     + 
                                                     (3U 
                                                      & VL_COUNTONES_I(
                                                                       (3U 
                                                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                           >> 4U))))) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                            >> 2U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))))))))),24);
        bufp->chgSData(oldp+578,(((((0x000000f0U & 
                                     (((7U & ((3U & 
                                               VL_COUNTONES_I(
                                                              (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                               >> 0x0000001eU))) 
                                              + (3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 0x0000001cU)))))) 
                                       + (7U & ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 0x0000001aU)))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                        >> 0x00000018U))))))) 
                                      << 4U)) | (0x0000000fU 
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
                                                                          & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex)))))))))),16);
        bufp->chgSData(oldp+579,(((0x000003e0U & ((
                                                   (0x0000000fU 
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
                                                   + 
                                                   (0x0000000fU 
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
                                  | (0x0000001fU & 
                                     ((0x0000000fU 
                                       & ((7U & ((3U 
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
                                          + (7U & (
                                                   (3U 
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
                                         & ((7U & (
                                                   (3U 
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
                                            + (7U & 
                                               ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex 
                                                                      >> 2U)))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & vlSelfRef.tb_pim_core__DOT__u_core__DOT__alu_operand_a_ex))))))))))),10);
        bufp->chgIData(oldp+580,(((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49) 
                                       >> 0x0000000fU)) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_49))),17);
        bufp->chgIData(oldp+581,((((IData)((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50) 
                                               >> 0x0000000fU))) 
                                   << 0x00000010U) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))),17);
        bufp->chgQData(oldp+582,((0x00000001ffffffffULL 
                                  & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                      ? (((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex)))
                                      : VL_EXTENDS_QI(33,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex)))),33);
        bufp->chgQData(oldp+584,((0x00000003ffffffffULL 
                                  & VL_MULS_QQQ(34, 
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
                                                                  | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_50))))))),34);
        bufp->chgQData(oldp+586,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac),34);
        bufp->chgIData(oldp+588,(((- (IData)((3U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))) 
                                  & VL_SHIFTR_III(32,32,32, 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex)), 1U))),32);
        bufp->chgIData(oldp+589,(((IData)(1U) << (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex))),32);
        bufp->chgQData(oldp+590,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_result),34);
        bufp->chgBit(oldp+592,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                       ? (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                  >> 0x00000021U))
                                       : (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                  >> 0x0000001fU))))));
        bufp->chgBit(oldp+593,((1U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                       ? (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                  >> 0x00000020U))
                                       : (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                  >> 0x0000001fU))))));
        bufp->chgCData(oldp+594,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mulh_active)
                                   ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                   : (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_imm_ex))),5);
        bufp->chgCData(oldp+595,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword),2);
        bufp->chgCData(oldp+596,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed),2);
        bufp->chgBit(oldp+597,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith));
        bufp->chgCData(oldp+598,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm),5);
        bufp->chgCData(oldp+599,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword),2);
        bufp->chgCData(oldp+600,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed),2);
        bufp->chgBit(oldp+601,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        bufp->chgBit(oldp+602,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q));
        bufp->chgBit(oldp+603,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save));
        bufp->chgBit(oldp+604,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry));
        bufp->chgCData(oldp+605,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS),3);
        bufp->chgIData(oldp+606,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                                  ^ (- (IData)((1U 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))))),32);
        bufp->chgIData(oldp+607,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                                  & (- (IData)((1U 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex)))))),32);
        bufp->chgIData(oldp+608,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_c_ex 
                                  + ((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex 
                                      & (- (IData)(
                                                   (1U 
                                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))))) 
                                     + VL_MULS_III(32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_b_ex, 
                                                   (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operand_a_ex 
                                                    ^ 
                                                    (- (IData)(
                                                               (1U 
                                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))))))))),32);
        bufp->chgBit(oldp+609,((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_operator_ex))));
        bufp->chgIData(oldp+610,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex 
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
        bufp->chgQData(oldp+611,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result),33);
        bufp->chgIData(oldp+613,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)
                                   ? (VL_EXTENDS_II(32,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__) 
                                      & (- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex))))))
                                   : vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_c_ex)),32);
        bufp->chgSData(oldp+614,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result),16);
        bufp->chgQData(oldp+615,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
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
                                   << 0x00000012U) 
                                  | (QData)((IData)(
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
        bufp->chgQData(oldp+617,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_54) 
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
                                   << 0x00000012U) 
                                  | (QData)((IData)(
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
        __Vtemp_35[0U] = (IData)((((QData)((IData)(
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
                                                                                & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_b_ex))))))))));
        __Vtemp_35[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp_35[2U] = (((IData)((((QData)((IData)(
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
                                                                                >> 0x00000010U))))))))))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((((QData)((IData)(
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
        bufp->chgWData(oldp+619,(__Vtemp_35),72);
        bufp->chgQData(oldp+622,((((QData)((IData)(
                                                   (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                     << 0x00000010U) 
                                                    | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                       >> 0x00000010U)))) 
                                   << 0x00000011U) 
                                  | (QData)((IData)(
                                                    (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_51) 
                                                      << 0x00000010U) 
                                                     | (0x0000ffffU 
                                                        & vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex)))))),34);
        bufp->chgQData(oldp+624,((((QData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)) 
                                   << 0x00000011U) 
                                  | (QData)((IData)(
                                                    ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_56)
                                                      ? vlSelfRef.__VdfgRegularize_hebeb780c_0_57
                                                      : vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))),34);
        __Vtemp_36[0U] = (IData)((0x00000003ffffffffULL 
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
                                                                   : vlSelfRef.__VdfgRegularize_hebeb780c_0_58))))));
        __Vtemp_36[1U] = (((IData)((0x00000003ffffffffULL 
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
                                                   & VL_EXTENDS_QI(34,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__))))) 
                           >> 0x0000001eU) | ((IData)(
                                                      ((0x00000003ffffffffULL 
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
        bufp->chgWData(oldp+626,(__Vtemp_36),68);
        bufp->chgIData(oldp+629,((0x0001ffffU & ((- (IData)(
                                                            ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_clpx_img_ex)) 
                                                             & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_is_clpx_ex)))) 
                                                 ^ 
                                                 (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_52) 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.tb_pim_core__DOT__u_core__DOT__mult_dot_op_a_ex 
                                                     >> 0x00000010U))))),17);
        bufp->chgIData(oldp+630,(VL_EXTENDS_II(32,17, vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)),32);
        bufp->chgBit(oldp+631,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i));
        bufp->chgIData(oldp+632,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type),32);
        bufp->chgIData(oldp+633,(VL_SHIFTR_III(32,32,32, vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id, 0x00000014U)),32);
        bufp->chgIData(oldp+634,((((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | ((0x00000fe0U & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x00000014U)) 
                                     | (0x0000001fU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 7U))))),32);
        bufp->chgIData(oldp+635,((((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+636,((0xfffff000U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+637,((((- (IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x0000001fU))) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000014U))))),32);
        bufp->chgIData(oldp+638,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x0000000fU))),32);
        bufp->chgIData(oldp+639,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U))),32);
        bufp->chgIData(oldp+640,((((- (IData)((1U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000018U)))) 
                                   << 5U) | (0x0000001fU 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U)))),32);
        bufp->chgIData(oldp+641,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000019U))),32);
        bufp->chgIData(oldp+642,((((- (IData)((1U & 
                                               (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000018U)))) 
                                   << 6U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6))),32);
        bufp->chgIData(oldp+643,(vlSelfRef.__VdfgRegularize_hebeb780c_0_6),32);
        bufp->chgIData(oldp+644,(((((0x00000300U & 
                                     (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                      >> 0x00000013U)) 
                                    | (3U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                             >> 0x00000017U))) 
                                   << 0x00000010U) 
                                  | ((0x00000300U & 
                                      (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                       >> 0x0000000dU)) 
                                     | ((2U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                               >> 0x00000013U)) 
                                        | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000019U)))))),32);
        bufp->chgIData(oldp+645,(((0x00010000U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 4U)) 
                                  | (1U & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000019U)))),32);
        bufp->chgIData(oldp+646,((((IData)(1U) << (0x0000001fU 
                                                   & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x00000014U))) 
                                  - (IData)(1U))),32);
        bufp->chgBit(oldp+647,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o));
        bufp->chgBit(oldp+648,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q));
        bufp->chgCData(oldp+649,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o),5);
        bufp->chgCData(oldp+650,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x0000000fU))),6);
        bufp->chgCData(oldp+651,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0x00000014U))),6);
        bufp->chgCData(oldp+652,((0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 7U))),6);
        bufp->chgIData(oldp+653,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o),32);
        bufp->chgIData(oldp+654,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                                 [(0x0000001fU & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x00000014U))]),32);
        bufp->chgCData(oldp+655,((3U & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6))),2);
        bufp->chgBit(oldp+656,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__id_valid_q));
        bufp->chgCData(oldp+657,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),5);
        bufp->chgCData(oldp+658,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs),3);
        bufp->chgBit(oldp+659,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q));
        bufp->chgBit(oldp+660,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q));
        bufp->chgBit(oldp+661,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        bufp->chgBit(oldp+662,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q));
        bufp->chgBit(oldp+663,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q));
        bufp->chgCData(oldp+664,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_cmd_ex_q),2);
        bufp->chgCData(oldp+665,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm1_ex_q),6);
        bufp->chgCData(oldp+666,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__pim_imm2_ex_q),6);
        bufp->chgIData(oldp+667,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual),32);
        bufp->chgWData(oldp+668,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem),1024);
        bufp->chgIData(oldp+700,(((((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                          & (0x1fU 
                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                                    & (0x1eU 
                                                       == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                                   << 2U)) 
                                       | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                            & (0x1dU 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                           << 1U) | 
                                          ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (0x1cU 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                      << 0x0000000cU) 
                                     | ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                            & (0x1bU 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                            & (0x1aU 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                           << 2U)) 
                                         | ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                              & (0x19U 
                                                 == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                             << 1U) 
                                            | ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                               & (0x18U 
                                                  == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                        << 8U)) | (
                                                   ((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
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
                                   << 0x00000010U) 
                                  | ((((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (0x0fU 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (0x0eU 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 2U)) | 
                                        ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (0x0dU 
                                              == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
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
                                         << 8U)) | 
                                     (((((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (7U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 3U) | 
                                         (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (6U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 2U)) | 
                                        ((((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                           & (5U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))) 
                                          << 1U) | 
                                         ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                                          & (4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu))))) 
                                       << 4U) | (((
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_we_lsu) 
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
        bufp->chgIData(oldp+701,(((((((((((0x1fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                         << 3U) | (
                                                   ((0x1eU 
                                                     == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                                    & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                                   << 2U)) 
                                       | ((((0x1dU 
                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                           << 1U) | 
                                          ((0x1cU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                      << 0x0000000cU) 
                                     | ((((((0x1bU 
                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                           << 3U) | 
                                          (((0x1aU 
                                             == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                           << 2U)) 
                                         | ((((0x19U 
                                               == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                              & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                             << 1U) 
                                            | ((0x18U 
                                                == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                               & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                        << 8U)) | (
                                                   ((((((0x17U 
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
                                   << 0x00000010U) 
                                  | ((((((((0x0fU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 3U) | 
                                         (((0x0eU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 2U)) | 
                                        ((((0x0dU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 1U) | 
                                         ((0x0cU == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
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
                                         << 8U)) | 
                                     (((((((7U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 3U) | 
                                         (((6U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 2U)) | 
                                        ((((5U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                           & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)) 
                                          << 1U) | 
                                         ((4U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex)) 
                                          & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i)))) 
                                       << 4U) | (((
                                                   ((3U 
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
        bufp->chgCData(oldp+702,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__state),3);
        bufp->chgSData(oldp+703,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h),16);
        bufp->chgIData(oldp+704,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q),32);
        bufp->chgIData(oldp+705,(((IData)(4U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q)),32);
        bufp->chgIData(oldp+706,(((IData)(2U) + vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q)),32);
        bufp->chgBit(oldp+707,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q));
        bufp->chgBit(oldp+708,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q));
        bufp->chgBit(oldp+709,((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))));
        bufp->chgCData(oldp+710,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q),2);
        bufp->chgIData(oldp+711,((IData)((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                                          >> ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                                              << 5U)))),32);
        bufp->chgBit(oldp+712,((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))));
        bufp->chgBit(oldp+713,((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))));
        bufp->chgBit(oldp+714,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q));
        bufp->chgBit(oldp+715,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q));
        bufp->chgQData(oldp+716,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q),64);
        bufp->chgBit(oldp+718,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
                                & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q))));
        bufp->chgCData(oldp+719,((0x0000000fU & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q) 
                                                 | (- (IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))))),4);
        bufp->chgIData(oldp+720,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                                  & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))),32);
        bufp->chgCData(oldp+721,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q) 
                                  & (- (IData)((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))),6);
        bufp->chgBit(oldp+722,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q));
        bufp->chgIData(oldp+723,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q),32);
        bufp->chgBit(oldp+724,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
        bufp->chgCData(oldp+725,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q),4);
        bufp->chgIData(oldp+726,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q),32);
        bufp->chgCData(oldp+727,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q),6);
        bufp->chgBit(oldp+728,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q));
        bufp->chgCData(oldp+729,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q),2);
        bufp->chgCData(oldp+730,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q),2);
        bufp->chgIData(oldp+731,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q),32);
        bufp->chgIData(oldp+732,(((IData)(4U) + (0xfffffffcU 
                                                 & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q))),32);
        bufp->chgBit(oldp+733,((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))));
        bufp->chgCData(oldp+734,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q),2);
        bufp->chgIData(oldp+735,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_addr_int),32);
        bufp->chgCData(oldp+736,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        bufp->chgCData(oldp+737,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgCData(oldp+738,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q),2);
        bufp->chgBit(oldp+739,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
        bufp->chgBit(oldp+740,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q));
        bufp->chgCData(oldp+741,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__wdata_offset),2);
        bufp->chgIData(oldp+742,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),32);
        bufp->chgCData(oldp+743,(((0x20000000U == (0xfff00000U 
                                                   & vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i))
                                   ? 1U : 2U)),2);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity[9U])))) {
        bufp->chgBit(oldp+744,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_load_event_q) 
                                & ((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__data_misaligned_ex)) 
                                   & (IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)))));
        bufp->chgBit(oldp+745,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access) 
                                & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_en_ex) 
                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__apu_lat_ex) 
                                      >> 1U)))));
        bufp->chgIData(oldp+746,((0x0000001fU & ((- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel))))) 
                                                 & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                    >> 0x0000000fU)))),32);
        bufp->chgIData(oldp+747,((vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                                  [(0x0000001fU & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                                    >> 5U))))))),32);
        bufp->chgBit(oldp+748,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                                    == (0x0000001fU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000014U))) 
                                   & (0U != (0x0000001fU 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U)))))));
        bufp->chgBit(oldp+749,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_waddr_ex) 
                                    == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                                   & (0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))));
        bufp->chgBit(oldp+750,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                    == (0x0000001fU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000014U))) 
                                   & (0U != (0x0000001fU 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U)))))));
        bufp->chgBit(oldp+751,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                                & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                                      == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))));
        bufp->chgBit(oldp+752,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec) 
                                & (((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
                                    == (0x0000001fU 
                                        & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                           >> 0x00000014U))) 
                                   & (0U != (0x0000001fU 
                                             & (vlSelfRef.tb_pim_core__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x00000014U)))))));
        bufp->chgBit(oldp+753,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec) 
                                & ((0U != (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i)) 
                                   & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__regfile_alu_waddr_ex) 
                                      == (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))))));
        bufp->chgCData(oldp+754,((3U & ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
                                         ? ((IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid)
                                             ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)
                                             : ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)))
                                         : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q) 
                                            - (IData)(vlSelfRef.tb_pim_core__DOT__data_rvalid))))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+755,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q),32);
        bufp->chgIData(oldp+756,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q),32);
        bufp->chgIData(oldp+757,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+758,(vlSelfRef.tb_pim_core__DOT__data_rdata),32);
        bufp->chgBit(oldp+759,((0U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg))));
        bufp->chgCData(oldp+760,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__state_reg),2);
        bufp->chgIData(oldp+761,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__addr_b_reg),19);
        bufp->chgCData(oldp+762,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q),2);
        bufp->chgBit(oldp+763,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__is_read_q));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+764,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o));
        bufp->chgBit(oldp+765,(vlSelfRef.tb_pim_core__DOT__data_rvalid));
        bufp->chgIData(oldp+766,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__jump_target_id_i),32);
        bufp->chgCData(oldp+767,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn),2);
        bufp->chgIData(oldp+768,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i),32);
        bufp->chgBit(oldp+769,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__wb_ready_i));
        bufp->chgBit(oldp+770,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__lsu_ready_ex_i));
        bufp->chgBit(oldp+771,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i));
        bufp->chgBit(oldp+772,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__wake_from_sleep_i));
        bufp->chgBit(oldp+773,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__illegal_insn_dec));
        bufp->chgBit(oldp+774,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn_dec));
        bufp->chgBit(oldp+775,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
        bufp->chgBit(oldp+776,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_insn_dec));
        bufp->chgBit(oldp+777,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
        bufp->chgBit(oldp+778,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        bufp->chgBit(oldp+779,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        bufp->chgBit(oldp+780,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__fencei_insn_dec));
        bufp->chgBit(oldp+781,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__rega_used_dec));
        bufp->chgBit(oldp+782,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regb_used_dec));
        bufp->chgBit(oldp+783,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_used_dec));
        bufp->chgBit(oldp+784,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o));
        bufp->chgIData(oldp+785,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b),32);
        bufp->chgCData(oldp+786,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i),6);
        bufp->chgBit(oldp+787,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
        bufp->chgCData(oldp+788,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),7);
        bufp->chgCData(oldp+789,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),3);
        bufp->chgCData(oldp+790,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel),3);
        bufp->chgCData(oldp+791,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__alu_op_c_mux_sel),2);
        bufp->chgCData(oldp+792,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__regc_mux),2);
        bufp->chgBit(oldp+793,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+794,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),4);
        bufp->chgCData(oldp+795,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel),2);
        bufp->chgCData(oldp+796,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_operator),3);
        bufp->chgCData(oldp+797,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mult_signed_mode),2);
        bufp->chgBit(oldp+798,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_we_id));
        bufp->chgCData(oldp+799,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_type_id),2);
        bufp->chgCData(oldp+800,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__data_sign_ext_id),2);
        bufp->chgBit(oldp+801,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_access));
        bufp->chgBit(oldp+802,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__csr_status));
        bufp->chgBit(oldp+803,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i));
        bufp->chgBit(oldp+804,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i));
        bufp->chgBit(oldp+805,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i));
        bufp->chgBit(oldp+806,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__mret_dec));
        bufp->chgBit(oldp+807,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__uret_dec));
        bufp->chgBit(oldp+808,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__dret_dec));
        bufp->chgBit(oldp+809,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active));
        bufp->chgBit(oldp+810,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
        bufp->chgBit(oldp+811,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
        bufp->chgBit(oldp+812,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        bufp->chgCData(oldp+813,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        bufp->chgBit(oldp+814,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
        bufp->chgBit(oldp+815,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
        bufp->chgBit(oldp+816,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim));
        bufp->chgIData(oldp+817,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        bufp->chgBit(oldp+818,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgIData(oldp+819,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned),32);
        bufp->chgIData(oldp+820,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        bufp->chgBit(oldp+821,((3U != (3U & vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__instr_aligned))));
        bufp->chgBit(oldp+822,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__count_up));
        bufp->chgBit(oldp+823,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
        bufp->chgIData(oldp+824,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        bufp->chgIData(oldp+825,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
        bufp->chgBit(oldp+826,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en));
        bufp->chgBit(oldp+827,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__sram_req_int));
        bufp->chgBit(oldp+828,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__sram_gnt_i));
        bufp->chgBit(oldp+829,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__rw_int));
        bufp->chgIData(oldp+830,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__addr_int),19);
        bufp->chgCData(oldp+831,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__be_int),4);
        bufp->chgIData(oldp+832,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__data_f2s_int),32);
        bufp->chgBit(oldp+833,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_req));
        bufp->chgBit(oldp+834,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_gnt));
        bufp->chgBit(oldp+835,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_rvalid));
        bufp->chgCData(oldp+836,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_decoder__DOT__err_next),2);
        bufp->chgCData(oldp+837,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_obi_wrapper__DOT__next),2);
        bufp->chgIData(oldp+838,(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__port_a_addr),19);
    }
    bufp->chgBit(oldp+839,(vlSelfRef.tb_pim_core__DOT__clk_i));
    bufp->chgBit(oldp+840,(vlSelfRef.tb_pim_core__DOT__rst_ni));
    bufp->chgBit(oldp+841,(vlSelfRef.tb_pim_core__DOT__instr_rvalid));
    bufp->chgIData(oldp+842,(vlSelfRef.tb_pim_core__DOT__instr_rdata),32);
    bufp->chgBit(oldp+843,(((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en)) 
                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q))));
    bufp->chgIData(oldp+844,(vlSelfRef.tb_pim_core__DOT__cycle_count),32);
    bufp->chgIData(oldp+845,(vlSelfRef.tb_pim_core__DOT__result_add),32);
    bufp->chgIData(oldp+846,(vlSelfRef.tb_pim_core__DOT__result_mul),32);
    bufp->chgBit(oldp+847,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i));
    bufp->chgBit(oldp+848,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__ex_valid_o));
    bufp->chgBit(oldp+849,(((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o)) 
                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__is_pim))));
    bufp->chgBit(oldp+850,(((IData)(vlSelfRef.tb_pim_core__DOT__clk_i) 
                            & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en))));
    bufp->chgCData(oldp+851,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS),3);
    bufp->chgCData(oldp+852,(((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
                              & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o))))))),2);
    bufp->chgCData(oldp+853,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_a_id),5);
    bufp->chgCData(oldp+854,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__id_stage_i__DOT__bmask_b_id),5);
    bufp->chgCData(oldp+855,((3U & (((~ (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                                     & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                                     ? ((IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid)
                                         ? (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                                     : ((IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                                        - (IData)(vlSelfRef.tb_pim_core__DOT__instr_rvalid))))),2);
    bufp->chgIData(oldp+856,(((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
    bufp->chgIData(oldp+857,(((2U & (IData)(vlSelfRef.tb_pim_core__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
    bufp->chgBit(oldp+858,(vlSelfRef.tb_pim_core__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    bufp->chgIData(oldp+859,(((1U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q))
                               ? (vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q 
                                  + vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_b_q)
                               : ((2U == (IData)(vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__pim_cmd_q))
                                   ? vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__mul_result_q
                                   : vlSelfRef.tb_pim_core__DOT__u_pim_subsystem__DOT__u_sram_ctrl__DOT__rdata_a_q))),32);
    bufp->chgBit(oldp+860,((1U & (~ (IData)(vlSelfRef.tb_pim_core__DOT__rst_ni)))));
}

void Vtb_pim_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pim_core___024root__trace_cleanup\n"); );
    // Body
    Vtb_pim_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_pim_core___024root*>(voidSelf);
    Vtb_pim_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[11U] = 0U;
}
