// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule.h"
#include "VTestTopModule__Syms.h"

//==========

VL_CTOR_IMP(VTestTopModule) {
    VTestTopModule__Syms* __restrict vlSymsp = __VlSymsp = new VTestTopModule__Syms(this, name());
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestTopModule::__Vconfigure(VTestTopModule__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    _configure_coverage(vlSymsp, first);
}

VTestTopModule::~VTestTopModule() {
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


void VTestTopModule::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp);
}

void VTestTopModule::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestTopModule::eval\n"); );
    VTestTopModule__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("TestTopModule.sv", 1635, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTestTopModule::_eval_initial_loop(VTestTopModule__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("TestTopModule.sv", 1635, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTestTopModule::_initial__TOP__1(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_initial__TOP__1\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*351:0*/ __Vtemp1[11];
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x6d62696eU;
    __Vtemp1[2U] = 0x622e6173U;
    __Vtemp1[3U] = 0x6f672f73U;
    __Vtemp1[4U] = 0x6572696cU;
    __Vtemp1[5U] = 0x62332f76U;
    __Vtemp1[6U] = 0x332d6c61U;
    __Vtemp1[7U] = 0x61323032U;
    __Vtemp1[8U] = 0x616e2f63U;
    __Vtemp1[9U] = 0x6f6d652fU;
    __Vtemp1[0xaU] = 0x2f68U;
    VL_READMEM_N(true, 32, 12, 0, VL_CVT_PACK_STR_NW(11, __Vtemp1)
                 , vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                 , 0, ~VL_ULL(0));
}

VL_INLINE_OPT void VTestTopModule::_sequent__TOP__2(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_sequent__TOP__2\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0;
    // Body
    vlTOPp->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
        = vlTOPp->TestTopModule__DOT__rom_loader__DOT__address;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0U;
    vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlTOPp->io_mem_debug_read_address 
                      >> 2U));
    vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0 
        = (0x1fffU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    if (((IData)(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable) 
         & ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                   & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? (1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                       : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 8U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable) 
         & ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                   & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? (0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                       : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0xffU & vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable) 
         & ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                   & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? (3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                       : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 0x18U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable) 
         & ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                   & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                       : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 0x10U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    vlTOPp->TestTopModule__DOT__CPU_clkdiv = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : ((3U 
                                                   == (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv))
                                                   ? 0U
                                                   : (IData)(vlTOPp->TestTopModule__DOT___CPU_next_T_2)));
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0) {
        vlTOPp->TestTopModule__DOT__mem__DOT__mem_1[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0) {
        vlTOPp->TestTopModule__DOT__mem__DOT__mem_0[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0) {
        vlTOPp->TestTopModule__DOT__mem__DOT__mem_3[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0) {
        vlTOPp->TestTopModule__DOT__mem__DOT__mem_2[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    }
    vlTOPp->io_mem_debug_read_data = (((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                                        [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x18U) | 
                                       (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                        [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x10U)) 
                                      | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                          [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                          << 8U) | 
                                         vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                         [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]));
    vlTOPp->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock 
        = (0U == (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv));
}

void VTestTopModule::_settle__TOP__3(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_settle__TOP__3\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv)));
    vlTOPp->io_mem_debug_read_data = (((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                                        [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x18U) | 
                                       (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                        [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x10U)) 
                                      | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                          [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                          << 8U) | 
                                         vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                         [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock 
        = (0U == (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv));
    vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlTOPp->io_regs_debug_read_address))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->io_regs_debug_read_address))
                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->io_regs_debug_read_address))
                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->io_regs_debug_read_address))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->io_regs_debug_read_address))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->io_regs_debug_read_address))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->io_regs_debug_read_address))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->io_regs_debug_read_address))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->io_regs_debug_read_address))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->io_regs_debug_read_address))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->io_regs_debug_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->io_regs_debug_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->io_regs_debug_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->io_regs_debug_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->io_regs_debug_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->io_regs_debug_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->io_regs_debug_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->io_regs_debug_read_address))
                                                           ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->io_regs_debug_read_address))
                                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->io_regs_debug_read_address))
                                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->io_regs_debug_read_address))
                                                              ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlTOPp->TestTopModule__DOT__rom_loader__DOT__address);
    vlTOPp->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0xbU == vlTOPp->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid));
    vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                 << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                              << 0x10U)) | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                             << 8U) 
                                            | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]))
            : 0U);
    vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                 << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                              << 0x10U)) | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                             << 8U) 
                                            | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]))
            : 0x13U);
    vlTOPp->io_regs_debug_read_data = ((0U == (IData)(vlTOPp->io_regs_debug_read_address))
                                        ? 0U : ((0x1fU 
                                                 == (IData)(vlTOPp->io_regs_debug_read_address))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlTOPp->io_regs_debug_read_address))
                                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == (IData)(vlTOPp->io_regs_debug_read_address))
                                                   ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlTOPp->io_regs_debug_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlTOPp->io_regs_debug_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlTOPp->io_regs_debug_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlTOPp->io_regs_debug_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlTOPp->io_regs_debug_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlTOPp->io_regs_debug_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlTOPp->io_regs_debug_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable 
        = (((((((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                | (0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
               | (3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
              | (0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
           | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)));
    vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
               & (0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))
            : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source 
        = (((((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
              | (0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))
            ? 0U : ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                     ? 1U : (((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))
                              ? 3U : 0U)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 
        = ((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : ((0x40000000U 
                                        & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                        ? 2U : 1U))))))))
            : ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
               | ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                  | ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                     | ((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                        | ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                           | ((0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address 
        = ((0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? 0U : (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xfU)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 
        = ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141 
        = ((0xdU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                              >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                          >> 0x14U)))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0x14U)))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                      : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct 
        = ((0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117 
        = ((0x15U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                           ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                              ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? (0xfffff000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
            : ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                                : ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154 
        = ((0x1aU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                               >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                           >> 0x14U)))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0x14U)))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                      : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141)))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? 0U : ((0x1fU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                     : ((0x1eU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                   ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
        = ((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                  ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                               & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction) 
                                              | ((0x800U 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))))
            : ((0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? (0xfffff000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                : vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_55));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0x14U))) ? 0U : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1 
        = ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1
            : vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2
            : vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate);
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
        = (VL_ULL(0x7fffffffffffffff) & ((1U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                          ? (QData)((IData)(
                                                            (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                             + vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                          : ((2U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                              ? (QData)((IData)(
                                                                (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                 - vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                              : ((3U 
                                                  == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                  ? 
                                                 ((QData)((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     VL_LTS_III(32,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                       ^ vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                        | vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                         & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct)) 
                                                                           & (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                              < vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 
        = ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? (0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
            : (2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0xcU))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 
        = ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? (0U != (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
            : (2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0xcU))));
    vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (0x1fffffffU & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))
            : (IData)(((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                        ? (VL_ULL(0x7ffffffff) & (VL_ULL(0x1000) 
                                                  + 
                                                  ((QData)((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)) 
                                                   << 2U)))
                        : VL_ULL(0))));
    vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (IData)(((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                        ? VL_ULL(0) : ((0x23U == (0x7fU 
                                                  & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                        ? (VL_ULL(0xffffffffff) 
                                           & ((0U == 
                                               (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                               ? ((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))) 
                                                  << 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                      << 3U)))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))) 
                                                    << 0x10U))
                                                   : (QData)((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))))
                                        : VL_ULL(0))))
            : ((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                ? ((0xbU >= (0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))
                    ? vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                   [(0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)]
                    : 0U) : 0U));
    vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 
        = ((4U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? ((2U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? (0xffU & 
                                           (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                            >> 0x10U))
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? (0xffU 
                                               & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                  >> 8U))
                                            : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (0xffU 
                                                   & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                : (0xffU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                      >> 0x18U)))))
            : ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((2U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? ((((0x800000U 
                                                  & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                  ? 0xffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                     >> 0x10U)))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (
                                                   (((0x8000U 
                                                      & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                         >> 8U)))
                                                : (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? 
                                                   ((((0x80U 
                                                       & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data))
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                          >> 0x18U))))))
                : 0U));
    vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data 
        = ((3U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source))
            ? ((IData)(4U) + vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((1U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source))
                ? ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0xcU))) ? vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data
                        : ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                         >> 0xcU)))
                            ? ((0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                ? (0xffffU & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                : (0xffffU & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                              >> 0x10U)))
                            : ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                             >> 0xcU)))
                                ? ((0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? ((((0x8000U & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data))
                                    : ((((0x80000000U 
                                          & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & 
                                          (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                           >> 0x10U))))
                                : vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                    : 0U) : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)));
}

VL_INLINE_OPT void VTestTopModule::_sequent__TOP__4(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_sequent__TOP__4\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1fU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1eU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1dU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1cU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1bU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x1aU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x18U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x17U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x16U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x19U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x15U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x14U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x11U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x13U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x10U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0x12U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xfU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xeU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((9U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((8U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((7U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((5U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xdU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((1U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((6U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((3U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((2U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((4U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xaU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xbU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->reset)))) {
            if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable) 
                 & (0U != (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 7U))))) {
                if ((0xcU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U)))) {
                    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 
                        = vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
    } else {
        if (vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid) {
            vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = ((((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                     | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                    | ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                       & ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 
                          (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                           >= vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                           : ((6U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                  < vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                               : ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? VL_GTES_III(1,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                   : ((4U == (7U & 
                                              (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                       ? VL_LTS_III(1,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                       : ((1U == (7U 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0xcU)))
                                           ? (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                              != vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                           : ((0U == 
                                               (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU))) 
                                              & (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                 == vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))))))))
                    ? (vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
                       + vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1)
                    : vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1);
        }
    }
    vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
}

VL_INLINE_OPT void VTestTopModule::_sequent__TOP__5(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_sequent__TOP__5\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = 0U;
    } else {
        if ((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)) {
            vlTOPp->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
                = vlTOPp->TestTopModule__DOT__rom_loader__DOT___address_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid = 0U;
    } else {
        if ((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)) {
            vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid 
                = vlTOPp->TestTopModule__DOT__rom_loader__DOT___GEN_0;
        }
    }
    vlTOPp->TestTopModule__DOT__rom_loader__DOT__address 
        = vlTOPp->__Vdly__TestTopModule__DOT__rom_loader__DOT__address;
    vlTOPp->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlTOPp->TestTopModule__DOT__rom_loader__DOT__address);
    vlTOPp->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0xbU == vlTOPp->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid));
    vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                 << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                              << 0x10U)) | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                             << 8U) 
                                            | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]))
            : 0U);
    vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                 << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                              << 0x10U)) | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                             << 8U) 
                                            | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]))
            : 0x13U);
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable 
        = (((((((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                | (0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
               | (3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
              | (0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
           | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)));
    vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
               & (0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))
            : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source 
        = (((((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
              | (0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
             | (0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
            | (0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))
            ? 0U : ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                     ? 1U : (((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))
                              ? 3U : 0U)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 
        = ((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : ((0x40000000U 
                                        & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                        ? 2U : 1U))))))))
            : ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
               | ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                  | ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                     | ((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                        | ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                           | ((0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address 
        = ((0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? 0U : (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xfU)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 
        = ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)));
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct 
        = ((0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? (0xfffff000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
            : ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                                : ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
        = ((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? ((((0x80000000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                  ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                               & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction) 
                                              | ((0x800U 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))))
            : ((0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                ? (0xfffff000U & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)
                : vlTOPp->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_55));
}

VL_INLINE_OPT void VTestTopModule::_combo__TOP__6(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_combo__TOP__6\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlTOPp->io_regs_debug_read_address))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->io_regs_debug_read_address))
                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->io_regs_debug_read_address))
                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->io_regs_debug_read_address))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->io_regs_debug_read_address))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->io_regs_debug_read_address))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->io_regs_debug_read_address))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->io_regs_debug_read_address))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->io_regs_debug_read_address))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->io_regs_debug_read_address))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->io_regs_debug_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->io_regs_debug_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->io_regs_debug_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->io_regs_debug_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->io_regs_debug_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->io_regs_debug_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->io_regs_debug_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->io_regs_debug_read_address))
                                                           ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->io_regs_debug_read_address))
                                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->io_regs_debug_read_address))
                                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->io_regs_debug_read_address))
                                                              ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->io_regs_debug_read_data = ((0U == (IData)(vlTOPp->io_regs_debug_read_address))
                                        ? 0U : ((0x1fU 
                                                 == (IData)(vlTOPp->io_regs_debug_read_address))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlTOPp->io_regs_debug_read_address))
                                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == (IData)(vlTOPp->io_regs_debug_read_address))
                                                   ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlTOPp->io_regs_debug_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlTOPp->io_regs_debug_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlTOPp->io_regs_debug_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlTOPp->io_regs_debug_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlTOPp->io_regs_debug_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlTOPp->io_regs_debug_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlTOPp->io_regs_debug_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))));
}

