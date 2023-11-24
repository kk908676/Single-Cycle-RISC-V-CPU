// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "VRegisterFile.h"
#include "VRegisterFile__Syms.h"

//==========

VL_CTOR_IMP(VRegisterFile) {
    VRegisterFile__Syms* __restrict vlSymsp = __VlSymsp = new VRegisterFile__Syms(this, name());
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRegisterFile::__Vconfigure(VRegisterFile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    _configure_coverage(vlSymsp, first);
}

VRegisterFile::~VRegisterFile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

// Coverage
#ifndef CHISEL_VL_COVER_INSERT
#define CHISEL_VL_COVER_INSERT(countp, ...) \
    VL_IF_COVER(VerilatedCov::_inserti(countp); VerilatedCov::_insertf(__FILE__, __LINE__); \
                chisel_insertp("hier", name(), __VA_ARGS__))

#ifdef VM_COVERAGE
static void chisel_insertp(
  const char* key0, const char* valp0, const char* key1, const char* valp1,
  const char* key2, int lineno, const char* key3, int column,
  const char* key4, const std::string& hier_str,
  const char* key5, const char* valp5, const char* key6, const char* valp6,
  const char* key7 = nullptr, const char* valp7 = nullptr) {

    std::string val2str = vlCovCvtToStr(lineno);
    std::string val3str = vlCovCvtToStr(column);
    VerilatedCov::_insertp(
        key0, valp0, key1, valp1, key2, val2str.c_str(),
        key3, val3str.c_str(), key4, hier_str.c_str(),
        key5, valp5, key6, valp6, key7, valp7,
        // turn on per instance cover points
        "per_instance", "1");
}
#endif // VM_COVERAGE
#endif // CHISEL_VL_COVER_INSERT


void VRegisterFile::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

void VRegisterFile::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegisterFile::eval\n"); );
    VRegisterFile__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("RegisterFile.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VRegisterFile::_eval_initial_loop(VRegisterFile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
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
            VL_FATAL_MT("RegisterFile.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VRegisterFile::_sequent__TOP__1(VRegisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_sequent__TOP__1\n"); );
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_31 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x1fU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_31 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_30 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x1eU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_30 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_29 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x1dU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_29 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_28 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x1cU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_28 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_27 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x1bU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_27 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_26 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x1aU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_26 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_24 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x18U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_24 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_23 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x17U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_23 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_22 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x16U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_22 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_25 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x19U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_25 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_21 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x15U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_21 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_20 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x14U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_20 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_9 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((9U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_9 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_8 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((8U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_8 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_7 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((7U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_7 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_5 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((5U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_5 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_17 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x11U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_17 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_13 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0xdU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_13 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_19 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x13U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_19 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((1U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_1 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_16 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x10U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_16 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_0 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_0 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_18 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0x12U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_18 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_15 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0xfU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_15 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_6 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((6U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_6 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((3U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_3 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_14 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0xeU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_14 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((2U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_2 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_4 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((4U == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_4 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_10 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0xaU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_10 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_11 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0xbU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_11 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->RegisterFile__DOT__registers_12 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->io_write_enable) & 
                 (0U != (IData)(vlTOPp->io_write_address)))) {
                if ((0xcU == (IData)(vlTOPp->io_write_address))) {
                    vlTOPp->RegisterFile__DOT__registers_12 
                        = vlTOPp->io_write_data;
                }
            }
        }
    }
}

VL_INLINE_OPT void VRegisterFile::_settle__TOP__2(VRegisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_settle__TOP__2\n"); );
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->RegisterFile__DOT___GEN_117 = ((0x15U == (IData)(vlTOPp->io_read_address1))
                                            ? vlTOPp->RegisterFile__DOT__registers_21
                                            : ((0x14U 
                                                == (IData)(vlTOPp->io_read_address1))
                                                ? vlTOPp->RegisterFile__DOT__registers_20
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlTOPp->io_read_address1))
                                                    ? vlTOPp->RegisterFile__DOT__registers_19
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlTOPp->io_read_address1))
                                                     ? vlTOPp->RegisterFile__DOT__registers_18
                                                     : 
                                                    ((0x11U 
                                                      == (IData)(vlTOPp->io_read_address1))
                                                      ? vlTOPp->RegisterFile__DOT__registers_17
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlTOPp->io_read_address1))
                                                       ? vlTOPp->RegisterFile__DOT__registers_16
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->io_read_address1))
                                                        ? vlTOPp->RegisterFile__DOT__registers_15
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlTOPp->io_read_address1))
                                                         ? vlTOPp->RegisterFile__DOT__registers_14
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlTOPp->io_read_address1))
                                                          ? vlTOPp->RegisterFile__DOT__registers_13
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlTOPp->io_read_address1))
                                                           ? vlTOPp->RegisterFile__DOT__registers_12
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlTOPp->io_read_address1))
                                                            ? vlTOPp->RegisterFile__DOT__registers_11
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlTOPp->io_read_address1))
                                                             ? vlTOPp->RegisterFile__DOT__registers_10
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlTOPp->io_read_address1))
                                                              ? vlTOPp->RegisterFile__DOT__registers_9
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlTOPp->io_read_address1))
                                                               ? vlTOPp->RegisterFile__DOT__registers_8
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlTOPp->io_read_address1))
                                                                ? vlTOPp->RegisterFile__DOT__registers_7
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlTOPp->io_read_address1))
                                                                 ? vlTOPp->RegisterFile__DOT__registers_6
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlTOPp->io_read_address1))
                                                                  ? vlTOPp->RegisterFile__DOT__registers_5
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlTOPp->io_read_address1))
                                                                   ? vlTOPp->RegisterFile__DOT__registers_4
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlTOPp->io_read_address1))
                                                                    ? vlTOPp->RegisterFile__DOT__registers_3
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlTOPp->io_read_address1))
                                                                     ? vlTOPp->RegisterFile__DOT__registers_2
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlTOPp->io_read_address1))
                                                                      ? vlTOPp->RegisterFile__DOT__registers_1
                                                                      : vlTOPp->RegisterFile__DOT__registers_0)))))))))))))))))))));
    vlTOPp->RegisterFile__DOT___GEN_149 = ((0x15U == (IData)(vlTOPp->io_read_address2))
                                            ? vlTOPp->RegisterFile__DOT__registers_21
                                            : ((0x14U 
                                                == (IData)(vlTOPp->io_read_address2))
                                                ? vlTOPp->RegisterFile__DOT__registers_20
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlTOPp->io_read_address2))
                                                    ? vlTOPp->RegisterFile__DOT__registers_19
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlTOPp->io_read_address2))
                                                     ? vlTOPp->RegisterFile__DOT__registers_18
                                                     : 
                                                    ((0x11U 
                                                      == (IData)(vlTOPp->io_read_address2))
                                                      ? vlTOPp->RegisterFile__DOT__registers_17
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlTOPp->io_read_address2))
                                                       ? vlTOPp->RegisterFile__DOT__registers_16
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->io_read_address2))
                                                        ? vlTOPp->RegisterFile__DOT__registers_15
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlTOPp->io_read_address2))
                                                         ? vlTOPp->RegisterFile__DOT__registers_14
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlTOPp->io_read_address2))
                                                          ? vlTOPp->RegisterFile__DOT__registers_13
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlTOPp->io_read_address2))
                                                           ? vlTOPp->RegisterFile__DOT__registers_12
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlTOPp->io_read_address2))
                                                            ? vlTOPp->RegisterFile__DOT__registers_11
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlTOPp->io_read_address2))
                                                             ? vlTOPp->RegisterFile__DOT__registers_10
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlTOPp->io_read_address2))
                                                              ? vlTOPp->RegisterFile__DOT__registers_9
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlTOPp->io_read_address2))
                                                               ? vlTOPp->RegisterFile__DOT__registers_8
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlTOPp->io_read_address2))
                                                                ? vlTOPp->RegisterFile__DOT__registers_7
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlTOPp->io_read_address2))
                                                                 ? vlTOPp->RegisterFile__DOT__registers_6
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlTOPp->io_read_address2))
                                                                  ? vlTOPp->RegisterFile__DOT__registers_5
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlTOPp->io_read_address2))
                                                                   ? vlTOPp->RegisterFile__DOT__registers_4
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlTOPp->io_read_address2))
                                                                    ? vlTOPp->RegisterFile__DOT__registers_3
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlTOPp->io_read_address2))
                                                                     ? vlTOPp->RegisterFile__DOT__registers_2
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlTOPp->io_read_address2))
                                                                      ? vlTOPp->RegisterFile__DOT__registers_1
                                                                      : vlTOPp->RegisterFile__DOT__registers_0)))))))))))))))))))));
    vlTOPp->RegisterFile__DOT___GEN_181 = ((0x15U == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->RegisterFile__DOT__registers_21
                                            : ((0x14U 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->RegisterFile__DOT__registers_20
                                                : (
                                                   (0x13U 
                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                    ? vlTOPp->RegisterFile__DOT__registers_19
                                                    : 
                                                   ((0x12U 
                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                     ? vlTOPp->RegisterFile__DOT__registers_18
                                                     : 
                                                    ((0x11U 
                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                      ? vlTOPp->RegisterFile__DOT__registers_17
                                                      : 
                                                     ((0x10U 
                                                       == (IData)(vlTOPp->io_debug_read_address))
                                                       ? vlTOPp->RegisterFile__DOT__registers_16
                                                       : 
                                                      ((0xfU 
                                                        == (IData)(vlTOPp->io_debug_read_address))
                                                        ? vlTOPp->RegisterFile__DOT__registers_15
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlTOPp->io_debug_read_address))
                                                         ? vlTOPp->RegisterFile__DOT__registers_14
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(vlTOPp->io_debug_read_address))
                                                          ? vlTOPp->RegisterFile__DOT__registers_13
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlTOPp->io_debug_read_address))
                                                           ? vlTOPp->RegisterFile__DOT__registers_12
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlTOPp->io_debug_read_address))
                                                            ? vlTOPp->RegisterFile__DOT__registers_11
                                                            : 
                                                           ((0xaU 
                                                             == (IData)(vlTOPp->io_debug_read_address))
                                                             ? vlTOPp->RegisterFile__DOT__registers_10
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlTOPp->io_debug_read_address))
                                                              ? vlTOPp->RegisterFile__DOT__registers_9
                                                              : 
                                                             ((8U 
                                                               == (IData)(vlTOPp->io_debug_read_address))
                                                               ? vlTOPp->RegisterFile__DOT__registers_8
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlTOPp->io_debug_read_address))
                                                                ? vlTOPp->RegisterFile__DOT__registers_7
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlTOPp->io_debug_read_address))
                                                                 ? vlTOPp->RegisterFile__DOT__registers_6
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlTOPp->io_debug_read_address))
                                                                  ? vlTOPp->RegisterFile__DOT__registers_5
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlTOPp->io_debug_read_address))
                                                                   ? vlTOPp->RegisterFile__DOT__registers_4
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                                    ? vlTOPp->RegisterFile__DOT__registers_3
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                                     ? vlTOPp->RegisterFile__DOT__registers_2
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                                      ? vlTOPp->RegisterFile__DOT__registers_1
                                                                      : vlTOPp->RegisterFile__DOT__registers_0)))))))))))))))))))));
    vlTOPp->io_read_data1 = ((0U == (IData)(vlTOPp->io_read_address1))
                              ? 0U : ((0x1fU == (IData)(vlTOPp->io_read_address1))
                                       ? vlTOPp->RegisterFile__DOT__registers_31
                                       : ((0x1eU == (IData)(vlTOPp->io_read_address1))
                                           ? vlTOPp->RegisterFile__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlTOPp->io_read_address1))
                                               ? vlTOPp->RegisterFile__DOT__registers_29
                                               : ((0x1cU 
                                                   == (IData)(vlTOPp->io_read_address1))
                                                   ? vlTOPp->RegisterFile__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlTOPp->io_read_address1))
                                                    ? vlTOPp->RegisterFile__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlTOPp->io_read_address1))
                                                     ? vlTOPp->RegisterFile__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlTOPp->io_read_address1))
                                                      ? vlTOPp->RegisterFile__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlTOPp->io_read_address1))
                                                       ? vlTOPp->RegisterFile__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlTOPp->io_read_address1))
                                                        ? vlTOPp->RegisterFile__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlTOPp->io_read_address1))
                                                         ? vlTOPp->RegisterFile__DOT__registers_22
                                                         : vlTOPp->RegisterFile__DOT___GEN_117)))))))))));
    vlTOPp->io_read_data2 = ((0U == (IData)(vlTOPp->io_read_address2))
                              ? 0U : ((0x1fU == (IData)(vlTOPp->io_read_address2))
                                       ? vlTOPp->RegisterFile__DOT__registers_31
                                       : ((0x1eU == (IData)(vlTOPp->io_read_address2))
                                           ? vlTOPp->RegisterFile__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlTOPp->io_read_address2))
                                               ? vlTOPp->RegisterFile__DOT__registers_29
                                               : ((0x1cU 
                                                   == (IData)(vlTOPp->io_read_address2))
                                                   ? vlTOPp->RegisterFile__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlTOPp->io_read_address2))
                                                    ? vlTOPp->RegisterFile__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlTOPp->io_read_address2))
                                                     ? vlTOPp->RegisterFile__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlTOPp->io_read_address2))
                                                      ? vlTOPp->RegisterFile__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlTOPp->io_read_address2))
                                                       ? vlTOPp->RegisterFile__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlTOPp->io_read_address2))
                                                        ? vlTOPp->RegisterFile__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlTOPp->io_read_address2))
                                                         ? vlTOPp->RegisterFile__DOT__registers_22
                                                         : vlTOPp->RegisterFile__DOT___GEN_149)))))))))));
    vlTOPp->io_debug_read_data = ((0U == (IData)(vlTOPp->io_debug_read_address))
                                   ? 0U : ((0x1fU == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->RegisterFile__DOT__registers_31
                                            : ((0x1eU 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->RegisterFile__DOT__registers_30
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlTOPp->io_debug_read_address))
                                                    ? vlTOPp->RegisterFile__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlTOPp->io_debug_read_address))
                                                     ? vlTOPp->RegisterFile__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlTOPp->io_debug_read_address))
                                                      ? vlTOPp->RegisterFile__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == (IData)(vlTOPp->io_debug_read_address))
                                                       ? vlTOPp->RegisterFile__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlTOPp->io_debug_read_address))
                                                        ? vlTOPp->RegisterFile__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlTOPp->io_debug_read_address))
                                                         ? vlTOPp->RegisterFile__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlTOPp->io_debug_read_address))
                                                          ? vlTOPp->RegisterFile__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlTOPp->io_debug_read_address))
                                                           ? vlTOPp->RegisterFile__DOT__registers_22
                                                           : vlTOPp->RegisterFile__DOT___GEN_181)))))))))));
}

