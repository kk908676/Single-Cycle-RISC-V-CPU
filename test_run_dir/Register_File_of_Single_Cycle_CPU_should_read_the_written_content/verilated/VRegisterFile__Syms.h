// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VREGISTERFILE__SYMS_H_
#define _VREGISTERFILE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VRegisterFile.h"

// SYMS CLASS
class VRegisterFile__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VRegisterFile*                 TOPp;
    
    // CREATORS
    VRegisterFile__Syms(VRegisterFile* topp, const char* namep);
    ~VRegisterFile__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