VL_INLINE_OPT void VTestTopModule::_multiclk__TOP__7(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_multiclk__TOP__7\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141 
        = ((0xdU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                              >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                  >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                          >> 0x14U)))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                            >> 0x14U)))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0x14U)))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                      : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117 
        = ((0x15U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                           ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                              ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154 
        = ((0x1aU == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                               >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x14U))) ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                           >> 0x14U)))
                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0x14U)))
                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0x14U)))
                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0x14U)))
                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0x14U)))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0x14U)))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                          >> 0x14U)))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                      : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141)))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? 0U : ((0x1fU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                     : ((0x1eU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                   ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0x14U))) ? 0U : ((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0x14U)))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0x14U)))
                                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0x14U)))
                                                   ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0x14U)))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0x14U)))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1 
        = ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1
            : vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((0x33U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2
            : vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate);
    vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
        = (VL_ULL(0x7fffffffffffffff) & ((1U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                          ? (QData)((IData)(
                                                            (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                             + vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                          : ((2U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                              ? (QData)((IData)(
                                                                (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                 - vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                              : ((3U 
                                                  == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                  ? 
                                                 ((QData)((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     VL_LTS_III(32,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                       ^ vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                        | vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                         & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct)) 
                                                                           & (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                                              < vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))))))))))))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 
        = ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? (0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
            : (2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0xcU))));
    vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 
        = ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? (0U != (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
            : (2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                            >> 0xcU))));
    vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (0x1fffffffU & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))
            : (IData)(((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                        ? (VL_ULL(0x7ffffffff) & (VL_ULL(0x1000) 
                                                  + 
                                                  ((QData)((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)) 
                                                   << 2U)))
                        : VL_ULL(0))));
    vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
        = ((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (IData)(((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                        ? VL_ULL(0) : ((0x23U == (0x7fU 
                                                  & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                        ? (VL_ULL(0xffffffffff) 
                                           & ((0U == 
                                               (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                               ? ((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))) 
                                                  << 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                      << 3U)))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))) 
                                                    << 0x10U))
                                                   : (QData)((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))))
                                        : VL_ULL(0))))
            : ((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                ? ((0xbU >= (0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))
                    ? vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                   [(0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)]
                    : 0U) : 0U));
    vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 
        = ((4U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                         >> 0xcU))) ? ((2U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? (0xffU & 
                                           (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                            >> 0x10U))
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? (0xffU 
                                               & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                  >> 8U))
                                            : ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (0xffU 
                                                   & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                : (0xffU 
                                                   & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                      >> 0x18U)))))
            : ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                             >> 0xcU))) ? ((2U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? ((((0x800000U 
                                                  & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                  ? 0xffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                     >> 0x10U)))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (
                                                   (((0x8000U 
                                                      & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                         >> 8U)))
                                                : (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? 
                                                   ((((0x80U 
                                                       & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data))
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                          >> 0x18U))))))
                : 0U));
    vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data 
        = ((3U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source))
            ? ((IData)(4U) + vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((1U == (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source))
                ? ((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                    ? ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0xcU))) ? vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data
                        : ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                         >> 0xcU)))
                            ? ((0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                ? (0xffffU & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                : (0xffffU & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                              >> 0x10U)))
                            : ((1U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                             >> 0xcU)))
                                ? ((0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? ((((0x8000U & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data))
                                    : ((((0x80000000U 
                                          & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                          ? 0xffffU
                                          : 0U) << 0x10U) 
                                       | (0xffffU & 
                                          (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                           >> 0x10U))))
                                : vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                    : 0U) : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)));
}

