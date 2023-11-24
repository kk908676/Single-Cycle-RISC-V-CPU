// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

//==========

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTop::~VTop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VTop::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval\n"); );
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top.v", 1115, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top.v", 1115, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop::_initial__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_initial__TOP__1\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_deviceSelect = 0U;
}

VL_INLINE_OPT void VTop::_sequent__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_sequent__TOP__2\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
    } else {
        if (vlTOPp->io_instruction_valid) {
            vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = ((((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                     | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                    | ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                       & ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 
                          (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                           >= vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                           : ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                  < vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                               : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? VL_GTES_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                   : ((4U == (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                       ? VL_LTS_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                       : ((1U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0xcU)))
                                           ? (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                              != vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                           : ((0U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU))) 
                                              & (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                 == vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)))))))))
                    ? (vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate 
                       + vlTOPp->Top__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1)
                    : vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1fU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1eU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1dU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1cU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1bU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x18U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x17U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x16U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x19U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x15U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x14U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x11U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x13U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x10U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x12U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xfU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xeU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((9U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((8U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((7U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((5U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xdU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((1U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((6U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((3U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((2U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((4U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xaU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xbU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xcU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12 
                        = vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    vlTOPp->io_instruction_address = vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
    vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
}

void VTop::_settle__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_settle__TOP__3\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
        = ((IData)(vlTOPp->io_instruction_valid) ? vlTOPp->io_instruction
            : 0x13U);
    vlTOPp->io_instruction_address = vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
    vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlTOPp->io_debug_read_address))
            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->io_debug_read_address))
                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->io_debug_read_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->io_debug_read_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->io_debug_read_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->io_debug_read_address))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->io_debug_read_address))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->io_debug_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->io_debug_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->io_debug_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->io_debug_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->io_debug_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->io_debug_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->io_debug_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->io_debug_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->io_debug_read_address))
                                                              ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->io_memory_bundle_write_enable = ((3U != 
                                              (0x7fU 
                                               & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                             & (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)));
    vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable 
        = (((((((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                | (0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
               | (3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
              | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
           | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)));
    vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source 
        = (((((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
              | (0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))
            ? 0U : ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                     ? 1U : (((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))
                              ? 3U : 0U)));
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 
        = ((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : ((0x40000000U 
                                        & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                        ? 2U : 1U))))))))
            : ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
               | ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                  | ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                     | ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                        | ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                           | ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))))))));
    vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address 
        = ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? 0U : (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xfU)));
    vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9 
        = ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)));
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_141 
        = ((0xdU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                              >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                          >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                      : vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))));
    vlTOPp->io_debug_read_data = ((0U == (IData)(vlTOPp->io_debug_read_address))
                                   ? 0U : ((0x1fU == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                                            : ((0x1eU 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == (IData)(vlTOPp->io_debug_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlTOPp->io_debug_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlTOPp->io_debug_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlTOPp->io_debug_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlTOPp->io_debug_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                           : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))));
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct 
        = ((0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_117 
        = ((0x15U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                              ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? (0xfffff000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
            : ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                        ? vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                            ? vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                ? vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9
                                : ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))))))));
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_154 
        = ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                               >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                           >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14
                                                      : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_141)))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? 0U : ((0x1fU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                     : ((0x1eU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                 ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))));
    vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate 
        = ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                  ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                               & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction) 
                                              | ((0x800U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))))
            : ((0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? (0xfffff000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                : vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_55));
    vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0x14U))) ? 0U : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_154))))));
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1 
        = ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1
            : vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2
            : vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate);
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
        = (VL_ULL(0x7fffffffffffffff) & ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                          ? (QData)((IData)(
                                                            (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                             + vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                          : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                              ? (QData)((IData)(
                                                                (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                 - vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                              : ((3U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                  ? 
                                                 ((QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     VL_LTS_III(32,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                       ^ vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                        | vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                         & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct)) 
                                                                           & (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                              < vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))))))))))))));
    vlTOPp->io_memory_bundle_address = (0x1fffffffU 
                                        & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9));
    vlTOPp->io_memory_bundle_write_data = (IData)((
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                                     ? 
                                                    (VL_ULL(0xffffffffff) 
                                                     & ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((QData)((IData)(
                                                                         (0x1ffU 
                                                                          & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2))) 
                                                         << 
                                                         (0x18U 
                                                          & ((IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                             << 3U)))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                           ? (QData)((IData)(
                                                                             (0x1ffffU 
                                                                              & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)))
                                                           : 
                                                          ((QData)((IData)(
                                                                           (0x1ffffU 
                                                                            & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2))) 
                                                           << 0x10U))
                                                          : (QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)))))
                                                     : VL_ULL(0))));
    vlTOPp->Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 
        = ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? ((2U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? (0xffU & 
                                           (vlTOPp->io_memory_bundle_read_data 
                                            >> 0x10U))
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? (0xffU 
                                               & (vlTOPp->io_memory_bundle_read_data 
                                                  >> 8U))
                                            : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (0xffU 
                                                   & vlTOPp->io_memory_bundle_read_data)
                                                : (0xffU 
                                                   & (vlTOPp->io_memory_bundle_read_data 
                                                      >> 0x18U)))))
            : ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((2U == (3U 
                                                   & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? ((((0x800000U 
                                                  & vlTOPp->io_memory_bundle_read_data)
                                                  ? 0xffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlTOPp->io_memory_bundle_read_data 
                                                     >> 0x10U)))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (
                                                   (((0x8000U 
                                                      & vlTOPp->io_memory_bundle_read_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlTOPp->io_memory_bundle_read_data 
                                                         >> 8U)))
                                                : (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? 
                                                   ((((0x80U 
                                                       & vlTOPp->io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlTOPp->io_memory_bundle_read_data))
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlTOPp->io_memory_bundle_read_data 
                                                          >> 0x18U))))))
                : 0U));
    vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13 = 
        ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                       >> 0xcU))) ? (0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
          : (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                          >> 0xcU))));
    vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16 = 
        ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                       >> 0xcU))) ? (0U != (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
          : (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                          >> 0xcU))));
    vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source))
            ? ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source))
                ? ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0xcU))) ? vlTOPp->io_memory_bundle_read_data
                        : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                         >> 0xcU)))
                            ? ((0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                ? (0xffffU & vlTOPp->io_memory_bundle_read_data)
                                : (0xffffU & (vlTOPp->io_memory_bundle_read_data 
                                              >> 0x10U)))
                            : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                             >> 0xcU)))
                                ? ((0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? ((((0x8000U & vlTOPp->io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & vlTOPp->io_memory_bundle_read_data))
                                    : ((((0x80000000U 
                                          & vlTOPp->io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & 
                                          (vlTOPp->io_memory_bundle_read_data 
                                           >> 0x10U))))
                                : vlTOPp->Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                    : 0U) : (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)));
    vlTOPp->io_memory_bundle_write_strobe_0 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))));
    vlTOPp->io_memory_bundle_write_strobe_1 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))));
    vlTOPp->io_memory_bundle_write_strobe_2 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))));
    vlTOPp->io_memory_bundle_write_strobe_3 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))));
}

