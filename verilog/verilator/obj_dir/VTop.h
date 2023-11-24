// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"

//==========

class VTop__Syms;
class VTop_VerilatedVcd;


//----------

VL_MODULE(VTop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_memory_bundle_write_enable,0,0);
    VL_OUT8(io_memory_bundle_write_strobe_0,0,0);
    VL_OUT8(io_memory_bundle_write_strobe_1,0,0);
    VL_OUT8(io_memory_bundle_write_strobe_2,0,0);
    VL_OUT8(io_memory_bundle_write_strobe_3,0,0);
    VL_IN8(io_instruction_valid,0,0);
    VL_OUT8(io_deviceSelect,2,0);
    VL_IN8(io_debug_read_address,4,0);
    VL_OUT(io_instruction_address,31,0);
    VL_IN(io_instruction,31,0);
    VL_OUT(io_memory_bundle_address,31,0);
    VL_OUT(io_memory_bundle_write_data,31,0);
    VL_IN(io_memory_bundle_read_data,31,0);
    VL_OUT(io_debug_read_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ Top__DOT__cpu__DOT__id_io_regs_reg1_read_address;
    CData/*1:0*/ Top__DOT__cpu__DOT__id_io_wb_reg_write_source;
    CData/*0:0*/ Top__DOT__cpu__DOT__id_io_reg_write_enable;
    CData/*3:0*/ Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct;
    CData/*3:0*/ Top__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7;
    CData/*0:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_13;
    CData/*0:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_16;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs_io_read_data1;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs_io_read_data2;
    IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch_io_instruction;
    IData/*31:0*/ Top__DOT__cpu__DOT__id_io_ex_immediate;
    IData/*31:0*/ Top__DOT__cpu__DOT__wb_io_regs_write_data;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_0;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_1;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_2;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_3;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_4;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_5;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_6;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_7;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_8;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_9;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_10;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_11;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_12;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_13;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_14;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_15;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_16;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_17;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_18;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_19;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_20;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_21;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_22;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_23;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_24;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_25;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_26;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_27;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_28;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_29;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_30;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_31;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT___GEN_117;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT___GEN_141;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT___GEN_154;
    IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT___GEN_181;
    IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
    IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1;
    IData/*31:0*/ Top__DOT__cpu__DOT__id__DOT___immediate_T_9;
    IData/*31:0*/ Top__DOT__cpu__DOT__id__DOT___immediate_T_55;
    IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT__alu_io_op2;
    IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT___io_if_jump_address_T_1;
    IData/*31:0*/ Top__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67;
    QData/*62:0*/ Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop__Syms* symsp, bool first);
  private:
    static QData _change_request(VTop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VTop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
