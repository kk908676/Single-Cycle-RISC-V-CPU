// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExecute.h for the primary calling header

#include "VExecute.h"
#include "VExecute__Syms.h"

//==========

VL_CTOR_IMP(VExecute) {
    VExecute__Syms* __restrict vlSymsp = __VlSymsp = new VExecute__Syms(this, name());
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VExecute::__Vconfigure(VExecute__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    _configure_coverage(vlSymsp, first);
}

VExecute::~VExecute() {
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


void VExecute::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

void VExecute::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExecute::eval\n"); );
    VExecute__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("Execute.sv", 61, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VExecute::_eval_initial_loop(VExecute__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("Execute.sv", 61, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VExecute::_combo__TOP__1(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_combo__TOP__1\n"); );
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_if_jump_flag = (((0x6fU == (0x7fU & vlTOPp->io_instruction)) 
                                | (0x67U == (0x7fU 
                                             & vlTOPp->io_instruction))) 
                               | ((0x63U == (0x7fU 
                                             & vlTOPp->io_instruction)) 
                                  & ((7U == (7U & (vlTOPp->io_instruction 
                                                   >> 0xcU)))
                                      ? (vlTOPp->io_reg1_data 
                                         >= vlTOPp->io_reg2_data)
                                      : ((6U == (7U 
                                                 & (vlTOPp->io_instruction 
                                                    >> 0xcU)))
                                          ? (vlTOPp->io_reg1_data 
                                             < vlTOPp->io_reg2_data)
                                          : ((5U == 
                                              (7U & 
                                               (vlTOPp->io_instruction 
                                                >> 0xcU)))
                                              ? VL_GTES_III(1,32,32, vlTOPp->io_reg1_data, vlTOPp->io_reg2_data)
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->io_instruction 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_LTS_III(1,32,32, vlTOPp->io_reg1_data, vlTOPp->io_reg2_data)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->io_instruction 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlTOPp->io_reg1_data 
                                                   != vlTOPp->io_reg2_data)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->io_instruction 
                                                        >> 0xcU))) 
                                                   & (vlTOPp->io_reg1_data 
                                                      == vlTOPp->io_reg2_data)))))))));
    vlTOPp->io_if_jump_address = (vlTOPp->io_immediate 
                                  + ((0x67U == (0x7fU 
                                                & vlTOPp->io_instruction))
                                      ? vlTOPp->io_reg1_data
                                      : vlTOPp->io_instruction_address));
    vlTOPp->Execute__DOT__alu_io_op2 = ((IData)(vlTOPp->io_aluop2_source)
                                         ? vlTOPp->io_immediate
                                         : vlTOPp->io_reg2_data);
    vlTOPp->Execute__DOT__alu_ctrl__DOT___GEN_7 = (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->io_instruction))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->io_instruction 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlTOPp->io_instruction)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->io_instruction 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->io_instruction 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->io_instruction 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->io_instruction 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->io_instruction 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlTOPp->io_instruction)
                                                            ? 2U
                                                            : 1U))))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->io_instruction)) 
                                                    | ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->io_instruction)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->io_instruction)) 
                                                          | ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->io_instruction)) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->io_instruction)) 
                                                                | ((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlTOPp->io_instruction)) 
                                                                   | (0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlTOPp->io_instruction)))))))));
    vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct = (
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->io_instruction))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->io_instruction 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlTOPp->io_instruction)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->io_instruction 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->io_instruction 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->io_instruction 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->io_instruction 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->io_instruction 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 1U)))))))
                                                    : (IData)(vlTOPp->Execute__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->io_mem_alu_result = (IData)((VL_ULL(0x7fffffffffffffff) 
                                         & ((1U == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                             ? (QData)((IData)(
                                                               (vlTOPp->io_reg1_data 
                                                                + vlTOPp->Execute__DOT__alu_io_op2)))
                                             : ((2U 
                                                 == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                 ? (QData)((IData)(
                                                                   (vlTOPp->io_reg1_data 
                                                                    - vlTOPp->Execute__DOT__alu_io_op2)))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                  ? 
                                                 ((QData)((IData)(vlTOPp->io_reg1_data)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->Execute__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     VL_LTS_III(32,32,32, vlTOPp->io_reg1_data, vlTOPp->Execute__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->io_reg1_data 
                                                                       ^ vlTOPp->Execute__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->io_reg1_data 
                                                                        | vlTOPp->Execute__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->io_reg1_data 
                                                                         & vlTOPp->Execute__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         (vlTOPp->io_reg1_data 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlTOPp->Execute__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlTOPp->io_reg1_data, 
                                                                                (0x1fU 
                                                                                & vlTOPp->Execute__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct)) 
                                                                           & (vlTOPp->io_reg1_data 
                                                                              < vlTOPp->Execute__DOT__alu_io_op2)))))))))))))));
}

void VExecute::_eval(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval\n"); );
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VExecute::_eval_initial(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval_initial\n"); );
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExecute::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::final\n"); );
    // Variables
    VExecute__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExecute::_eval_settle(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval_settle\n"); );
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VExecute::_change_request(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_change_request\n"); );
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExecute::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_aluop1_source & 0xfeU))) {
        Verilated::overWidthError("io_aluop1_source");}
    if (VL_UNLIKELY((io_aluop2_source & 0xfeU))) {
        Verilated::overWidthError("io_aluop2_source");}
}
#endif  // VL_DEBUG

void VExecute::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_instruction_address = VL_RAND_RESET_I(32);
    io_reg1_data = VL_RAND_RESET_I(32);
    io_reg2_data = VL_RAND_RESET_I(32);
    io_immediate = VL_RAND_RESET_I(32);
    io_aluop1_source = VL_RAND_RESET_I(1);
    io_aluop2_source = VL_RAND_RESET_I(1);
    io_mem_alu_result = VL_RAND_RESET_I(32);
    io_if_jump_flag = VL_RAND_RESET_I(1);
    io_if_jump_address = VL_RAND_RESET_I(32);
    Execute__DOT__alu_io_op2 = VL_RAND_RESET_I(32);
    Execute__DOT__alu_ctrl_io_alu_funct = VL_RAND_RESET_I(4);
    Execute__DOT__alu_ctrl__DOT___GEN_7 = VL_RAND_RESET_I(4);
}

void VExecute::_configure_coverage(VExecute__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
}