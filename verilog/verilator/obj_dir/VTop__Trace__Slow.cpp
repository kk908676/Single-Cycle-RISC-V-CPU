// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTop::traceInit, &VTop::traceFull, &VTop::traceChg, this);
}
void VTop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTop* t = (VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t = (VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTop::traceInitThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTop::traceFullThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop::traceInitThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+505,"clock", false,-1);
        vcdp->declBit(c+513,"reset", false,-1);
        vcdp->declBus(c+521,"io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+529,"io_instruction", false,-1, 31,0);
        vcdp->declBus(c+537,"io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+545,"io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+553,"io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+561,"io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+569,"io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+577,"io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+585,"io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+593,"io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBit(c+601,"io_instruction_valid", false,-1);
        vcdp->declBus(c+609,"io_deviceSelect", false,-1, 2,0);
        vcdp->declBus(c+617,"io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+625,"io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+505,"Top clock", false,-1);
        vcdp->declBit(c+513,"Top reset", false,-1);
        vcdp->declBus(c+521,"Top io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+529,"Top io_instruction", false,-1, 31,0);
        vcdp->declBus(c+537,"Top io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+545,"Top io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+553,"Top io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+561,"Top io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+569,"Top io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+577,"Top io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+585,"Top io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+593,"Top io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBit(c+601,"Top io_instruction_valid", false,-1);
        vcdp->declBus(c+609,"Top io_deviceSelect", false,-1, 2,0);
        vcdp->declBus(c+617,"Top io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+625,"Top io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+505,"Top cpu_clock", false,-1);
        vcdp->declBit(c+513,"Top cpu_reset", false,-1);
        vcdp->declBus(c+241,"Top cpu_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+529,"Top cpu_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+9,"Top cpu_io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+17,"Top cpu_io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+25,"Top cpu_io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+33,"Top cpu_io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+41,"Top cpu_io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+49,"Top cpu_io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+57,"Top cpu_io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+593,"Top cpu_io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBit(c+601,"Top cpu_io_instruction_valid", false,-1);
        vcdp->declBus(c+617,"Top cpu_io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+633,"Top cpu_io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+505,"Top cpu clock", false,-1);
        vcdp->declBit(c+513,"Top cpu reset", false,-1);
        vcdp->declBus(c+241,"Top cpu io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+529,"Top cpu io_instruction", false,-1, 31,0);
        vcdp->declBus(c+9,"Top cpu io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+17,"Top cpu io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+25,"Top cpu io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+33,"Top cpu io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+41,"Top cpu io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+49,"Top cpu io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+57,"Top cpu io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+593,"Top cpu io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBit(c+601,"Top cpu io_instruction_valid", false,-1);
        vcdp->declBus(c+617,"Top cpu io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+633,"Top cpu io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+505,"Top cpu regs_clock", false,-1);
        vcdp->declBit(c+513,"Top cpu regs_reset", false,-1);
        vcdp->declBit(c+65,"Top cpu regs_io_write_enable", false,-1);
        vcdp->declBus(c+73,"Top cpu regs_io_write_address", false,-1, 4,0);
        vcdp->declBus(c+81,"Top cpu regs_io_write_data", false,-1, 31,0);
        vcdp->declBus(c+89,"Top cpu regs_io_read_address1", false,-1, 4,0);
        vcdp->declBus(c+97,"Top cpu regs_io_read_address2", false,-1, 4,0);
        vcdp->declBus(c+105,"Top cpu regs_io_read_data1", false,-1, 31,0);
        vcdp->declBus(c+113,"Top cpu regs_io_read_data2", false,-1, 31,0);
        vcdp->declBus(c+617,"Top cpu regs_io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+633,"Top cpu regs_io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+505,"Top cpu inst_fetch_clock", false,-1);
        vcdp->declBit(c+513,"Top cpu inst_fetch_reset", false,-1);
        vcdp->declBit(c+121,"Top cpu inst_fetch_io_jump_flag_id", false,-1);
        vcdp->declBus(c+1,"Top cpu inst_fetch_io_jump_address_id", false,-1, 31,0);
        vcdp->declBus(c+529,"Top cpu inst_fetch_io_instruction_read_data", false,-1, 31,0);
        vcdp->declBit(c+601,"Top cpu inst_fetch_io_instruction_valid", false,-1);
        vcdp->declBus(c+241,"Top cpu inst_fetch_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+129,"Top cpu inst_fetch_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+129,"Top cpu id_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+89,"Top cpu id_io_regs_reg1_read_address", false,-1, 4,0);
        vcdp->declBus(c+97,"Top cpu id_io_regs_reg2_read_address", false,-1, 4,0);
        vcdp->declBus(c+137,"Top cpu id_io_ex_immediate", false,-1, 31,0);
        vcdp->declBit(c+145,"Top cpu id_io_ex_aluop2_source", false,-1);
        vcdp->declBit(c+153,"Top cpu id_io_memory_read_enable", false,-1);
        vcdp->declBit(c+161,"Top cpu id_io_memory_write_enable", false,-1);
        vcdp->declBus(c+169,"Top cpu id_io_wb_reg_write_source", false,-1, 1,0);
        vcdp->declBit(c+65,"Top cpu id_io_reg_write_enable", false,-1);
        vcdp->declBus(c+73,"Top cpu id_io_reg_write_address", false,-1, 4,0);
        vcdp->declBus(c+129,"Top cpu ex_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+241,"Top cpu ex_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+105,"Top cpu ex_io_reg1_data", false,-1, 31,0);
        vcdp->declBus(c+113,"Top cpu ex_io_reg2_data", false,-1, 31,0);
        vcdp->declBus(c+137,"Top cpu ex_io_immediate", false,-1, 31,0);
        vcdp->declBit(c+145,"Top cpu ex_io_aluop2_source", false,-1);
        vcdp->declBus(c+177,"Top cpu ex_io_mem_alu_result", false,-1, 31,0);
        vcdp->declBit(c+121,"Top cpu ex_io_if_jump_flag", false,-1);
        vcdp->declBus(c+1,"Top cpu ex_io_if_jump_address", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu mem_io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+113,"Top cpu mem_io_reg2_data", false,-1, 31,0);
        vcdp->declBit(c+153,"Top cpu mem_io_memory_read_enable", false,-1);
        vcdp->declBit(c+161,"Top cpu mem_io_memory_write_enable", false,-1);
        vcdp->declBus(c+185,"Top cpu mem_io_funct3", false,-1, 2,0);
        vcdp->declBus(c+641,"Top cpu mem_io_wb_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu mem_io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+17,"Top cpu mem_io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+25,"Top cpu mem_io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+33,"Top cpu mem_io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+41,"Top cpu mem_io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+49,"Top cpu mem_io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+57,"Top cpu mem_io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+593,"Top cpu mem_io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBus(c+241,"Top cpu wb_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu wb_io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+641,"Top cpu wb_io_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+169,"Top cpu wb_io_regs_write_source", false,-1, 1,0);
        vcdp->declBus(c+81,"Top cpu wb_io_regs_write_data", false,-1, 31,0);
        vcdp->declBit(c+505,"Top cpu regs clock", false,-1);
        vcdp->declBit(c+513,"Top cpu regs reset", false,-1);
        vcdp->declBit(c+65,"Top cpu regs io_write_enable", false,-1);
        vcdp->declBus(c+73,"Top cpu regs io_write_address", false,-1, 4,0);
        vcdp->declBus(c+81,"Top cpu regs io_write_data", false,-1, 31,0);
        vcdp->declBus(c+89,"Top cpu regs io_read_address1", false,-1, 4,0);
        vcdp->declBus(c+97,"Top cpu regs io_read_address2", false,-1, 4,0);
        vcdp->declBus(c+105,"Top cpu regs io_read_data1", false,-1, 31,0);
        vcdp->declBus(c+113,"Top cpu regs io_read_data2", false,-1, 31,0);
        vcdp->declBus(c+617,"Top cpu regs io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+633,"Top cpu regs io_debug_read_data", false,-1, 31,0);
        vcdp->declBus(c+249,"Top cpu regs registers_0", false,-1, 31,0);
        vcdp->declBus(c+257,"Top cpu regs registers_1", false,-1, 31,0);
        vcdp->declBus(c+265,"Top cpu regs registers_2", false,-1, 31,0);
        vcdp->declBus(c+273,"Top cpu regs registers_3", false,-1, 31,0);
        vcdp->declBus(c+281,"Top cpu regs registers_4", false,-1, 31,0);
        vcdp->declBus(c+289,"Top cpu regs registers_5", false,-1, 31,0);
        vcdp->declBus(c+297,"Top cpu regs registers_6", false,-1, 31,0);
        vcdp->declBus(c+305,"Top cpu regs registers_7", false,-1, 31,0);
        vcdp->declBus(c+313,"Top cpu regs registers_8", false,-1, 31,0);
        vcdp->declBus(c+321,"Top cpu regs registers_9", false,-1, 31,0);
        vcdp->declBus(c+329,"Top cpu regs registers_10", false,-1, 31,0);
        vcdp->declBus(c+337,"Top cpu regs registers_11", false,-1, 31,0);
        vcdp->declBus(c+345,"Top cpu regs registers_12", false,-1, 31,0);
        vcdp->declBus(c+353,"Top cpu regs registers_13", false,-1, 31,0);
        vcdp->declBus(c+361,"Top cpu regs registers_14", false,-1, 31,0);
        vcdp->declBus(c+369,"Top cpu regs registers_15", false,-1, 31,0);
        vcdp->declBus(c+377,"Top cpu regs registers_16", false,-1, 31,0);
        vcdp->declBus(c+385,"Top cpu regs registers_17", false,-1, 31,0);
        vcdp->declBus(c+393,"Top cpu regs registers_18", false,-1, 31,0);
        vcdp->declBus(c+401,"Top cpu regs registers_19", false,-1, 31,0);
        vcdp->declBus(c+409,"Top cpu regs registers_20", false,-1, 31,0);
        vcdp->declBus(c+417,"Top cpu regs registers_21", false,-1, 31,0);
        vcdp->declBus(c+425,"Top cpu regs registers_22", false,-1, 31,0);
        vcdp->declBus(c+433,"Top cpu regs registers_23", false,-1, 31,0);
        vcdp->declBus(c+441,"Top cpu regs registers_24", false,-1, 31,0);
        vcdp->declBus(c+449,"Top cpu regs registers_25", false,-1, 31,0);
        vcdp->declBus(c+457,"Top cpu regs registers_26", false,-1, 31,0);
        vcdp->declBus(c+465,"Top cpu regs registers_27", false,-1, 31,0);
        vcdp->declBus(c+473,"Top cpu regs registers_28", false,-1, 31,0);
        vcdp->declBus(c+481,"Top cpu regs registers_29", false,-1, 31,0);
        vcdp->declBus(c+489,"Top cpu regs registers_30", false,-1, 31,0);
        vcdp->declBus(c+497,"Top cpu regs registers_31", false,-1, 31,0);
        vcdp->declBit(c+505,"Top cpu inst_fetch clock", false,-1);
        vcdp->declBit(c+513,"Top cpu inst_fetch reset", false,-1);
        vcdp->declBit(c+121,"Top cpu inst_fetch io_jump_flag_id", false,-1);
        vcdp->declBus(c+1,"Top cpu inst_fetch io_jump_address_id", false,-1, 31,0);
        vcdp->declBus(c+529,"Top cpu inst_fetch io_instruction_read_data", false,-1, 31,0);
        vcdp->declBit(c+601,"Top cpu inst_fetch io_instruction_valid", false,-1);
        vcdp->declBus(c+241,"Top cpu inst_fetch io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+129,"Top cpu inst_fetch io_instruction", false,-1, 31,0);
        vcdp->declBus(c+241,"Top cpu inst_fetch pc", false,-1, 31,0);
        vcdp->declBus(c+129,"Top cpu id io_instruction", false,-1, 31,0);
        vcdp->declBus(c+89,"Top cpu id io_regs_reg1_read_address", false,-1, 4,0);
        vcdp->declBus(c+97,"Top cpu id io_regs_reg2_read_address", false,-1, 4,0);
        vcdp->declBus(c+137,"Top cpu id io_ex_immediate", false,-1, 31,0);
        vcdp->declBit(c+145,"Top cpu id io_ex_aluop2_source", false,-1);
        vcdp->declBit(c+153,"Top cpu id io_memory_read_enable", false,-1);
        vcdp->declBit(c+161,"Top cpu id io_memory_write_enable", false,-1);
        vcdp->declBus(c+169,"Top cpu id io_wb_reg_write_source", false,-1, 1,0);
        vcdp->declBit(c+65,"Top cpu id io_reg_write_enable", false,-1);
        vcdp->declBus(c+73,"Top cpu id io_reg_write_address", false,-1, 4,0);
        vcdp->declBus(c+193,"Top cpu id opcode", false,-1, 6,0);
        vcdp->declBus(c+73,"Top cpu id rd", false,-1, 4,0);
        vcdp->declBus(c+201,"Top cpu id rs1", false,-1, 4,0);
        vcdp->declBus(c+129,"Top cpu ex io_instruction", false,-1, 31,0);
        vcdp->declBus(c+241,"Top cpu ex io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+105,"Top cpu ex io_reg1_data", false,-1, 31,0);
        vcdp->declBus(c+113,"Top cpu ex io_reg2_data", false,-1, 31,0);
        vcdp->declBus(c+137,"Top cpu ex io_immediate", false,-1, 31,0);
        vcdp->declBit(c+145,"Top cpu ex io_aluop2_source", false,-1);
        vcdp->declBus(c+177,"Top cpu ex io_mem_alu_result", false,-1, 31,0);
        vcdp->declBit(c+121,"Top cpu ex io_if_jump_flag", false,-1);
        vcdp->declBus(c+1,"Top cpu ex io_if_jump_address", false,-1, 31,0);
        vcdp->declBus(c+209,"Top cpu ex alu_io_func", false,-1, 3,0);
        vcdp->declBus(c+105,"Top cpu ex alu_io_op1", false,-1, 31,0);
        vcdp->declBus(c+217,"Top cpu ex alu_io_op2", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu ex alu_io_result", false,-1, 31,0);
        vcdp->declBus(c+193,"Top cpu ex alu_ctrl_io_opcode", false,-1, 6,0);
        vcdp->declBus(c+185,"Top cpu ex alu_ctrl_io_funct3", false,-1, 2,0);
        vcdp->declBus(c+225,"Top cpu ex alu_ctrl_io_funct7", false,-1, 6,0);
        vcdp->declBus(c+209,"Top cpu ex alu_ctrl_io_alu_funct", false,-1, 3,0);
        vcdp->declBus(c+193,"Top cpu ex opcode", false,-1, 6,0);
        vcdp->declBus(c+185,"Top cpu ex funct3", false,-1, 2,0);
        vcdp->declBus(c+209,"Top cpu ex alu io_func", false,-1, 3,0);
        vcdp->declBus(c+105,"Top cpu ex alu io_op1", false,-1, 31,0);
        vcdp->declBus(c+217,"Top cpu ex alu io_op2", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu ex alu io_result", false,-1, 31,0);
        vcdp->declBus(c+193,"Top cpu ex alu_ctrl io_opcode", false,-1, 6,0);
        vcdp->declBus(c+185,"Top cpu ex alu_ctrl io_funct3", false,-1, 2,0);
        vcdp->declBus(c+225,"Top cpu ex alu_ctrl io_funct7", false,-1, 6,0);
        vcdp->declBus(c+209,"Top cpu ex alu_ctrl io_alu_funct", false,-1, 3,0);
        vcdp->declBus(c+177,"Top cpu mem io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+113,"Top cpu mem io_reg2_data", false,-1, 31,0);
        vcdp->declBit(c+153,"Top cpu mem io_memory_read_enable", false,-1);
        vcdp->declBit(c+161,"Top cpu mem io_memory_write_enable", false,-1);
        vcdp->declBus(c+185,"Top cpu mem io_funct3", false,-1, 2,0);
        vcdp->declBus(c+641,"Top cpu mem io_wb_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu mem io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+17,"Top cpu mem io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+25,"Top cpu mem io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+33,"Top cpu mem io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+41,"Top cpu mem io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+49,"Top cpu mem io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+57,"Top cpu mem io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+593,"Top cpu mem io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBus(c+233,"Top cpu mem mem_address_index", false,-1, 1,0);
        vcdp->declBus(c+241,"Top cpu wb io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+177,"Top cpu wb io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+641,"Top cpu wb io_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+169,"Top cpu wb io_regs_write_source", false,-1, 1,0);
        vcdp->declBus(c+81,"Top cpu wb io_regs_write_data", false,-1, 31,0);
    }
}

void VTop::traceFullThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,((vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate 
                            + ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                                ? vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1
                                : vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc))),32);
        vcdp->fullBus(c+9,((0x1fffffffU & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),32);
        vcdp->fullBus(c+17,((IData)(((3U == (0x7fU 
                                             & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
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
        vcdp->fullBit(c+25,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & (0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)))));
        vcdp->fullBit(c+33,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (0U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->fullBit(c+41,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (1U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->fullBit(c+49,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (2U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->fullBit(c+57,(((3U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (3U == (3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->fullBit(c+65,(vlTOPp->Top__DOT__cpu__DOT__id_io_reg_write_enable));
        vcdp->fullBus(c+73,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 7U))),5);
        vcdp->fullBus(c+81,(vlTOPp->Top__DOT__cpu__DOT__wb_io_regs_write_data),32);
        vcdp->fullBus(c+89,(vlTOPp->Top__DOT__cpu__DOT__id_io_regs_reg1_read_address),5);
        vcdp->fullBus(c+97,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x14U))),5);
        vcdp->fullBus(c+105,(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1),32);
        vcdp->fullBus(c+113,(vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2),32);
        vcdp->fullBit(c+121,((((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                              | ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0xcU)))
                                     ? (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                        >= vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                     : ((6U == (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                         ? (vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1 
                                            < vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                         : ((5U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                             ? VL_GTES_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0xcU)))
                                                 ? 
                                                VL_LTS_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->Top__DOT__cpu__DOT__regs_io_read_data2)
                                                 : 
                                                ((1U 
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
        vcdp->fullBus(c+129,(vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction),32);
        vcdp->fullBus(c+137,(vlTOPp->Top__DOT__cpu__DOT__id_io_ex_immediate),32);
        vcdp->fullBit(c+145,((0x33U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->fullBit(c+153,((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->fullBit(c+161,((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->fullBus(c+169,(vlTOPp->Top__DOT__cpu__DOT__id_io_wb_reg_write_source),2);
        vcdp->fullBus(c+177,((IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)),32);
        vcdp->fullBus(c+185,((7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))),3);
        vcdp->fullBus(c+193,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction)),7);
        vcdp->fullBus(c+201,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0xfU))),5);
        vcdp->fullBus(c+209,(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct),4);
        vcdp->fullBus(c+217,(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu_io_op2),32);
        vcdp->fullBus(c+225,((0x7fU & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x19U))),7);
        vcdp->fullBus(c+233,((3U & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),2);
        vcdp->fullBus(c+241,(vlTOPp->Top__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        vcdp->fullBus(c+249,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_0),32);
        vcdp->fullBus(c+257,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_1),32);
        vcdp->fullBus(c+265,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_2),32);
        vcdp->fullBus(c+273,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_3),32);
        vcdp->fullBus(c+281,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_4),32);
        vcdp->fullBus(c+289,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_5),32);
        vcdp->fullBus(c+297,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_6),32);
        vcdp->fullBus(c+305,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_7),32);
        vcdp->fullBus(c+313,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_8),32);
        vcdp->fullBus(c+321,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_9),32);
        vcdp->fullBus(c+329,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_10),32);
        vcdp->fullBus(c+337,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_11),32);
        vcdp->fullBus(c+345,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_12),32);
        vcdp->fullBus(c+353,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_13),32);
        vcdp->fullBus(c+361,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_14),32);
        vcdp->fullBus(c+369,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_15),32);
        vcdp->fullBus(c+377,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_16),32);
        vcdp->fullBus(c+385,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_17),32);
        vcdp->fullBus(c+393,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_18),32);
        vcdp->fullBus(c+401,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_19),32);
        vcdp->fullBus(c+409,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_20),32);
        vcdp->fullBus(c+417,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_21),32);
        vcdp->fullBus(c+425,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_22),32);
        vcdp->fullBus(c+433,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_23),32);
        vcdp->fullBus(c+441,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_24),32);
        vcdp->fullBus(c+449,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_25),32);
        vcdp->fullBus(c+457,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_26),32);
        vcdp->fullBus(c+465,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_27),32);
        vcdp->fullBus(c+473,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_28),32);
        vcdp->fullBus(c+481,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29),32);
        vcdp->fullBus(c+489,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30),32);
        vcdp->fullBus(c+497,(vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31),32);
        vcdp->fullBit(c+505,(vlTOPp->clock));
        vcdp->fullBit(c+513,(vlTOPp->reset));
        vcdp->fullBus(c+521,(vlTOPp->io_instruction_address),32);
        vcdp->fullBus(c+529,(vlTOPp->io_instruction),32);
        vcdp->fullBus(c+537,(vlTOPp->io_memory_bundle_address),32);
        vcdp->fullBus(c+545,(vlTOPp->io_memory_bundle_write_data),32);
        vcdp->fullBit(c+553,(vlTOPp->io_memory_bundle_write_enable));
        vcdp->fullBit(c+561,(vlTOPp->io_memory_bundle_write_strobe_0));
        vcdp->fullBit(c+569,(vlTOPp->io_memory_bundle_write_strobe_1));
        vcdp->fullBit(c+577,(vlTOPp->io_memory_bundle_write_strobe_2));
        vcdp->fullBit(c+585,(vlTOPp->io_memory_bundle_write_strobe_3));
        vcdp->fullBus(c+593,(vlTOPp->io_memory_bundle_read_data),32);
        vcdp->fullBit(c+601,(vlTOPp->io_instruction_valid));
        vcdp->fullBus(c+609,(vlTOPp->io_deviceSelect),3);
        vcdp->fullBus(c+617,(vlTOPp->io_debug_read_address),5);
        vcdp->fullBus(c+625,(vlTOPp->io_debug_read_data),32);
        vcdp->fullBus(c+633,(((0U == (IData)(vlTOPp->io_debug_read_address))
                               ? 0U : ((0x1fU == (IData)(vlTOPp->io_debug_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_31
                                        : ((0x1eU == (IData)(vlTOPp->io_debug_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_30
                                            : ((0x1dU 
                                                == (IData)(vlTOPp->io_debug_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                : (
                                                   (0x1cU 
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
        vcdp->fullBus(c+641,(((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction))
                               ? ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? vlTOPp->io_memory_bundle_read_data
                                   : ((5U == (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__inst_fetch_io_instruction 
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
                                               (3U 
                                                & (IData)(vlTOPp->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                               ? ((
                                                   ((0x8000U 
                                                     & vlTOPp->io_memory_bundle_read_data)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlTOPp->io_memory_bundle_read_data))
                                               : ((
                                                   ((0x80000000U 
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
