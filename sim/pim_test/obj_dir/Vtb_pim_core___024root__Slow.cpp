// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pim_core.h for the primary calling header

#include "Vtb_pim_core__pch.h"

void Vtb_pim_core___024root___ctor_var_reset(Vtb_pim_core___024root* vlSelf);

Vtb_pim_core___024root::Vtb_pim_core___024root(Vtb_pim_core__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_pim_core___024root___ctor_var_reset(this);
}

void Vtb_pim_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_pim_core___024root::~Vtb_pim_core___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
