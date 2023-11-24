FIRRTL version 1.2.0
circuit InstructionFetch :
  module InstructionFetch :
    input clock : Clock
    input reset : UInt<1>
    input io_jump_flag_id : UInt<1> @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    input io_jump_address_id : UInt<32> @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    input io_instruction_read_data : UInt<32> @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    input io_instruction_valid : UInt<1> @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    output io_instruction_address : UInt<32> @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]
    output io_instruction : UInt<32> @[src/main/scala/riscv/core/InstructionFetch.scala 14:14]

    reg pc : UInt<32>, clock with :
      reset => (UInt<1>("h0"), pc) @[src/main/scala/riscv/core/InstructionFetch.scala 23:19]
    node _pc_T = add(pc, UInt<3>("h4")) @[src/main/scala/riscv/core/InstructionFetch.scala 31:18]
    node _pc_T_1 = tail(_pc_T, 1) @[src/main/scala/riscv/core/InstructionFetch.scala 31:18]
    node _GEN_0 = mux(io_jump_flag_id, io_jump_address_id, _pc_T_1) @[src/main/scala/riscv/core/InstructionFetch.scala 28:26 29:12 31:12]
    node _GEN_1 = mux(io_instruction_valid, io_instruction_read_data, UInt<5>("h13")) @[src/main/scala/riscv/core/InstructionFetch.scala 25:30 26:20 37:20]
    node _GEN_2 = mux(io_instruction_valid, _GEN_0, pc) @[src/main/scala/riscv/core/InstructionFetch.scala 25:30 36:20]
    io_instruction_address <= pc @[src/main/scala/riscv/core/InstructionFetch.scala 39:26]
    io_instruction <= _GEN_1
    pc <= mux(reset, UInt<32>("h1000"), _GEN_2) @[src/main/scala/riscv/core/InstructionFetch.scala 23:{19,19}]
