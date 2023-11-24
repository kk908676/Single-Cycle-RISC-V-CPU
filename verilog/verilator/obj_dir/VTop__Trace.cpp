// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t = (VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTop::traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop::traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate 
                           + ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                               ? vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1
                               : vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc))),32);
    }
}

void VTop::traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,((0x1fffffffU & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),32);
        vcdp->chgBus(c+17,((IData)(((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                     ? VL_ULL(0) : 
                                    ((0x23U == (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                      ? (VL_ULL(0xffffffffff) 
                                         & ((0U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                             ? ((QData)((IData)(
                                                                (0x1ffU 
                                                                 & vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2))) 
                                                << 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                    << 3U)))
                                             : ((1U 
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
                                      : VL_ULL(0))))),32);
        vcdp->chgBit(c+25,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                            & (0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))));
        vcdp->chgBit(c+33,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                            & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? (0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->chgBit(c+41,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                            & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? (1U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->chgBit(c+49,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                            & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? (2U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->chgBit(c+57,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                            & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? (3U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->chgBit(c+65,(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable));
        vcdp->chgBus(c+73,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 7U))),5);
        vcdp->chgBus(c+81,(vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data),32);
        vcdp->chgBus(c+89,(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address),5);
        vcdp->chgBus(c+97,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                     >> 0x14U))),5);
        vcdp->chgBus(c+105,(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1),32);
        vcdp->chgBus(c+113,(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2),32);
        vcdp->chgBit(c+121,((((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                             | ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                       >= vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                    : ((6U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                        ? (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                           < vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                        : ((5U == (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0xcU)))
                                            ? VL_GTES_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0xcU)))
                                                ? VL_LTS_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                    != vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0xcU))) 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                                       == vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)))))))))));
        vcdp->chgBus(c+129,(vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction),32);
        vcdp->chgBus(c+137,(vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate),32);
        vcdp->chgBit(c+145,((0x33U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->chgBit(c+153,((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->chgBit(c+161,((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->chgBus(c+169,(vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source),2);
        vcdp->chgBus(c+177,((IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)),32);
        vcdp->chgBus(c+185,((7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+193,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)),7);
        vcdp->chgBus(c+201,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+209,(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct),4);
        vcdp->chgBus(c+217,(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2),32);
        vcdp->chgBus(c+225,((0x7fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+233,((3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),2);
    }
}

void VTop::traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+241,(vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        vcdp->chgBus(c+249,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0),32);
        vcdp->chgBus(c+257,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1),32);
        vcdp->chgBus(c+265,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2),32);
        vcdp->chgBus(c+273,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3),32);
        vcdp->chgBus(c+281,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4),32);
        vcdp->chgBus(c+289,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5),32);
        vcdp->chgBus(c+297,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6),32);
        vcdp->chgBus(c+305,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7),32);
        vcdp->chgBus(c+313,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8),32);
        vcdp->chgBus(c+321,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9),32);
        vcdp->chgBus(c+329,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10),32);
        vcdp->chgBus(c+337,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11),32);
        vcdp->chgBus(c+345,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12),32);
        vcdp->chgBus(c+353,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13),32);
        vcdp->chgBus(c+361,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14),32);
        vcdp->chgBus(c+369,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15),32);
        vcdp->chgBus(c+377,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16),32);
        vcdp->chgBus(c+385,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17),32);
        vcdp->chgBus(c+393,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18),32);
        vcdp->chgBus(c+401,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19),32);
        vcdp->chgBus(c+409,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20),32);
        vcdp->chgBus(c+417,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21),32);
        vcdp->chgBus(c+425,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22),32);
        vcdp->chgBus(c+433,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23),32);
        vcdp->chgBus(c+441,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24),32);
        vcdp->chgBus(c+449,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25),32);
        vcdp->chgBus(c+457,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26),32);
        vcdp->chgBus(c+465,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27),32);
        vcdp->chgBus(c+473,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28),32);
        vcdp->chgBus(c+481,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29),32);
        vcdp->chgBus(c+489,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30),32);
        vcdp->chgBus(c+497,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31),32);
    }
}

void VTop::traceChgThis__5(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+505,(vlTOPp->clock));
        vcdp->chgBit(c+513,(vlTOPp->reset));
        vcdp->chgBus(c+521,(vlTOPp->io_instruction_address),32);
        vcdp->chgBus(c+529,(vlTOPp->io_instruction),32);
        vcdp->chgBus(c+537,(vlTOPp->io_memory_bundle_address),32);
        vcdp->chgBus(c+545,(vlTOPp->io_memory_bundle_write_data),32);
        vcdp->chgBit(c+553,(vlTOPp->io_memory_bundle_write_enable));
        vcdp->chgBit(c+561,(vlTOPp->io_memory_bundle_write_strobe_0));
        vcdp->chgBit(c+569,(vlTOPp->io_memory_bundle_write_strobe_1));
        vcdp->chgBit(c+577,(vlTOPp->io_memory_bundle_write_strobe_2));
        vcdp->chgBit(c+585,(vlTOPp->io_memory_bundle_write_strobe_3));
        vcdp->chgBus(c+593,(vlTOPp->io_memory_bundle_read_data),32);
        vcdp->chgBit(c+601,(vlTOPp->io_instruction_valid));
        vcdp->chgBus(c+609,(vlTOPp->io_deviceSelect),3);
        vcdp->chgBus(c+617,(vlTOPp->io_debug_read_address),5);
        vcdp->chgBus(c+625,(vlTOPp->io_debug_read_data),32);
        vcdp->chgBus(c+633,(((0U == (IData)(vlTOPp->io_debug_read_address))
                              ? 0U : ((0x1fU == (IData)(vlTOPp->io_debug_read_address))
                                       ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                                       : ((0x1eU == (IData)(vlTOPp->io_debug_read_address))
                                           ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlTOPp->io_debug_read_address))
                                               ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                                               : ((0x1cU 
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
                                                         : vlTOPp->Top__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))))),32);
        vcdp->chgBus(c+641,(((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                              ? ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                  ? vlTOPp->io_memory_bundle_read_data
                                  : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                      ? ((0U == (3U 
                                                 & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                          ? (0xffffU 
                                             & vlTOPp->io_memory_bundle_read_data)
                                          : (0xffffU 
                                             & (vlTOPp->io_memory_bundle_read_data 
                                                >> 0x10U)))
                                      : ((1U == (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0xcU)))
                                          ? ((0U == 
                                              (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                              ? (((
                                                   (0x8000U 
                                                    & vlTOPp->io_memory_bundle_read_data)
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlTOPp->io_memory_bundle_read_data))
                                              : (((
                                                   (0x80000000U 
                                                    & vlTOPp->io_memory_bundle_read_data)
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (vlTOPp->io_memory_bundle_read_data 
                                                       >> 0x10U))))
                                          : vlTOPp->Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                              : 0U)),32);
    }
}