void VRegisterFile::_eval(VRegisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_eval\n"); );
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRegisterFile::_eval_initial(VRegisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_eval_initial\n"); );
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRegisterFile::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::final\n"); );
    // Variables
    VRegisterFile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegisterFile::_eval_settle(VRegisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_eval_settle\n"); );
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VRegisterFile::_change_request(VRegisterFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_change_request\n"); );
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VRegisterFile::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_write_enable & 0xfeU))) {
        Verilated::overWidthError("io_write_enable");}
    if (VL_UNLIKELY((io_write_address & 0xe0U))) {
        Verilated::overWidthError("io_write_address");}
    if (VL_UNLIKELY((io_read_address1 & 0xe0U))) {
        Verilated::overWidthError("io_read_address1");}
    if (VL_UNLIKELY((io_read_address2 & 0xe0U))) {
        Verilated::overWidthError("io_read_address2");}
    if (VL_UNLIKELY((io_debug_read_address & 0xe0U))) {
        Verilated::overWidthError("io_debug_read_address");}
}
#endif  // VL_DEBUG

void VRegisterFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_write_enable = VL_RAND_RESET_I(1);
    io_write_address = VL_RAND_RESET_I(5);
    io_write_data = VL_RAND_RESET_I(32);
    io_read_address1 = VL_RAND_RESET_I(5);
    io_read_address2 = VL_RAND_RESET_I(5);
    io_read_data1 = VL_RAND_RESET_I(32);
    io_read_data2 = VL_RAND_RESET_I(32);
    io_debug_read_address = VL_RAND_RESET_I(5);
    io_debug_read_data = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_0 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_1 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_2 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_3 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_4 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_5 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_6 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_7 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_8 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_9 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_10 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_11 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_12 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_13 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_14 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_15 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_16 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_17 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_18 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_19 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_20 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_21 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_22 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_23 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_24 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_25 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_26 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_27 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_28 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_29 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_30 = VL_RAND_RESET_I(32);
    RegisterFile__DOT__registers_31 = VL_RAND_RESET_I(32);
    RegisterFile__DOT___GEN_117 = VL_RAND_RESET_I(32);
    RegisterFile__DOT___GEN_149 = VL_RAND_RESET_I(32);
    RegisterFile__DOT___GEN_181 = VL_RAND_RESET_I(32);
}

void VRegisterFile::_configure_coverage(VRegisterFile__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
}