// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VINSTRUCTIONDECODE_H_
#define _VINSTRUCTIONDECODE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VInstructionDecode__Syms;

//----------

VL_MODULE(VInstructionDecode) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_regs_reg1_read_address,4,0);
    VL_OUT8(io_regs_reg2_read_address,4,0);
    VL_OUT8(io_ex_aluop1_source,0,0);
    VL_OUT8(io_ex_aluop2_source,0,0);
    VL_OUT8(io_memory_read_enable,0,0);
    VL_OUT8(io_memory_write_enable,0,0);
    VL_OUT8(io_wb_reg_write_source,1,0);
    VL_OUT8(io_reg_write_enable,0,0);
    VL_OUT8(io_reg_write_address,4,0);
    VL_IN(io_instruction,31,0);
    VL_OUT(io_ex_immediate,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ InstructionDecode__DOT___immediate_T_9;
    IData/*31:0*/ InstructionDecode__DOT___immediate_T_55;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VInstructionDecode__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VInstructionDecode);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VInstructionDecode(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VInstructionDecode();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VInstructionDecode__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VInstructionDecode__Syms* symsp, bool first);
  private:
    static QData _change_request(VInstructionDecode__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VInstructionDecode__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VInstructionDecode__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VInstructionDecode__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VInstructionDecode__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VInstructionDecode__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
