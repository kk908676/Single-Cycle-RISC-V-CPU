// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VREGISTERFILE_H_
#define _VREGISTERFILE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VRegisterFile__Syms;

//----------

VL_MODULE(VRegisterFile) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_write_enable,0,0);
    VL_IN8(io_write_address,4,0);
    VL_IN8(io_read_address1,4,0);
    VL_IN8(io_read_address2,4,0);
    VL_IN8(io_debug_read_address,4,0);
    VL_IN(io_write_data,31,0);
    VL_OUT(io_read_data1,31,0);
    VL_OUT(io_read_data2,31,0);
    VL_OUT(io_debug_read_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ RegisterFile__DOT__registers_0;
    IData/*31:0*/ RegisterFile__DOT__registers_1;
    IData/*31:0*/ RegisterFile__DOT__registers_2;
    IData/*31:0*/ RegisterFile__DOT__registers_3;
    IData/*31:0*/ RegisterFile__DOT__registers_4;
    IData/*31:0*/ RegisterFile__DOT__registers_5;
    IData/*31:0*/ RegisterFile__DOT__registers_6;
    IData/*31:0*/ RegisterFile__DOT__registers_7;
    IData/*31:0*/ RegisterFile__DOT__registers_8;
    IData/*31:0*/ RegisterFile__DOT__registers_9;
    IData/*31:0*/ RegisterFile__DOT__registers_10;
    IData/*31:0*/ RegisterFile__DOT__registers_11;
    IData/*31:0*/ RegisterFile__DOT__registers_12;
    IData/*31:0*/ RegisterFile__DOT__registers_13;
    IData/*31:0*/ RegisterFile__DOT__registers_14;
    IData/*31:0*/ RegisterFile__DOT__registers_15;
    IData/*31:0*/ RegisterFile__DOT__registers_16;
    IData/*31:0*/ RegisterFile__DOT__registers_17;
    IData/*31:0*/ RegisterFile__DOT__registers_18;
    IData/*31:0*/ RegisterFile__DOT__registers_19;
    IData/*31:0*/ RegisterFile__DOT__registers_20;
    IData/*31:0*/ RegisterFile__DOT__registers_21;
    IData/*31:0*/ RegisterFile__DOT__registers_22;
    IData/*31:0*/ RegisterFile__DOT__registers_23;
    IData/*31:0*/ RegisterFile__DOT__registers_24;
    IData/*31:0*/ RegisterFile__DOT__registers_25;
    IData/*31:0*/ RegisterFile__DOT__registers_26;
    IData/*31:0*/ RegisterFile__DOT__registers_27;
    IData/*31:0*/ RegisterFile__DOT__registers_28;
    IData/*31:0*/ RegisterFile__DOT__registers_29;
    IData/*31:0*/ RegisterFile__DOT__registers_30;
    IData/*31:0*/ RegisterFile__DOT__registers_31;
    IData/*31:0*/ RegisterFile__DOT___GEN_117;
    IData/*31:0*/ RegisterFile__DOT___GEN_149;
    IData/*31:0*/ RegisterFile__DOT___GEN_181;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VRegisterFile__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VRegisterFile);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VRegisterFile(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VRegisterFile();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VRegisterFile__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VRegisterFile__Syms* symsp, bool first);
  private:
    static QData _change_request(VRegisterFile__Syms* __restrict vlSymsp);
    void _configure_coverage(VRegisterFile__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VRegisterFile__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VRegisterFile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VRegisterFile__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VRegisterFile__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VRegisterFile__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
