// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VINSTRUCTIONFETCH_H_
#define _VINSTRUCTIONFETCH_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VInstructionFetch__Syms;

//----------

VL_MODULE(VInstructionFetch) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_jump_flag_id,0,0);
    VL_IN8(io_instruction_valid,0,0);
    VL_IN(io_jump_address_id,31,0);
    VL_IN(io_instruction_read_data,31,0);
    VL_OUT(io_instruction_address,31,0);
    VL_OUT(io_instruction,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ InstructionFetch__DOT__pc;
    IData/*31:0*/ InstructionFetch__DOT___pc_T_1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VInstructionFetch__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstructionFetch);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VInstructionFetch(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VInstructionFetch();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VInstructionFetch__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VInstructionFetch__Syms* symsp, bool first);
  private:
    static QData _change_request(VInstructionFetch__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VInstructionFetch__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VInstructionFetch__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VInstructionFetch__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VInstructionFetch__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VInstructionFetch__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VInstructionFetch__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VInstructionFetch__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
