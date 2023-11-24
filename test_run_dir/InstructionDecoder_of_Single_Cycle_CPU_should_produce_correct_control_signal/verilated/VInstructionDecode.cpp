// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionDecode.h for the primary calling header

#include "VInstructionDecode.h"
#include "VInstructionDecode__Syms.h"

//==========

VL_CTOR_IMP(VInstructionDecode) {
    VInstructionDecode__Syms* __restrict vlSymsp = __VlSymsp = new VInstructionDecode__Syms(this, name());
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstructionDecode::__Vconfigure(VInstructionDecode__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    _configure_coverage(vlSymsp, first);
}

VInstructionDecode::~VInstructionDecode() {
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


void VInstructionDecode::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

void VInstructionDecode::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstructionDecode::eval\n"); );
    VInstructionDecode__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("InstructionDecode.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VInstructionDecode::_eval_initial_loop(VInstructionDecode__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("InstructionDecode.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VInstructionDecode::_combo__TOP__1(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_combo__TOP__1\n"); );
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_regs_reg1_read_address = ((0x37U == 
                                          (0x7fU & vlTOPp->io_instruction))
                                          ? 0U : (0x1fU 
                                                  & (vlTOPp->io_instruction 
                                                     >> 0xfU)));
    vlTOPp->io_regs_reg2_read_address = (0x1fU & (vlTOPp->io_instruction 
                                                  >> 0x14U));
    vlTOPp->io_ex_aluop1_source = (((0x17U == (0x7fU 
                                               & vlTOPp->io_instruction)) 
                                    | (0x63U == (0x7fU 
                                                 & vlTOPp->io_instruction))) 
                                   | (0x6fU == (0x7fU 
                                                & vlTOPp->io_instruction)));
    vlTOPp->io_ex_aluop2_source = (0x33U != (0x7fU 
                                             & vlTOPp->io_instruction));
    vlTOPp->io_memory_read_enable = (3U == (0x7fU & vlTOPp->io_instruction));
    vlTOPp->io_memory_write_enable = (0x23U == (0x7fU 
                                                & vlTOPp->io_instruction));
    vlTOPp->io_wb_reg_write_source = (((((0x33U == 
                                          (0x7fU & vlTOPp->io_instruction)) 
                                         | (0x13U == 
                                            (0x7fU 
                                             & vlTOPp->io_instruction))) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->io_instruction))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->io_instruction)))
                                       ? 0U : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->io_instruction))
                                                ? 1U
                                                : (
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->io_instruction)) 
                                                    | (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->io_instruction)))
                                                    ? 3U
                                                    : 0U)));
    vlTOPp->io_reg_write_enable = (((((((0x33U == (0x7fU 
                                                   & vlTOPp->io_instruction)) 
                                        | (0x13U == 
                                           (0x7fU & vlTOPp->io_instruction))) 
                                       | (3U == (0x7fU 
                                                 & vlTOPp->io_instruction))) 
                                      | (0x17U == (0x7fU 
                                                   & vlTOPp->io_instruction))) 
                                     | (0x37U == (0x7fU 
                                                  & vlTOPp->io_instruction))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlTOPp->io_instruction))) 
                                   | (0x67U == (0x7fU 
                                                & vlTOPp->io_instruction)));
    vlTOPp->io_reg_write_address = (0x1fU & (vlTOPp->io_instruction 
                                             >> 7U));
    vlTOPp->InstructionDecode__DOT___immediate_T_9 
        = ((((0x80000000U & vlTOPp->io_instruction)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->io_instruction 
                                               >> 0x14U)));
    vlTOPp->InstructionDecode__DOT___immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->io_instruction))
            ? (0xfffff000U & vlTOPp->io_instruction)
            : ((0x63U == (0x7fU & vlTOPp->io_instruction))
                ? ((((0x80000000U & vlTOPp->io_instruction)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->io_instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->io_instruction 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->io_instruction))
                    ? ((((0x80000000U & vlTOPp->io_instruction)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->io_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->io_instruction 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->io_instruction))
                        ? vlTOPp->InstructionDecode__DOT___immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->io_instruction))
                            ? vlTOPp->InstructionDecode__DOT___immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->io_instruction))
                                ? vlTOPp->InstructionDecode__DOT___immediate_T_9
                                : ((((0x80000000U & vlTOPp->io_instruction)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->io_instruction 
                                                   >> 0x14U)))))))));
    vlTOPp->io_ex_immediate = ((0x6fU == (0x7fU & vlTOPp->io_instruction))
                                ? ((((0x80000000U & vlTOPp->io_instruction)
                                      ? 0xfffU : 0U) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlTOPp->io_instruction) 
                                                 | ((0x800U 
                                                     & (vlTOPp->io_instruction 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0x14U)))))
                                : ((0x17U == (0x7fU 
                                              & vlTOPp->io_instruction))
                                    ? (0xfffff000U 
                                       & vlTOPp->io_instruction)
                                    : vlTOPp->InstructionDecode__DOT___immediate_T_55));
}

void VInstructionDecode::_eval(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval\n"); );
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VInstructionDecode::_eval_initial(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval_initial\n"); );
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionDecode::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::final\n"); );
    // Variables
    VInstructionDecode__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionDecode::_eval_settle(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval_settle\n"); );
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VInstructionDecode::_change_request(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_change_request\n"); );
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstructionDecode::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

void VInstructionDecode::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_regs_reg1_read_address = VL_RAND_RESET_I(5);
    io_regs_reg2_read_address = VL_RAND_RESET_I(5);
    io_ex_immediate = VL_RAND_RESET_I(32);
    io_ex_aluop1_source = VL_RAND_RESET_I(1);
    io_ex_aluop2_source = VL_RAND_RESET_I(1);
    io_memory_read_enable = VL_RAND_RESET_I(1);
    io_memory_write_enable = VL_RAND_RESET_I(1);
    io_wb_reg_write_source = VL_RAND_RESET_I(2);
    io_reg_write_enable = VL_RAND_RESET_I(1);
    io_reg_write_address = VL_RAND_RESET_I(5);
    InstructionDecode__DOT___immediate_T_9 = VL_RAND_RESET_I(32);
    InstructionDecode__DOT___immediate_T_55 = VL_RAND_RESET_I(32);
}

void VInstructionDecode::_configure_coverage(VInstructionDecode__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
}