void VTestTopModule::_eval(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_eval\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__TestTopModule__DOT__cpu__DOT__regs_clock)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if ((((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__TestTopModule__DOT__cpu__DOT__regs_clock))) 
         | ((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))))) {
        vlTOPp->_multiclk__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__TestTopModule__DOT__cpu__DOT__regs_clock 
        = vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock;
}

void VTestTopModule::_eval_initial(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_eval_initial\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__TestTopModule__DOT__cpu__DOT__regs_clock 
        = vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock;
}

void VTestTopModule::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::final\n"); );
    // Variables
    VTestTopModule__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTestTopModule::_eval_settle(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_eval_settle\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData VTestTopModule::_change_request(VTestTopModule__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_change_request\n"); );
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTestTopModule::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_regs_debug_read_address & 0xe0U))) {
        Verilated::overWidthError("io_regs_debug_read_address");}
}
#endif  // VL_DEBUG

void VTestTopModule::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_mem_debug_read_address = VL_RAND_RESET_I(32);
    io_regs_debug_read_address = VL_RAND_RESET_I(5);
    io_regs_debug_read_data = VL_RAND_RESET_I(32);
    io_mem_debug_read_data = VL_RAND_RESET_I(32);
    TestTopModule__DOT__mem_io_bundle_address = VL_RAND_RESET_I(32);
    TestTopModule__DOT__mem_io_bundle_write_data = VL_RAND_RESET_I(32);
    TestTopModule__DOT__mem_io_bundle_write_enable = VL_RAND_RESET_I(1);
    TestTopModule__DOT__cpu_io_memory_bundle_read_data = VL_RAND_RESET_I(32);
    TestTopModule__DOT__CPU_clkdiv = VL_RAND_RESET_I(2);
    TestTopModule__DOT___CPU_next_T_2 = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            TestTopModule__DOT__mem__DOT__mem_0[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            TestTopModule__DOT__mem__DOT__mem_1[__Vi0] = VL_RAND_RESET_I(8);
    }}
    TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            TestTopModule__DOT__mem__DOT__mem_2[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            TestTopModule__DOT__mem__DOT__mem_3[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<12; ++__Vi0) {
            TestTopModule__DOT__instruction_rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    TestTopModule__DOT__rom_loader__DOT__valid = VL_RAND_RESET_I(1);
    TestTopModule__DOT__rom_loader__DOT___address_T_1 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__rom_loader__DOT___GEN_0 = VL_RAND_RESET_I(1);
    TestTopModule__DOT__cpu__DOT__regs_clock = VL_RAND_RESET_I(1);
    TestTopModule__DOT__cpu__DOT__regs_io_read_data1 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs_io_read_data2 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address = VL_RAND_RESET_I(5);
    TestTopModule__DOT__cpu__DOT__id_io_ex_immediate = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source = VL_RAND_RESET_I(2);
    TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable = VL_RAND_RESET_I(1);
    TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_55 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct = VL_RAND_RESET_I(4);
    TestTopModule__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 = VL_RAND_RESET_Q(63);
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 = VL_RAND_RESET_I(4);
    TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 = VL_RAND_RESET_I(32);
    TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 = VL_RAND_RESET_I(1);
    TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 = VL_RAND_RESET_I(1);
    __Vdly__TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
}

void VTestTopModule::_configure_coverage(VTestTopModule__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {}  // Prevent unused
}