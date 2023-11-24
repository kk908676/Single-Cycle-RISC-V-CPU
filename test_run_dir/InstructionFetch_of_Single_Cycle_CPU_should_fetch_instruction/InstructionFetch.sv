module InstructionFetch(
  input         clock,
  input         reset,
  input         io_jump_flag_id, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input  [31:0] io_jump_address_id, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input  [31:0] io_instruction_read_data, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  input         io_instruction_valid, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_instruction_address, // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
  output [31:0] io_instruction // @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
  wire [31:0] _pc_T_1 = pc + 32'h4; // @[src/main/scala/riscv/core/InstructionFetch.scala 31:18]
  assign io_instruction_address = pc; // @[src/main/scala/riscv/core/InstructionFetch.scala 39:26]
  assign io_instruction = io_instruction_valid ? io_instruction_read_data : 32'h13; // @[src/main/scala/riscv/core/InstructionFetch.scala 25:30 26:20 37:20]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
      pc <= 32'h1000; // @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
    end else if (io_instruction_valid) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 25:30]
      if (io_jump_flag_id) begin // @[src/main/scala/riscv/core/InstructionFetch.scala 28:26]
        pc <= io_jump_address_id; // @[src/main/scala/riscv/core/InstructionFetch.scala 29:12]
      end else begin
        pc <= _pc_T_1; // @[src/main/scala/riscv/core/InstructionFetch.scala 31:12]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