VL_INLINE_OPT void VTop::_combo__TOP__4(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_combo__TOP__4\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
        = ((IData)(vlTOPp->io_instruction_valid) ? vlTOPp->io_instruction
            : 0x13U);
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlTOPp->io_debug_read_address))
            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->io_debug_read_address))
                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->io_debug_read_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->io_debug_read_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->io_debug_read_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->io_debug_read_address))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->io_debug_read_address))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->io_debug_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->io_debug_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->io_debug_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->io_debug_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->io_debug_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->io_debug_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->io_debug_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->io_debug_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->io_debug_read_address))
                                                              ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->io_memory_bundle_write_enable = ((3U != 
                                              (0x7fU 
                                               & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                             & (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)));
    vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable 
        = (((((((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                | (0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
               | (3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
              | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
           | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)));
    vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source 
        = (((((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
              | (0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))
            ? 0U : ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                     ? 1U : (((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))
                              ? 3U : 0U)));
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 
        = ((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : ((0x40000000U 
                                        & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                        ? 2U : 1U))))))))
            : ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
               | ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                  | ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                     | ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                        | ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                           | ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))))))));
    vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address 
        = ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? 0U : (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xfU)));
    vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9 
        = ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)));
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_141 
        = ((0xdU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                              >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                          >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                      : vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))));
    vlTOPp->io_debug_read_data = ((0U == (IData)(vlTOPp->io_debug_read_address))
                                   ? 0U : ((0x1fU == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                                            : ((0x1eU 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == (IData)(vlTOPp->io_debug_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlTOPp->io_debug_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlTOPp->io_debug_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlTOPp->io_debug_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlTOPp->io_debug_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                           : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))));
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct 
        = ((0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_117 
        = ((0x15U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                              ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? (0xfffff000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
            : ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                        ? vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                            ? vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                ? vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_9
                                : ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))))))));
    vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_154 
        = ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                               >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                           >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14
                                                      : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_141)))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? 0U : ((0x1fU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                     : ((0x1eU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                 ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                         ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                             ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))));
    vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate 
        = ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                  ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                               & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction) 
                                              | ((0x800U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))))
            : ((0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? (0xfffff000U & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)
                : vlTOPp->Top__DOT__cpu__DOT__id__DOT___immediate_T_55));
    vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0x14U))) ? 0U : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_154))))));
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1 
        = ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1
            : vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2
            : vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate);
    vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
        = (VL_ULL(0x7fffffffffffffff) & ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                          ? (QData)((IData)(
                                                            (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                             + vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                          : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                              ? (QData)((IData)(
                                                                (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                 - vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                              : ((3U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                  ? 
                                                 ((QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     VL_LTS_III(32,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                       ^ vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                        | vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                         & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct)) 
                                                                           & (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                                              < vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2))))))))))))));
    vlTOPp->io_memory_bundle_address = (0x1fffffffU 
                                        & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9));
    vlTOPp->io_memory_bundle_write_data = (IData)((
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                                    ? VL_ULL(0)
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                                     ? 
                                                    (VL_ULL(0xffffffffff) 
                                                     & ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((QData)((IData)(
                                                                         (0x1ffU 
                                                                          & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2))) 
                                                         << 
                                                         (0x18U 
                                                          & ((IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                             << 3U)))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                           ? (QData)((IData)(
                                                                             (0x1ffffU 
                                                                              & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)))
                                                           : 
                                                          ((QData)((IData)(
                                                                           (0x1ffffU 
                                                                            & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2))) 
                                                           << 0x10U))
                                                          : (QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)))))
                                                     : VL_ULL(0))));
    vlTOPp->Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 
        = ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? ((2U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? (0xffU & 
                                           (vlTOPp->io_memory_bundle_read_data 
                                            >> 0x10U))
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? (0xffU 
                                               & (vlTOPp->io_memory_bundle_read_data 
                                                  >> 8U))
                                            : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (0xffU 
                                                   & vlTOPp->io_memory_bundle_read_data)
                                                : (0xffU 
                                                   & (vlTOPp->io_memory_bundle_read_data 
                                                      >> 0x18U)))))
            : ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((2U == (3U 
                                                   & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? ((((0x800000U 
                                                  & vlTOPp->io_memory_bundle_read_data)
                                                  ? 0xffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlTOPp->io_memory_bundle_read_data 
                                                     >> 0x10U)))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (
                                                   (((0x8000U 
                                                      & vlTOPp->io_memory_bundle_read_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlTOPp->io_memory_bundle_read_data 
                                                         >> 8U)))
                                                : (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? 
                                                   ((((0x80U 
                                                       & vlTOPp->io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlTOPp->io_memory_bundle_read_data))
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlTOPp->io_memory_bundle_read_data 
                                                          >> 0x18U))))))
                : 0U));
    vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13 = 
        ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                       >> 0xcU))) ? (0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
          : (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                          >> 0xcU))));
    vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16 = 
        ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                       >> 0xcU))) ? (0U != (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
          : (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                          >> 0xcU))));
    vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source))
            ? ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source))
                ? ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0xcU))) ? vlTOPp->io_memory_bundle_read_data
                        : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                         >> 0xcU)))
                            ? ((0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                ? (0xffffU & vlTOPp->io_memory_bundle_read_data)
                                : (0xffffU & (vlTOPp->io_memory_bundle_read_data 
                                              >> 0x10U)))
                            : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                             >> 0xcU)))
                                ? ((0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? ((((0x8000U & vlTOPp->io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & vlTOPp->io_memory_bundle_read_data))
                                    : ((((0x80000000U 
                                          & vlTOPp->io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & 
                                          (vlTOPp->io_memory_bundle_read_data 
                                           >> 0x10U))))
                                : vlTOPp->Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                    : 0U) : (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)));
    vlTOPp->io_memory_bundle_write_strobe_0 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))));
    vlTOPp->io_memory_bundle_write_strobe_1 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))));
    vlTOPp->io_memory_bundle_write_strobe_2 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))));
    vlTOPp->io_memory_bundle_write_strobe_3 = ((3U 
                                                != 
                                                (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                               & ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                                  & ((0U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0xcU)))
                                                      ? 
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))));
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_initial\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_settle\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_instruction_valid & 0xfeU))) {
        Verilated::overWidthError("io_instruction_valid");}
    if (VL_UNLIKELY((io_debug_read_address & 0xe0U))) {
        Verilated::overWidthError("io_debug_read_address");}
}
#endif  // VL_DEBUG

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction_address = VL_RAND_RESET_I(32);
    io_instruction = VL_RAND_RESET_I(32);
    io_memory_bundle_address = VL_RAND_RESET_I(32);
    io_memory_bundle_write_data = VL_RAND_RESET_I(32);
    io_memory_bundle_write_enable = VL_RAND_RESET_I(1);
    io_memory_bundle_write_strobe_0 = VL_RAND_RESET_I(1);
    io_memory_bundle_write_strobe_1 = VL_RAND_RESET_I(1);
    io_memory_bundle_write_strobe_2 = VL_RAND_RESET_I(1);
    io_memory_bundle_write_strobe_3 = VL_RAND_RESET_I(1);
    io_memory_bundle_read_data = VL_RAND_RESET_I(32);
    io_instruction_valid = VL_RAND_RESET_I(1);
    io_deviceSelect = VL_RAND_RESET_I(3);
    io_debug_read_address = VL_RAND_RESET_I(5);
    io_debug_read_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs_io_read_data1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs_io_read_data2 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__inst_fetch_io_instruction = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__id_io_regs_reg1_read_address = VL_RAND_RESET_I(5);
    Top__DOT__cpu__DOT__id_io_ex_immediate = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__id_io_wb_reg_write_source = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__id_io_reg_write_enable = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__wb_io_regs_write_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_0 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_2 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_3 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_4 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_5 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_6 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_7 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_8 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_9 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_10 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_11 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_12 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_13 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_14 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_15 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_16 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_17 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_18 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_19 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_20 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_21 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_22 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_23 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_24 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_25 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_26 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_27 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_28 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_29 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_30 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT__registers_31 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT___GEN_117 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT___GEN_141 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT___GEN_154 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__regs__DOT___GEN_181 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__id__DOT___immediate_T_9 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__id__DOT___immediate_T_55 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__ex__DOT__alu_io_op2 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct = VL_RAND_RESET_I(4);
    Top__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 = VL_RAND_RESET_Q(63);
    Top__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 = VL_RAND_RESET_I(4);
    Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__mem__DOT___GEN_13 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__mem__DOT___GEN_16 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
