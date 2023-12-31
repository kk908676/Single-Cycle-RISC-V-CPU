module InstructionDecode(
  input         clock,
  input         reset,
  input  [31:0] io_instruction, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_regs_reg1_read_address, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_regs_reg2_read_address, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [31:0] io_ex_immediate, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_ex_aluop1_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_ex_aluop2_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_memory_read_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_memory_write_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [1:0]  io_wb_reg_write_source, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output        io_reg_write_enable, // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
  output [4:0]  io_reg_write_address // @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
);
  wire [6:0] opcode = io_instruction[6:0]; // @[src/main/scala/riscv/core/InstructionDecode.scala 141:30]
  wire [4:0] rd = io_instruction[11:7]; // @[src/main/scala/riscv/core/InstructionDecode.scala 144:30]
  wire [4:0] rs1 = io_instruction[19:15]; // @[src/main/scala/riscv/core/InstructionDecode.scala 145:30]
  wire  _io_regs_reg1_read_address_T = opcode == 7'h37; // @[src/main/scala/riscv/core/InstructionDecode.scala 148:43]
  wire [19:0] _immediate_T_2 = io_instruction[31] ? 20'hfffff : 20'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 152:13]
  wire [31:0] _immediate_T_4 = {_immediate_T_2,io_instruction[31:20]}; // @[src/main/scala/riscv/core/InstructionDecode.scala 152:8]
  wire [20:0] _immediate_T_7 = io_instruction[31] ? 21'h1fffff : 21'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 154:37]
  wire [31:0] _immediate_T_9 = {_immediate_T_7,io_instruction[30:20]}; // @[src/main/scala/riscv/core/InstructionDecode.scala 154:32]
  wire [31:0] _immediate_T_25 = {_immediate_T_7,io_instruction[30:25],rd}; // @[src/main/scala/riscv/core/InstructionDecode.scala 157:32]
  wire [31:0] _immediate_T_32 = {_immediate_T_2,io_instruction[7],io_instruction[30:25],io_instruction[11:8],1'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
  wire [31:0] _immediate_T_34 = {io_instruction[31:12],12'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 165:32]
  wire [11:0] _immediate_T_39 = io_instruction[31] ? 12'hfff : 12'h0; // @[src/main/scala/riscv/core/InstructionDecode.scala 169:13]
  wire [31:0] _immediate_T_43 = {_immediate_T_39,io_instruction[19:12],io_instruction[20],io_instruction[30:21],1'h0}; // @[src/main/scala/riscv/core/InstructionDecode.scala 168:30]
  wire [31:0] _immediate_T_45 = 7'h13 == opcode ? _immediate_T_9 : _immediate_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_47 = 7'h3 == opcode ? _immediate_T_9 : _immediate_T_45; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_49 = 7'h67 == opcode ? _immediate_T_9 : _immediate_T_47; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_51 = 7'h23 == opcode ? _immediate_T_25 : _immediate_T_49; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_53 = 7'h63 == opcode ? _immediate_T_32 : _immediate_T_51; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_55 = 7'h37 == opcode ? _immediate_T_34 : _immediate_T_53; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _immediate_T_57 = 7'h17 == opcode ? _immediate_T_34 : _immediate_T_55; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _io_ex_aluop1_source_T = opcode == 7'h17; // @[src/main/scala/riscv/core/InstructionDecode.scala 179:12]
  wire  _io_ex_aluop1_source_T_3 = opcode == 7'h6f; // @[src/main/scala/riscv/core/InstructionDecode.scala 179:78]
  wire  _io_ex_aluop2_source_T = opcode == 7'h33; // @[src/main/scala/riscv/core/InstructionDecode.scala 192:12]
  wire  _io_memory_read_enable_T = opcode == 7'h3; // @[src/main/scala/riscv/core/InstructionDecode.scala 198:39]
  wire  _io_wb_reg_write_source_T_2 = _io_ex_aluop2_source_T | opcode == 7'h13; // @[src/main/scala/riscv/core/InstructionDecode.scala 205:39]
  wire  _io_wb_reg_write_source_T_4 = _io_ex_aluop2_source_T | opcode == 7'h13 | _io_regs_reg1_read_address_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 205:72]
  wire  _io_wb_reg_write_source_T_6 = _io_wb_reg_write_source_T_4 | _io_ex_aluop1_source_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 206:37]
  wire  _io_wb_reg_write_source_T_9 = opcode == 7'h67; // @[src/main/scala/riscv/core/InstructionDecode.scala 208:46]
  wire  _io_wb_reg_write_source_T_10 = _io_ex_aluop1_source_T_3 | opcode == 7'h67; // @[src/main/scala/riscv/core/InstructionDecode.scala 208:36]
  wire [1:0] _io_wb_reg_write_source_T_11 = _io_wb_reg_write_source_T_10 ? 2'h3 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire [1:0] _io_wb_reg_write_source_T_12 = _io_memory_read_enable_T ? 2'h1 : _io_wb_reg_write_source_T_11; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  wire  _io_reg_write_enable_T_4 = _io_wb_reg_write_source_T_2 | _io_memory_read_enable_T; // @[src/main/scala/riscv/core/InstructionDecode.scala 212:94]
  wire  _io_reg_write_enable_T_10 = _io_reg_write_enable_T_4 | _io_ex_aluop1_source_T | _io_regs_reg1_read_address_T |
    _io_ex_aluop1_source_T_3; // @[src/main/scala/riscv/core/InstructionDecode.scala 213:105]
  assign io_regs_reg1_read_address = opcode == 7'h37 ? 5'h0 : rs1; // @[src/main/scala/riscv/core/InstructionDecode.scala 148:35]
  assign io_regs_reg2_read_address = io_instruction[24:20]; // @[src/main/scala/riscv/core/InstructionDecode.scala 146:30]
  assign io_ex_immediate = 7'h6f == opcode ? _immediate_T_43 : _immediate_T_57; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  assign io_ex_aluop1_source = opcode == 7'h17 | opcode == 7'h63 | opcode == 7'h6f; // @[src/main/scala/riscv/core/InstructionDecode.scala 179:68]
  assign io_ex_aluop2_source = _io_ex_aluop2_source_T ? 1'h0 : 1'h1; // @[src/main/scala/riscv/core/InstructionDecode.scala 191:29]
  assign io_memory_read_enable = opcode == 7'h3; // @[src/main/scala/riscv/core/InstructionDecode.scala 198:39]
  assign io_memory_write_enable = opcode == 7'h23; // @[src/main/scala/riscv/core/InstructionDecode.scala 199:40]
  assign io_wb_reg_write_source = _io_wb_reg_write_source_T_6 ? 2'h0 : _io_wb_reg_write_source_T_12; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  assign io_reg_write_enable = _io_reg_write_enable_T_10 | _io_wb_reg_write_source_T_9; // @[src/main/scala/riscv/core/InstructionDecode.scala 214:35]
  assign io_reg_write_address = io_instruction[11:7]; // @[src/main/scala/riscv/core/InstructionDecode.scala 144:30]
endmodule
