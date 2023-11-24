FIRRTL version 1.2.0
circuit TestTopModule :
  module Memory :
    input clock : Clock
    input reset : UInt<1>
    input io_bundle_address : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_bundle_write_data : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_bundle_write_enable : UInt<1> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_bundle_write_strobe_0 : UInt<1> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_bundle_write_strobe_1 : UInt<1> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_bundle_write_strobe_2 : UInt<1> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_bundle_write_strobe_3 : UInt<1> @[src/main/scala/peripheral/Memory.scala 45:14]
    output io_bundle_read_data : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]
    output io_instruction : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_instruction_address : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]
    input io_debug_read_address : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]
    output io_debug_read_data : UInt<32> @[src/main/scala/peripheral/Memory.scala 45:14]

    mem mem_0 : @[src/main/scala/peripheral/Memory.scala 55:24]
      data-type => UInt<8>
      depth => 8192
      read-latency => 1
      write-latency => 1
      reader => io_bundle_read_data_MPORT
      reader => io_debug_read_data_MPORT
      reader => io_instruction_MPORT
      writer => MPORT
      read-under-write => undefined
    mem mem_1 : @[src/main/scala/peripheral/Memory.scala 55:24]
      data-type => UInt<8>
      depth => 8192
      read-latency => 1
      write-latency => 1
      reader => io_bundle_read_data_MPORT
      reader => io_debug_read_data_MPORT
      reader => io_instruction_MPORT
      writer => MPORT
      read-under-write => undefined
    mem mem_2 : @[src/main/scala/peripheral/Memory.scala 55:24]
      data-type => UInt<8>
      depth => 8192
      read-latency => 1
      write-latency => 1
      reader => io_bundle_read_data_MPORT
      reader => io_debug_read_data_MPORT
      reader => io_instruction_MPORT
      writer => MPORT
      read-under-write => undefined
    mem mem_3 : @[src/main/scala/peripheral/Memory.scala 55:24]
      data-type => UInt<8>
      depth => 8192
      read-latency => 1
      write-latency => 1
      reader => io_bundle_read_data_MPORT
      reader => io_debug_read_data_MPORT
      reader => io_instruction_MPORT
      writer => MPORT
      read-under-write => undefined
    node _write_data_vec_0_T = bits(io_bundle_write_data, 7, 0) @[src/main/scala/peripheral/Memory.scala 59:48]
    node _write_data_vec_1_T = bits(io_bundle_write_data, 15, 8) @[src/main/scala/peripheral/Memory.scala 59:48]
    node _write_data_vec_2_T = bits(io_bundle_write_data, 23, 16) @[src/main/scala/peripheral/Memory.scala 59:48]
    node _write_data_vec_3_T = bits(io_bundle_write_data, 31, 24) @[src/main/scala/peripheral/Memory.scala 59:48]
    node _T = dshr(io_bundle_address, UInt<2>("h2")) @[src/main/scala/peripheral/Memory.scala 61:34]
    node _T_1 = bits(_T, 12, 0)
    node write_data_vec_0 = _write_data_vec_0_T @[src/main/scala/peripheral/Memory.scala 57:30 59:25]
    node _GEN_0 = validif(io_bundle_write_strobe_0, write_data_vec_0)
    node _GEN_1 = mux(io_bundle_write_strobe_0, UInt<1>("h1"), UInt<1>("h0"))
    node write_data_vec_1 = _write_data_vec_1_T @[src/main/scala/peripheral/Memory.scala 57:30 59:25]
    node _GEN_2 = validif(io_bundle_write_strobe_1, write_data_vec_1)
    node _GEN_3 = mux(io_bundle_write_strobe_1, UInt<1>("h1"), UInt<1>("h0"))
    node write_data_vec_2 = _write_data_vec_2_T @[src/main/scala/peripheral/Memory.scala 57:30 59:25]
    node _GEN_4 = validif(io_bundle_write_strobe_2, write_data_vec_2)
    node _GEN_5 = mux(io_bundle_write_strobe_2, UInt<1>("h1"), UInt<1>("h0"))
    node write_data_vec_3 = _write_data_vec_3_T @[src/main/scala/peripheral/Memory.scala 57:30 59:25]
    node _GEN_6 = validif(io_bundle_write_strobe_3, write_data_vec_3)
    node _GEN_7 = mux(io_bundle_write_strobe_3, UInt<1>("h1"), UInt<1>("h0"))
    node _GEN_8 = validif(io_bundle_write_enable, _T_1) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_9 = validif(io_bundle_write_enable, clock) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_10 = mux(io_bundle_write_enable, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/peripheral/Memory.scala 55:24 56:32]
    node _GEN_11 = validif(io_bundle_write_enable, _GEN_1) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_12 = validif(io_bundle_write_enable, _GEN_3) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_13 = validif(io_bundle_write_enable, _GEN_5) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_14 = validif(io_bundle_write_enable, _GEN_7) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_15 = validif(io_bundle_write_enable, _GEN_0) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_16 = validif(io_bundle_write_enable, _GEN_2) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_17 = validif(io_bundle_write_enable, _GEN_4) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _GEN_18 = validif(io_bundle_write_enable, _GEN_6) @[src/main/scala/peripheral/Memory.scala 56:32]
    node _io_bundle_read_data_T = dshr(io_bundle_address, UInt<2>("h2")) @[src/main/scala/peripheral/Memory.scala 63:54]
    node _GEN_19 = validif(UInt<1>("h1"), _io_bundle_read_data_T) @[src/main/scala/peripheral/Memory.scala 63:{34,34}]
    node _io_bundle_read_data_WIRE = _GEN_19 @[src/main/scala/peripheral/Memory.scala 63:34]
    node _io_bundle_read_data_T_1 = or(_io_bundle_read_data_WIRE, UInt<13>("h0")) @[src/main/scala/peripheral/Memory.scala 63:34]
    node _io_bundle_read_data_T_2 = bits(_io_bundle_read_data_T_1, 12, 0) @[src/main/scala/peripheral/Memory.scala 63:34]
    node _GEN_20 = mux(UInt<1>("h1"), UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/peripheral/Memory.scala 55:24 63:{34,34}]
    node _GEN_21 = validif(UInt<1>("h1"), _io_bundle_read_data_T_2) @[src/main/scala/peripheral/Memory.scala 63:{34,34}]
    node _GEN_22 = validif(UInt<1>("h1"), clock) @[src/main/scala/peripheral/Memory.scala 63:{34,34}]
    node io_bundle_read_data_lo = cat(mem_1.io_bundle_read_data_MPORT.data, mem_0.io_bundle_read_data_MPORT.data) @[src/main/scala/peripheral/Memory.scala 63:78]
    node io_bundle_read_data_hi = cat(mem_3.io_bundle_read_data_MPORT.data, mem_2.io_bundle_read_data_MPORT.data) @[src/main/scala/peripheral/Memory.scala 63:78]
    node _io_bundle_read_data_T_3 = cat(io_bundle_read_data_hi, io_bundle_read_data_lo) @[src/main/scala/peripheral/Memory.scala 63:78]
    node _io_debug_read_data_T = dshr(io_debug_read_address, UInt<2>("h2")) @[src/main/scala/peripheral/Memory.scala 64:58]
    node _GEN_23 = validif(UInt<1>("h1"), _io_debug_read_data_T) @[src/main/scala/peripheral/Memory.scala 64:{34,34}]
    node _io_debug_read_data_WIRE = _GEN_23 @[src/main/scala/peripheral/Memory.scala 64:34]
    node _io_debug_read_data_T_1 = or(_io_debug_read_data_WIRE, UInt<13>("h0")) @[src/main/scala/peripheral/Memory.scala 64:34]
    node _io_debug_read_data_T_2 = bits(_io_debug_read_data_T_1, 12, 0) @[src/main/scala/peripheral/Memory.scala 64:34]
    node _GEN_24 = validif(UInt<1>("h1"), _io_debug_read_data_T_2) @[src/main/scala/peripheral/Memory.scala 64:{34,34}]
    node io_debug_read_data_lo = cat(mem_1.io_debug_read_data_MPORT.data, mem_0.io_debug_read_data_MPORT.data) @[src/main/scala/peripheral/Memory.scala 64:82]
    node io_debug_read_data_hi = cat(mem_3.io_debug_read_data_MPORT.data, mem_2.io_debug_read_data_MPORT.data) @[src/main/scala/peripheral/Memory.scala 64:82]
    node _io_debug_read_data_T_3 = cat(io_debug_read_data_hi, io_debug_read_data_lo) @[src/main/scala/peripheral/Memory.scala 64:82]
    node _io_instruction_T = dshr(io_instruction_address, UInt<2>("h2")) @[src/main/scala/peripheral/Memory.scala 65:59]
    node _GEN_25 = validif(UInt<1>("h1"), _io_instruction_T) @[src/main/scala/peripheral/Memory.scala 65:{34,34}]
    node _io_instruction_WIRE = _GEN_25 @[src/main/scala/peripheral/Memory.scala 65:34]
    node _io_instruction_T_1 = or(_io_instruction_WIRE, UInt<13>("h0")) @[src/main/scala/peripheral/Memory.scala 65:34]
    node _io_instruction_T_2 = bits(_io_instruction_T_1, 12, 0) @[src/main/scala/peripheral/Memory.scala 65:34]
    node _GEN_26 = validif(UInt<1>("h1"), _io_instruction_T_2) @[src/main/scala/peripheral/Memory.scala 65:{34,34}]
    node io_instruction_lo = cat(mem_1.io_instruction_MPORT.data, mem_0.io_instruction_MPORT.data) @[src/main/scala/peripheral/Memory.scala 65:83]
    node io_instruction_hi = cat(mem_3.io_instruction_MPORT.data, mem_2.io_instruction_MPORT.data) @[src/main/scala/peripheral/Memory.scala 65:83]
    node _io_instruction_T_3 = cat(io_instruction_hi, io_instruction_lo) @[src/main/scala/peripheral/Memory.scala 65:83]
    io_bundle_read_data <= _io_bundle_read_data_T_3 @[src/main/scala/peripheral/Memory.scala 63:23]
    io_instruction <= _io_instruction_T_3 @[src/main/scala/peripheral/Memory.scala 65:23]
    io_debug_read_data <= _io_debug_read_data_T_3 @[src/main/scala/peripheral/Memory.scala 64:23]
    mem_0.io_bundle_read_data_MPORT.addr <= _GEN_21
    mem_1.io_bundle_read_data_MPORT.addr <= _GEN_21
    mem_2.io_bundle_read_data_MPORT.addr <= _GEN_21
    mem_3.io_bundle_read_data_MPORT.addr <= _GEN_21
    mem_0.io_bundle_read_data_MPORT.en <= _GEN_20
    mem_1.io_bundle_read_data_MPORT.en <= _GEN_20
    mem_2.io_bundle_read_data_MPORT.en <= _GEN_20
    mem_3.io_bundle_read_data_MPORT.en <= _GEN_20
    mem_0.io_bundle_read_data_MPORT.clk <= _GEN_22
    mem_1.io_bundle_read_data_MPORT.clk <= _GEN_22
    mem_2.io_bundle_read_data_MPORT.clk <= _GEN_22
    mem_3.io_bundle_read_data_MPORT.clk <= _GEN_22
    mem_0.io_debug_read_data_MPORT.addr <= _GEN_24
    mem_1.io_debug_read_data_MPORT.addr <= _GEN_24
    mem_2.io_debug_read_data_MPORT.addr <= _GEN_24
    mem_3.io_debug_read_data_MPORT.addr <= _GEN_24
    mem_0.io_debug_read_data_MPORT.en <= _GEN_20
    mem_1.io_debug_read_data_MPORT.en <= _GEN_20
    mem_2.io_debug_read_data_MPORT.en <= _GEN_20
    mem_3.io_debug_read_data_MPORT.en <= _GEN_20
    mem_0.io_debug_read_data_MPORT.clk <= _GEN_22
    mem_1.io_debug_read_data_MPORT.clk <= _GEN_22
    mem_2.io_debug_read_data_MPORT.clk <= _GEN_22
    mem_3.io_debug_read_data_MPORT.clk <= _GEN_22
    mem_0.io_instruction_MPORT.addr <= _GEN_26
    mem_1.io_instruction_MPORT.addr <= _GEN_26
    mem_2.io_instruction_MPORT.addr <= _GEN_26
    mem_3.io_instruction_MPORT.addr <= _GEN_26
    mem_0.io_instruction_MPORT.en <= _GEN_20
    mem_1.io_instruction_MPORT.en <= _GEN_20
    mem_2.io_instruction_MPORT.en <= _GEN_20
    mem_3.io_instruction_MPORT.en <= _GEN_20
    mem_0.io_instruction_MPORT.clk <= _GEN_22
    mem_1.io_instruction_MPORT.clk <= _GEN_22
    mem_2.io_instruction_MPORT.clk <= _GEN_22
    mem_3.io_instruction_MPORT.clk <= _GEN_22
    mem_0.MPORT.addr <= _GEN_8
    mem_1.MPORT.addr <= _GEN_8
    mem_2.MPORT.addr <= _GEN_8
    mem_3.MPORT.addr <= _GEN_8
    mem_0.MPORT.en <= _GEN_10
    mem_1.MPORT.en <= _GEN_10
    mem_2.MPORT.en <= _GEN_10
    mem_3.MPORT.en <= _GEN_10
    mem_0.MPORT.clk <= _GEN_9
    mem_1.MPORT.clk <= _GEN_9
    mem_2.MPORT.clk <= _GEN_9
    mem_3.MPORT.clk <= _GEN_9
    mem_0.MPORT.data <= _GEN_15
    mem_1.MPORT.data <= _GEN_16
    mem_2.MPORT.data <= _GEN_17
    mem_3.MPORT.data <= _GEN_18
    mem_0.MPORT.mask <= _GEN_11
    mem_1.MPORT.mask <= _GEN_12
    mem_2.MPORT.mask <= _GEN_13
    mem_3.MPORT.mask <= _GEN_14

  module InstructionROM :
    input clock : Clock
    input reset : UInt<1>
    input io_address : UInt<32> @[src/main/scala/peripheral/InstructionROM.scala 20:14]
    output io_data : UInt<32> @[src/main/scala/peripheral/InstructionROM.scala 20:14]

    mem mem : @[src/main/scala/peripheral/InstructionROM.scala 26:45]
      data-type => UInt<32>
      depth => 132
      read-latency => 0
      write-latency => 1
      reader => io_data_MPORT
      read-under-write => undefined
    node _io_data_T = bits(io_address, 7, 0) @[src/main/scala/peripheral/InstructionROM.scala 32:22]
    io_data <= mem.io_data_MPORT.data @[src/main/scala/peripheral/InstructionROM.scala 32:11]
    mem.io_data_MPORT.addr <= _io_data_T @[src/main/scala/peripheral/InstructionROM.scala 32:22]
    mem.io_data_MPORT.en <= UInt<1>("h1") @[src/main/scala/peripheral/InstructionROM.scala 32:22]
    mem.io_data_MPORT.clk <= clock @[src/main/scala/peripheral/InstructionROM.scala 32:22]

  module ROMLoader :
    input clock : Clock
    input reset : UInt<1>
    output io_bundle_address : UInt<32> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_bundle_write_data : UInt<32> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_bundle_write_enable : UInt<1> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_bundle_write_strobe_0 : UInt<1> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_bundle_write_strobe_1 : UInt<1> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_bundle_write_strobe_2 : UInt<1> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_bundle_write_strobe_3 : UInt<1> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    input io_bundle_read_data : UInt<32> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_rom_address : UInt<32> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    input io_rom_data : UInt<32> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    input io_load_address : UInt<32> @[src/main/scala/peripheral/ROMLoader.scala 10:14]
    output io_load_finished : UInt<1> @[src/main/scala/peripheral/ROMLoader.scala 10:14]

    reg address : UInt<32>, clock with :
      reset => (UInt<1>("h0"), address) @[src/main/scala/peripheral/ROMLoader.scala 20:24]
    reg valid : UInt<1>, clock with :
      reset => (UInt<1>("h0"), valid) @[src/main/scala/peripheral/ROMLoader.scala 21:24]
    node _T = leq(address, UInt<8>("h83")) @[src/main/scala/peripheral/ROMLoader.scala 27:16]
    node _io_bundle_address_T = dshl(address, UInt<2>("h2")) @[src/main/scala/peripheral/ROMLoader.scala 30:40]
    node _io_bundle_address_T_1 = add(_io_bundle_address_T, io_load_address) @[src/main/scala/peripheral/ROMLoader.scala 30:55]
    node _io_bundle_address_T_2 = tail(_io_bundle_address_T_1, 1) @[src/main/scala/peripheral/ROMLoader.scala 30:55]
    node _address_T = add(address, UInt<1>("h1")) @[src/main/scala/peripheral/ROMLoader.scala 32:39]
    node _address_T_1 = tail(_address_T, 1) @[src/main/scala/peripheral/ROMLoader.scala 32:39]
    node _T_1 = eq(address, UInt<8>("h83")) @[src/main/scala/peripheral/ROMLoader.scala 33:18]
    node _GEN_0 = mux(_T_1, UInt<1>("h1"), valid) @[src/main/scala/peripheral/ROMLoader.scala 33:40 34:13 21:24]
    node _GEN_1 = mux(_T, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/peripheral/ROMLoader.scala 26:26 27:37 28:28]
    node _GEN_2 = mux(_T, io_rom_data, UInt<1>("h0")) @[src/main/scala/peripheral/ROMLoader.scala 25:26 27:37 29:28]
    node _GEN_3 = mux(_T, _io_bundle_address_T_2, UInt<1>("h0")) @[src/main/scala/peripheral/ROMLoader.scala 24:26 27:37 30:28]
    node _WIRE_1_0 = UInt<1>("h1") @[src/main/scala/peripheral/ROMLoader.scala 31:{38,38}]
    node _WIRE__0 = UInt<1>("h0") @[src/main/scala/peripheral/ROMLoader.scala 23:{36,36}]
    node _GEN_4 = mux(_T, _WIRE_1_0, _WIRE__0) @[src/main/scala/peripheral/ROMLoader.scala 23:26 27:37 31:28]
    node _WIRE_1_1 = UInt<1>("h1") @[src/main/scala/peripheral/ROMLoader.scala 31:{38,38}]
    node _WIRE__1 = UInt<1>("h0") @[src/main/scala/peripheral/ROMLoader.scala 23:{36,36}]
    node _GEN_5 = mux(_T, _WIRE_1_1, _WIRE__1) @[src/main/scala/peripheral/ROMLoader.scala 23:26 27:37 31:28]
    node _WIRE_1_2 = UInt<1>("h1") @[src/main/scala/peripheral/ROMLoader.scala 31:{38,38}]
    node _WIRE__2 = UInt<1>("h0") @[src/main/scala/peripheral/ROMLoader.scala 23:{36,36}]
    node _GEN_6 = mux(_T, _WIRE_1_2, _WIRE__2) @[src/main/scala/peripheral/ROMLoader.scala 23:26 27:37 31:28]
    node _WIRE_1_3 = UInt<1>("h1") @[src/main/scala/peripheral/ROMLoader.scala 31:{38,38}]
    node _WIRE__3 = UInt<1>("h0") @[src/main/scala/peripheral/ROMLoader.scala 23:{36,36}]
    node _GEN_7 = mux(_T, _WIRE_1_3, _WIRE__3) @[src/main/scala/peripheral/ROMLoader.scala 23:26 27:37 31:28]
    node _GEN_8 = mux(_T, _address_T_1, address) @[src/main/scala/peripheral/ROMLoader.scala 20:24 27:37 32:28]
    node _GEN_9 = mux(_T, _GEN_0, valid) @[src/main/scala/peripheral/ROMLoader.scala 21:24 27:37]
    io_bundle_address <= bits(_GEN_3, 31, 0)
    io_bundle_write_data <= _GEN_2
    io_bundle_write_enable <= _GEN_1
    io_bundle_write_strobe_0 <= _GEN_4
    io_bundle_write_strobe_1 <= _GEN_5
    io_bundle_write_strobe_2 <= _GEN_6
    io_bundle_write_strobe_3 <= _GEN_7
    io_rom_address <= address @[src/main/scala/peripheral/ROMLoader.scala 38:20]
    io_load_finished <= valid @[src/main/scala/peripheral/ROMLoader.scala 37:20]
    address <= mux(reset, UInt<32>("h0"), _GEN_8) @[src/main/scala/peripheral/ROMLoader.scala 20:{24,24}]
    valid <= mux(reset, UInt<1>("h0"), _GEN_9) @[src/main/scala/peripheral/ROMLoader.scala 21:{24,24}]

  module RegisterFile :
    input clock : Clock
    input reset : UInt<1>
    input io_write_enable : UInt<1> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    input io_write_address : UInt<5> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    input io_write_data : UInt<32> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    input io_read_address1 : UInt<5> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    input io_read_address2 : UInt<5> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    output io_read_data1 : UInt<32> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    output io_read_data2 : UInt<32> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    input io_debug_read_address : UInt<5> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
    output io_debug_read_data : UInt<32> @[src/main/scala/riscv/core/RegisterFile.scala 16:14]

    reg registers_0 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_1 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_1) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_2 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_2) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_3 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_3) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_4) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_5 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_5) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_6 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_6) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_7 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_7) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_8 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_8) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_9 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_9) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_10 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_10) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_11 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_11) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_12 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_12) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_13 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_13) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_14 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_14) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_15 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_15) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_16 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_16) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_17 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_17) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_18 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_18) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_19 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_19) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_20 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_20) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_21 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_21) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_22 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_22) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_23 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_23) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_24 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_24) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_25 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_25) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_26 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_26) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_27 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_27) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_28 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_28) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_29 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_29) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_30 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_30) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    reg registers_31 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), registers_31) @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    node _T = asUInt(reset) @[src/main/scala/riscv/core/RegisterFile.scala 31:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[src/main/scala/riscv/core/RegisterFile.scala 31:8]
    node _T_2 = neq(io_write_address, UInt<1>("h0")) @[src/main/scala/riscv/core/RegisterFile.scala 32:46]
    node _T_3 = and(io_write_enable, _T_2) @[src/main/scala/riscv/core/RegisterFile.scala 32:26]
    node _registers_io_write_address = io_write_data @[src/main/scala/riscv/core/RegisterFile.scala 33:{35,35}]
    node _GEN_0 = mux(eq(UInt<1>("h0"), io_write_address), _registers_io_write_address, registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_1 = mux(eq(UInt<1>("h1"), io_write_address), _registers_io_write_address, registers_1) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_2 = mux(eq(UInt<2>("h2"), io_write_address), _registers_io_write_address, registers_2) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_3 = mux(eq(UInt<2>("h3"), io_write_address), _registers_io_write_address, registers_3) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_4 = mux(eq(UInt<3>("h4"), io_write_address), _registers_io_write_address, registers_4) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_5 = mux(eq(UInt<3>("h5"), io_write_address), _registers_io_write_address, registers_5) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_6 = mux(eq(UInt<3>("h6"), io_write_address), _registers_io_write_address, registers_6) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_7 = mux(eq(UInt<3>("h7"), io_write_address), _registers_io_write_address, registers_7) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_8 = mux(eq(UInt<4>("h8"), io_write_address), _registers_io_write_address, registers_8) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_9 = mux(eq(UInt<4>("h9"), io_write_address), _registers_io_write_address, registers_9) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_10 = mux(eq(UInt<4>("ha"), io_write_address), _registers_io_write_address, registers_10) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_11 = mux(eq(UInt<4>("hb"), io_write_address), _registers_io_write_address, registers_11) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_12 = mux(eq(UInt<4>("hc"), io_write_address), _registers_io_write_address, registers_12) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_13 = mux(eq(UInt<4>("hd"), io_write_address), _registers_io_write_address, registers_13) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_14 = mux(eq(UInt<4>("he"), io_write_address), _registers_io_write_address, registers_14) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_15 = mux(eq(UInt<4>("hf"), io_write_address), _registers_io_write_address, registers_15) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_16 = mux(eq(UInt<5>("h10"), io_write_address), _registers_io_write_address, registers_16) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_17 = mux(eq(UInt<5>("h11"), io_write_address), _registers_io_write_address, registers_17) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_18 = mux(eq(UInt<5>("h12"), io_write_address), _registers_io_write_address, registers_18) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_19 = mux(eq(UInt<5>("h13"), io_write_address), _registers_io_write_address, registers_19) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_20 = mux(eq(UInt<5>("h14"), io_write_address), _registers_io_write_address, registers_20) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_21 = mux(eq(UInt<5>("h15"), io_write_address), _registers_io_write_address, registers_21) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_22 = mux(eq(UInt<5>("h16"), io_write_address), _registers_io_write_address, registers_22) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_23 = mux(eq(UInt<5>("h17"), io_write_address), _registers_io_write_address, registers_23) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_24 = mux(eq(UInt<5>("h18"), io_write_address), _registers_io_write_address, registers_24) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_25 = mux(eq(UInt<5>("h19"), io_write_address), _registers_io_write_address, registers_25) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_26 = mux(eq(UInt<5>("h1a"), io_write_address), _registers_io_write_address, registers_26) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_27 = mux(eq(UInt<5>("h1b"), io_write_address), _registers_io_write_address, registers_27) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_28 = mux(eq(UInt<5>("h1c"), io_write_address), _registers_io_write_address, registers_28) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_29 = mux(eq(UInt<5>("h1d"), io_write_address), _registers_io_write_address, registers_29) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_30 = mux(eq(UInt<5>("h1e"), io_write_address), _registers_io_write_address, registers_30) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_31 = mux(eq(UInt<5>("h1f"), io_write_address), _registers_io_write_address, registers_31) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 33:{35,35}]
    node _GEN_32 = mux(_T_3, _GEN_0, registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_33 = mux(_T_3, _GEN_1, registers_1) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_34 = mux(_T_3, _GEN_2, registers_2) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_35 = mux(_T_3, _GEN_3, registers_3) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_36 = mux(_T_3, _GEN_4, registers_4) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_37 = mux(_T_3, _GEN_5, registers_5) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_38 = mux(_T_3, _GEN_6, registers_6) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_39 = mux(_T_3, _GEN_7, registers_7) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_40 = mux(_T_3, _GEN_8, registers_8) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_41 = mux(_T_3, _GEN_9, registers_9) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_42 = mux(_T_3, _GEN_10, registers_10) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_43 = mux(_T_3, _GEN_11, registers_11) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_44 = mux(_T_3, _GEN_12, registers_12) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_45 = mux(_T_3, _GEN_13, registers_13) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_46 = mux(_T_3, _GEN_14, registers_14) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_47 = mux(_T_3, _GEN_15, registers_15) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_48 = mux(_T_3, _GEN_16, registers_16) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_49 = mux(_T_3, _GEN_17, registers_17) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_50 = mux(_T_3, _GEN_18, registers_18) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_51 = mux(_T_3, _GEN_19, registers_19) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_52 = mux(_T_3, _GEN_20, registers_20) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_53 = mux(_T_3, _GEN_21, registers_21) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_54 = mux(_T_3, _GEN_22, registers_22) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_55 = mux(_T_3, _GEN_23, registers_23) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_56 = mux(_T_3, _GEN_24, registers_24) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_57 = mux(_T_3, _GEN_25, registers_25) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_58 = mux(_T_3, _GEN_26, registers_26) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_59 = mux(_T_3, _GEN_27, registers_27) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_60 = mux(_T_3, _GEN_28, registers_28) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_61 = mux(_T_3, _GEN_29, registers_29) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_62 = mux(_T_3, _GEN_30, registers_30) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_63 = mux(_T_3, _GEN_31, registers_31) @[src/main/scala/riscv/core/RegisterFile.scala 29:26 32:55]
    node _GEN_64 = mux(_T_1, _GEN_32, registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_65 = mux(_T_1, _GEN_33, registers_1) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_66 = mux(_T_1, _GEN_34, registers_2) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_67 = mux(_T_1, _GEN_35, registers_3) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_68 = mux(_T_1, _GEN_36, registers_4) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_69 = mux(_T_1, _GEN_37, registers_5) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_70 = mux(_T_1, _GEN_38, registers_6) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_71 = mux(_T_1, _GEN_39, registers_7) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_72 = mux(_T_1, _GEN_40, registers_8) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_73 = mux(_T_1, _GEN_41, registers_9) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_74 = mux(_T_1, _GEN_42, registers_10) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_75 = mux(_T_1, _GEN_43, registers_11) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_76 = mux(_T_1, _GEN_44, registers_12) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_77 = mux(_T_1, _GEN_45, registers_13) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_78 = mux(_T_1, _GEN_46, registers_14) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_79 = mux(_T_1, _GEN_47, registers_15) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_80 = mux(_T_1, _GEN_48, registers_16) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_81 = mux(_T_1, _GEN_49, registers_17) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_82 = mux(_T_1, _GEN_50, registers_18) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_83 = mux(_T_1, _GEN_51, registers_19) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_84 = mux(_T_1, _GEN_52, registers_20) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_85 = mux(_T_1, _GEN_53, registers_21) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_86 = mux(_T_1, _GEN_54, registers_22) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_87 = mux(_T_1, _GEN_55, registers_23) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_88 = mux(_T_1, _GEN_56, registers_24) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_89 = mux(_T_1, _GEN_57, registers_25) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_90 = mux(_T_1, _GEN_58, registers_26) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_91 = mux(_T_1, _GEN_59, registers_27) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_92 = mux(_T_1, _GEN_60, registers_28) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_93 = mux(_T_1, _GEN_61, registers_29) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_94 = mux(_T_1, _GEN_62, registers_30) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _GEN_95 = mux(_T_1, _GEN_63, registers_31) @[src/main/scala/riscv/core/RegisterFile.scala 31:23 29:26]
    node _io_read_data1_T = eq(io_read_address1, UInt<1>("h0")) @[src/main/scala/riscv/core/RegisterFile.scala 38:22]
    node _GEN_96 = validif(eq(UInt<1>("h0"), io_read_address1), registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_97 = mux(eq(UInt<1>("h1"), io_read_address1), registers_1, _GEN_96) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_98 = mux(eq(UInt<2>("h2"), io_read_address1), registers_2, _GEN_97) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_99 = mux(eq(UInt<2>("h3"), io_read_address1), registers_3, _GEN_98) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_100 = mux(eq(UInt<3>("h4"), io_read_address1), registers_4, _GEN_99) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_101 = mux(eq(UInt<3>("h5"), io_read_address1), registers_5, _GEN_100) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_102 = mux(eq(UInt<3>("h6"), io_read_address1), registers_6, _GEN_101) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_103 = mux(eq(UInt<3>("h7"), io_read_address1), registers_7, _GEN_102) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_104 = mux(eq(UInt<4>("h8"), io_read_address1), registers_8, _GEN_103) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_105 = mux(eq(UInt<4>("h9"), io_read_address1), registers_9, _GEN_104) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_106 = mux(eq(UInt<4>("ha"), io_read_address1), registers_10, _GEN_105) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_107 = mux(eq(UInt<4>("hb"), io_read_address1), registers_11, _GEN_106) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_108 = mux(eq(UInt<4>("hc"), io_read_address1), registers_12, _GEN_107) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_109 = mux(eq(UInt<4>("hd"), io_read_address1), registers_13, _GEN_108) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_110 = mux(eq(UInt<4>("he"), io_read_address1), registers_14, _GEN_109) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_111 = mux(eq(UInt<4>("hf"), io_read_address1), registers_15, _GEN_110) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_112 = mux(eq(UInt<5>("h10"), io_read_address1), registers_16, _GEN_111) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_113 = mux(eq(UInt<5>("h11"), io_read_address1), registers_17, _GEN_112) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_114 = mux(eq(UInt<5>("h12"), io_read_address1), registers_18, _GEN_113) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_115 = mux(eq(UInt<5>("h13"), io_read_address1), registers_19, _GEN_114) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_116 = mux(eq(UInt<5>("h14"), io_read_address1), registers_20, _GEN_115) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_117 = mux(eq(UInt<5>("h15"), io_read_address1), registers_21, _GEN_116) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_118 = mux(eq(UInt<5>("h16"), io_read_address1), registers_22, _GEN_117) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_119 = mux(eq(UInt<5>("h17"), io_read_address1), registers_23, _GEN_118) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_120 = mux(eq(UInt<5>("h18"), io_read_address1), registers_24, _GEN_119) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_121 = mux(eq(UInt<5>("h19"), io_read_address1), registers_25, _GEN_120) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_122 = mux(eq(UInt<5>("h1a"), io_read_address1), registers_26, _GEN_121) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_123 = mux(eq(UInt<5>("h1b"), io_read_address1), registers_27, _GEN_122) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_124 = mux(eq(UInt<5>("h1c"), io_read_address1), registers_28, _GEN_123) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_125 = mux(eq(UInt<5>("h1d"), io_read_address1), registers_29, _GEN_124) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_126 = mux(eq(UInt<5>("h1e"), io_read_address1), registers_30, _GEN_125) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _GEN_127 = mux(eq(UInt<5>("h1f"), io_read_address1), registers_31, _GEN_126) @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
    node _registers_io_read_address1 = _GEN_127 @[src/main/scala/riscv/core/RegisterFile.scala 37:23]
    node _io_read_data1_T_1 = mux(_io_read_data1_T, UInt<1>("h0"), _registers_io_read_address1) @[src/main/scala/riscv/core/RegisterFile.scala 37:23]
    node _io_read_data2_T = eq(io_read_address2, UInt<1>("h0")) @[src/main/scala/riscv/core/RegisterFile.scala 44:22]
    node _GEN_128 = validif(eq(UInt<1>("h0"), io_read_address2), registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_129 = mux(eq(UInt<1>("h1"), io_read_address2), registers_1, _GEN_128) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_130 = mux(eq(UInt<2>("h2"), io_read_address2), registers_2, _GEN_129) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_131 = mux(eq(UInt<2>("h3"), io_read_address2), registers_3, _GEN_130) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_132 = mux(eq(UInt<3>("h4"), io_read_address2), registers_4, _GEN_131) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_133 = mux(eq(UInt<3>("h5"), io_read_address2), registers_5, _GEN_132) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_134 = mux(eq(UInt<3>("h6"), io_read_address2), registers_6, _GEN_133) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_135 = mux(eq(UInt<3>("h7"), io_read_address2), registers_7, _GEN_134) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_136 = mux(eq(UInt<4>("h8"), io_read_address2), registers_8, _GEN_135) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_137 = mux(eq(UInt<4>("h9"), io_read_address2), registers_9, _GEN_136) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_138 = mux(eq(UInt<4>("ha"), io_read_address2), registers_10, _GEN_137) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_139 = mux(eq(UInt<4>("hb"), io_read_address2), registers_11, _GEN_138) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_140 = mux(eq(UInt<4>("hc"), io_read_address2), registers_12, _GEN_139) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_141 = mux(eq(UInt<4>("hd"), io_read_address2), registers_13, _GEN_140) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_142 = mux(eq(UInt<4>("he"), io_read_address2), registers_14, _GEN_141) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_143 = mux(eq(UInt<4>("hf"), io_read_address2), registers_15, _GEN_142) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_144 = mux(eq(UInt<5>("h10"), io_read_address2), registers_16, _GEN_143) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_145 = mux(eq(UInt<5>("h11"), io_read_address2), registers_17, _GEN_144) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_146 = mux(eq(UInt<5>("h12"), io_read_address2), registers_18, _GEN_145) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_147 = mux(eq(UInt<5>("h13"), io_read_address2), registers_19, _GEN_146) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_148 = mux(eq(UInt<5>("h14"), io_read_address2), registers_20, _GEN_147) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_149 = mux(eq(UInt<5>("h15"), io_read_address2), registers_21, _GEN_148) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_150 = mux(eq(UInt<5>("h16"), io_read_address2), registers_22, _GEN_149) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_151 = mux(eq(UInt<5>("h17"), io_read_address2), registers_23, _GEN_150) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_152 = mux(eq(UInt<5>("h18"), io_read_address2), registers_24, _GEN_151) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_153 = mux(eq(UInt<5>("h19"), io_read_address2), registers_25, _GEN_152) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_154 = mux(eq(UInt<5>("h1a"), io_read_address2), registers_26, _GEN_153) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_155 = mux(eq(UInt<5>("h1b"), io_read_address2), registers_27, _GEN_154) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_156 = mux(eq(UInt<5>("h1c"), io_read_address2), registers_28, _GEN_155) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_157 = mux(eq(UInt<5>("h1d"), io_read_address2), registers_29, _GEN_156) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_158 = mux(eq(UInt<5>("h1e"), io_read_address2), registers_30, _GEN_157) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _GEN_159 = mux(eq(UInt<5>("h1f"), io_read_address2), registers_31, _GEN_158) @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
    node _registers_io_read_address2 = _GEN_159 @[src/main/scala/riscv/core/RegisterFile.scala 43:23]
    node _io_read_data2_T_1 = mux(_io_read_data2_T, UInt<1>("h0"), _registers_io_read_address2) @[src/main/scala/riscv/core/RegisterFile.scala 43:23]
    node _io_debug_read_data_T = eq(io_debug_read_address, UInt<1>("h0")) @[src/main/scala/riscv/core/RegisterFile.scala 50:27]
    node _GEN_160 = validif(eq(UInt<1>("h0"), io_debug_read_address), registers_0) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_161 = mux(eq(UInt<1>("h1"), io_debug_read_address), registers_1, _GEN_160) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_162 = mux(eq(UInt<2>("h2"), io_debug_read_address), registers_2, _GEN_161) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_163 = mux(eq(UInt<2>("h3"), io_debug_read_address), registers_3, _GEN_162) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_164 = mux(eq(UInt<3>("h4"), io_debug_read_address), registers_4, _GEN_163) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_165 = mux(eq(UInt<3>("h5"), io_debug_read_address), registers_5, _GEN_164) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_166 = mux(eq(UInt<3>("h6"), io_debug_read_address), registers_6, _GEN_165) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_167 = mux(eq(UInt<3>("h7"), io_debug_read_address), registers_7, _GEN_166) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_168 = mux(eq(UInt<4>("h8"), io_debug_read_address), registers_8, _GEN_167) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_169 = mux(eq(UInt<4>("h9"), io_debug_read_address), registers_9, _GEN_168) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_170 = mux(eq(UInt<4>("ha"), io_debug_read_address), registers_10, _GEN_169) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_171 = mux(eq(UInt<4>("hb"), io_debug_read_address), registers_11, _GEN_170) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_172 = mux(eq(UInt<4>("hc"), io_debug_read_address), registers_12, _GEN_171) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_173 = mux(eq(UInt<4>("hd"), io_debug_read_address), registers_13, _GEN_172) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_174 = mux(eq(UInt<4>("he"), io_debug_read_address), registers_14, _GEN_173) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_175 = mux(eq(UInt<4>("hf"), io_debug_read_address), registers_15, _GEN_174) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_176 = mux(eq(UInt<5>("h10"), io_debug_read_address), registers_16, _GEN_175) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_177 = mux(eq(UInt<5>("h11"), io_debug_read_address), registers_17, _GEN_176) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_178 = mux(eq(UInt<5>("h12"), io_debug_read_address), registers_18, _GEN_177) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_179 = mux(eq(UInt<5>("h13"), io_debug_read_address), registers_19, _GEN_178) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_180 = mux(eq(UInt<5>("h14"), io_debug_read_address), registers_20, _GEN_179) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_181 = mux(eq(UInt<5>("h15"), io_debug_read_address), registers_21, _GEN_180) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_182 = mux(eq(UInt<5>("h16"), io_debug_read_address), registers_22, _GEN_181) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_183 = mux(eq(UInt<5>("h17"), io_debug_read_address), registers_23, _GEN_182) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_184 = mux(eq(UInt<5>("h18"), io_debug_read_address), registers_24, _GEN_183) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_185 = mux(eq(UInt<5>("h19"), io_debug_read_address), registers_25, _GEN_184) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_186 = mux(eq(UInt<5>("h1a"), io_debug_read_address), registers_26, _GEN_185) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_187 = mux(eq(UInt<5>("h1b"), io_debug_read_address), registers_27, _GEN_186) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_188 = mux(eq(UInt<5>("h1c"), io_debug_read_address), registers_28, _GEN_187) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_189 = mux(eq(UInt<5>("h1d"), io_debug_read_address), registers_29, _GEN_188) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_190 = mux(eq(UInt<5>("h1e"), io_debug_read_address), registers_30, _GEN_189) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _GEN_191 = mux(eq(UInt<5>("h1f"), io_debug_read_address), registers_31, _GEN_190) @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
    node _registers_io_debug_read_address = _GEN_191 @[src/main/scala/riscv/core/RegisterFile.scala 49:28]
    node _io_debug_read_data_T_1 = mux(_io_debug_read_data_T, UInt<1>("h0"), _registers_io_debug_read_address) @[src/main/scala/riscv/core/RegisterFile.scala 49:28]
    node _registers_WIRE_0 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_1 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_2 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_3 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_4 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_5 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_6 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_7 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_8 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_9 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_10 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_11 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_12 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_13 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_14 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_15 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_16 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_17 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_18 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_19 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_20 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_21 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_22 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_23 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_24 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_25 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_26 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_27 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_28 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_29 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_30 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    node _registers_WIRE_31 = UInt<32>("h0") @[src/main/scala/riscv/core/RegisterFile.scala 29:{34,34}]
    io_read_data1 <= _io_read_data1_T_1 @[src/main/scala/riscv/core/RegisterFile.scala 37:17]
    io_read_data2 <= _io_read_data2_T_1 @[src/main/scala/riscv/core/RegisterFile.scala 43:17]
    io_debug_read_data <= _io_debug_read_data_T_1 @[src/main/scala/riscv/core/RegisterFile.scala 49:22]
    registers_0 <= mux(reset, _registers_WIRE_0, _GEN_64) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_1 <= mux(reset, _registers_WIRE_1, _GEN_65) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_2 <= mux(reset, _registers_WIRE_2, _GEN_66) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_3 <= mux(reset, _registers_WIRE_3, _GEN_67) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_4 <= mux(reset, _registers_WIRE_4, _GEN_68) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_5 <= mux(reset, _registers_WIRE_5, _GEN_69) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_6 <= mux(reset, _registers_WIRE_6, _GEN_70) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_7 <= mux(reset, _registers_WIRE_7, _GEN_71) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_8 <= mux(reset, _registers_WIRE_8, _GEN_72) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_9 <= mux(reset, _registers_WIRE_9, _GEN_73) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_10 <= mux(reset, _registers_WIRE_10, _GEN_74) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_11 <= mux(reset, _registers_WIRE_11, _GEN_75) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_12 <= mux(reset, _registers_WIRE_12, _GEN_76) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_13 <= mux(reset, _registers_WIRE_13, _GEN_77) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_14 <= mux(reset, _registers_WIRE_14, _GEN_78) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_15 <= mux(reset, _registers_WIRE_15, _GEN_79) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_16 <= mux(reset, _registers_WIRE_16, _GEN_80) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_17 <= mux(reset, _registers_WIRE_17, _GEN_81) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_18 <= mux(reset, _registers_WIRE_18, _GEN_82) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_19 <= mux(reset, _registers_WIRE_19, _GEN_83) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_20 <= mux(reset, _registers_WIRE_20, _GEN_84) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_21 <= mux(reset, _registers_WIRE_21, _GEN_85) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_22 <= mux(reset, _registers_WIRE_22, _GEN_86) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_23 <= mux(reset, _registers_WIRE_23, _GEN_87) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_24 <= mux(reset, _registers_WIRE_24, _GEN_88) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_25 <= mux(reset, _registers_WIRE_25, _GEN_89) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_26 <= mux(reset, _registers_WIRE_26, _GEN_90) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_27 <= mux(reset, _registers_WIRE_27, _GEN_91) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_28 <= mux(reset, _registers_WIRE_28, _GEN_92) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_29 <= mux(reset, _registers_WIRE_29, _GEN_93) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_30 <= mux(reset, _registers_WIRE_30, _GEN_94) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]
    registers_31 <= mux(reset, _registers_WIRE_31, _GEN_95) @[src/main/scala/riscv/core/RegisterFile.scala 29:{26,26}]

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

  module InstructionDecode :
    input clock : Clock
    input reset : UInt<1>
    input io_instruction : UInt<32> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_regs_reg1_read_address : UInt<5> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_regs_reg2_read_address : UInt<5> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_ex_immediate : UInt<32> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_ex_aluop1_source : UInt<1> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_ex_aluop2_source : UInt<1> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_memory_read_enable : UInt<1> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_memory_write_enable : UInt<1> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_wb_reg_write_source : UInt<2> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_reg_write_enable : UInt<1> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]
    output io_reg_write_address : UInt<5> @[src/main/scala/riscv/core/InstructionDecode.scala 127:14]

    node opcode = bits(io_instruction, 6, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 141:30]
    node funct3 = bits(io_instruction, 14, 12) @[src/main/scala/riscv/core/InstructionDecode.scala 142:30]
    node funct7 = bits(io_instruction, 31, 25) @[src/main/scala/riscv/core/InstructionDecode.scala 143:30]
    node rd = bits(io_instruction, 11, 7) @[src/main/scala/riscv/core/InstructionDecode.scala 144:30]
    node rs1 = bits(io_instruction, 19, 15) @[src/main/scala/riscv/core/InstructionDecode.scala 145:30]
    node rs2 = bits(io_instruction, 24, 20) @[src/main/scala/riscv/core/InstructionDecode.scala 146:30]
    node _io_regs_reg1_read_address_T = eq(opcode, UInt<6>("h37")) @[src/main/scala/riscv/core/InstructionDecode.scala 148:43]
    node _io_regs_reg1_read_address_T_1 = mux(_io_regs_reg1_read_address_T, UInt<5>("h0"), rs1) @[src/main/scala/riscv/core/InstructionDecode.scala 148:35]
    node _immediate_T = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 152:32]
    node _immediate_T_1 = bits(_immediate_T, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 152:13]
    node _immediate_T_2 = mux(_immediate_T_1, UInt<20>("hfffff"), UInt<20>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 152:13]
    node _immediate_T_3 = bits(io_instruction, 31, 20) @[src/main/scala/riscv/core/InstructionDecode.scala 152:53]
    node _immediate_T_4 = cat(_immediate_T_2, _immediate_T_3) @[src/main/scala/riscv/core/InstructionDecode.scala 152:8]
    node _immediate_T_5 = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 154:56]
    node _immediate_T_6 = bits(_immediate_T_5, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 154:37]
    node _immediate_T_7 = mux(_immediate_T_6, UInt<21>("h1fffff"), UInt<21>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 154:37]
    node _immediate_T_8 = bits(io_instruction, 30, 20) @[src/main/scala/riscv/core/InstructionDecode.scala 154:77]
    node _immediate_T_9 = cat(_immediate_T_7, _immediate_T_8) @[src/main/scala/riscv/core/InstructionDecode.scala 154:32]
    node _immediate_T_10 = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 155:56]
    node _immediate_T_11 = bits(_immediate_T_10, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 155:37]
    node _immediate_T_12 = mux(_immediate_T_11, UInt<21>("h1fffff"), UInt<21>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 155:37]
    node _immediate_T_13 = bits(io_instruction, 30, 20) @[src/main/scala/riscv/core/InstructionDecode.scala 155:77]
    node _immediate_T_14 = cat(_immediate_T_12, _immediate_T_13) @[src/main/scala/riscv/core/InstructionDecode.scala 155:32]
    node _immediate_T_15 = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 156:56]
    node _immediate_T_16 = bits(_immediate_T_15, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 156:37]
    node _immediate_T_17 = mux(_immediate_T_16, UInt<21>("h1fffff"), UInt<21>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 156:37]
    node _immediate_T_18 = bits(io_instruction, 30, 20) @[src/main/scala/riscv/core/InstructionDecode.scala 156:77]
    node _immediate_T_19 = cat(_immediate_T_17, _immediate_T_18) @[src/main/scala/riscv/core/InstructionDecode.scala 156:32]
    node _immediate_T_20 = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 157:56]
    node _immediate_T_21 = bits(_immediate_T_20, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 157:37]
    node _immediate_T_22 = mux(_immediate_T_21, UInt<21>("h1fffff"), UInt<21>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 157:37]
    node _immediate_T_23 = bits(io_instruction, 30, 25) @[src/main/scala/riscv/core/InstructionDecode.scala 157:77]
    node _immediate_T_24 = bits(io_instruction, 11, 7) @[src/main/scala/riscv/core/InstructionDecode.scala 157:101]
    node immediate_hi = cat(_immediate_T_22, _immediate_T_23) @[src/main/scala/riscv/core/InstructionDecode.scala 157:32]
    node _immediate_T_25 = cat(immediate_hi, _immediate_T_24) @[src/main/scala/riscv/core/InstructionDecode.scala 157:32]
    node _immediate_T_26 = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 159:32]
    node _immediate_T_27 = bits(_immediate_T_26, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 159:13]
    node _immediate_T_28 = mux(_immediate_T_27, UInt<20>("hfffff"), UInt<20>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 159:13]
    node _immediate_T_29 = bits(io_instruction, 7, 7) @[src/main/scala/riscv/core/InstructionDecode.scala 160:23]
    node _immediate_T_30 = bits(io_instruction, 30, 25) @[src/main/scala/riscv/core/InstructionDecode.scala 161:23]
    node _immediate_T_31 = bits(io_instruction, 11, 8) @[src/main/scala/riscv/core/InstructionDecode.scala 162:23]
    node immediate_lo = cat(_immediate_T_31, UInt<1>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
    node immediate_hi_hi = cat(_immediate_T_28, _immediate_T_29) @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
    node immediate_hi_1 = cat(immediate_hi_hi, _immediate_T_30) @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
    node _immediate_T_32 = cat(immediate_hi_1, immediate_lo) @[src/main/scala/riscv/core/InstructionDecode.scala 158:32]
    node _immediate_T_33 = bits(io_instruction, 31, 12) @[src/main/scala/riscv/core/InstructionDecode.scala 165:47]
    node _immediate_T_34 = cat(_immediate_T_33, UInt<12>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 165:32]
    node _immediate_T_35 = bits(io_instruction, 31, 12) @[src/main/scala/riscv/core/InstructionDecode.scala 166:47]
    node _immediate_T_36 = cat(_immediate_T_35, UInt<12>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 166:32]
    node _immediate_T_37 = bits(io_instruction, 31, 31) @[src/main/scala/riscv/core/InstructionDecode.scala 169:32]
    node _immediate_T_38 = bits(_immediate_T_37, 0, 0) @[src/main/scala/riscv/core/InstructionDecode.scala 169:13]
    node _immediate_T_39 = mux(_immediate_T_38, UInt<12>("hfff"), UInt<12>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 169:13]
    node _immediate_T_40 = bits(io_instruction, 19, 12) @[src/main/scala/riscv/core/InstructionDecode.scala 170:23]
    node _immediate_T_41 = bits(io_instruction, 20, 20) @[src/main/scala/riscv/core/InstructionDecode.scala 171:23]
    node _immediate_T_42 = bits(io_instruction, 30, 21) @[src/main/scala/riscv/core/InstructionDecode.scala 172:23]
    node immediate_lo_1 = cat(_immediate_T_42, UInt<1>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 168:30]
    node immediate_hi_hi_1 = cat(_immediate_T_39, _immediate_T_40) @[src/main/scala/riscv/core/InstructionDecode.scala 168:30]
    node immediate_hi_2 = cat(immediate_hi_hi_1, _immediate_T_41) @[src/main/scala/riscv/core/InstructionDecode.scala 168:30]
    node _immediate_T_43 = cat(immediate_hi_2, immediate_lo_1) @[src/main/scala/riscv/core/InstructionDecode.scala 168:30]
    node _immediate_T_44 = eq(UInt<5>("h13"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_45 = mux(_immediate_T_44, _immediate_T_9, _immediate_T_4) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_46 = eq(UInt<2>("h3"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_47 = mux(_immediate_T_46, _immediate_T_14, _immediate_T_45) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_48 = eq(UInt<7>("h67"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_49 = mux(_immediate_T_48, _immediate_T_19, _immediate_T_47) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_50 = eq(UInt<6>("h23"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_51 = mux(_immediate_T_50, _immediate_T_25, _immediate_T_49) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_52 = eq(UInt<7>("h63"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_53 = mux(_immediate_T_52, _immediate_T_32, _immediate_T_51) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_54 = eq(UInt<6>("h37"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_55 = mux(_immediate_T_54, _immediate_T_34, _immediate_T_53) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_56 = eq(UInt<5>("h17"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_57 = mux(_immediate_T_56, _immediate_T_36, _immediate_T_55) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _immediate_T_58 = eq(UInt<7>("h6f"), opcode) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node immediate = mux(_immediate_T_58, _immediate_T_43, _immediate_T_57) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_ex_aluop1_source_T = eq(opcode, UInt<5>("h17")) @[src/main/scala/riscv/core/InstructionDecode.scala 179:12]
    node _io_ex_aluop1_source_T_1 = eq(opcode, UInt<7>("h63")) @[src/main/scala/riscv/core/InstructionDecode.scala 179:45]
    node _io_ex_aluop1_source_T_2 = or(_io_ex_aluop1_source_T, _io_ex_aluop1_source_T_1) @[src/main/scala/riscv/core/InstructionDecode.scala 179:35]
    node _io_ex_aluop1_source_T_3 = eq(opcode, UInt<7>("h6f")) @[src/main/scala/riscv/core/InstructionDecode.scala 179:78]
    node _io_ex_aluop1_source_T_4 = or(_io_ex_aluop1_source_T_2, _io_ex_aluop1_source_T_3) @[src/main/scala/riscv/core/InstructionDecode.scala 179:68]
    node _io_ex_aluop1_source_T_5 = mux(_io_ex_aluop1_source_T_4, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 178:29]
    node _io_ex_aluop2_source_T = eq(opcode, UInt<6>("h33")) @[src/main/scala/riscv/core/InstructionDecode.scala 192:12]
    node _io_ex_aluop2_source_T_1 = mux(_io_ex_aluop2_source_T, UInt<1>("h0"), UInt<1>("h1")) @[src/main/scala/riscv/core/InstructionDecode.scala 191:29]
    node _io_memory_read_enable_T = eq(opcode, UInt<2>("h3")) @[src/main/scala/riscv/core/InstructionDecode.scala 198:39]
    node _io_memory_read_enable_T_1 = mux(_io_memory_read_enable_T, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 198:31]
    node _io_memory_write_enable_T = eq(opcode, UInt<6>("h23")) @[src/main/scala/riscv/core/InstructionDecode.scala 199:40]
    node _io_memory_write_enable_T_1 = mux(_io_memory_write_enable_T, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/riscv/core/InstructionDecode.scala 199:32]
    node _io_wb_reg_write_source_T = eq(opcode, UInt<6>("h33")) @[src/main/scala/riscv/core/InstructionDecode.scala 205:15]
    node _io_wb_reg_write_source_T_1 = eq(opcode, UInt<5>("h13")) @[src/main/scala/riscv/core/InstructionDecode.scala 205:49]
    node _io_wb_reg_write_source_T_2 = or(_io_wb_reg_write_source_T, _io_wb_reg_write_source_T_1) @[src/main/scala/riscv/core/InstructionDecode.scala 205:39]
    node _io_wb_reg_write_source_T_3 = eq(opcode, UInt<6>("h37")) @[src/main/scala/riscv/core/InstructionDecode.scala 206:16]
    node _io_wb_reg_write_source_T_4 = or(_io_wb_reg_write_source_T_2, _io_wb_reg_write_source_T_3) @[src/main/scala/riscv/core/InstructionDecode.scala 205:72]
    node _io_wb_reg_write_source_T_5 = eq(opcode, UInt<5>("h17")) @[src/main/scala/riscv/core/InstructionDecode.scala 206:47]
    node _io_wb_reg_write_source_T_6 = or(_io_wb_reg_write_source_T_4, _io_wb_reg_write_source_T_5) @[src/main/scala/riscv/core/InstructionDecode.scala 206:37]
    node _io_wb_reg_write_source_T_7 = eq(opcode, UInt<2>("h3")) @[src/main/scala/riscv/core/InstructionDecode.scala 207:15]
    node _io_wb_reg_write_source_T_8 = eq(opcode, UInt<7>("h6f")) @[src/main/scala/riscv/core/InstructionDecode.scala 208:15]
    node _io_wb_reg_write_source_T_9 = eq(opcode, UInt<7>("h67")) @[src/main/scala/riscv/core/InstructionDecode.scala 208:46]
    node _io_wb_reg_write_source_T_10 = or(_io_wb_reg_write_source_T_8, _io_wb_reg_write_source_T_9) @[src/main/scala/riscv/core/InstructionDecode.scala 208:36]
    node _io_wb_reg_write_source_T_11 = mux(_io_wb_reg_write_source_T_10, UInt<2>("h3"), UInt<2>("h0")) @[src/main/scala/chisel3/util/Mux.scala 141:16]
    node _io_wb_reg_write_source_T_12 = mux(_io_wb_reg_write_source_T_7, UInt<2>("h1"), _io_wb_reg_write_source_T_11) @[src/main/scala/chisel3/util/Mux.scala 141:16]
    node _io_wb_reg_write_source_T_13 = mux(_io_wb_reg_write_source_T_6, UInt<2>("h0"), _io_wb_reg_write_source_T_12) @[src/main/scala/chisel3/util/Mux.scala 141:16]
    node _io_reg_write_enable_T = eq(opcode, UInt<6>("h33")) @[src/main/scala/riscv/core/InstructionDecode.scala 212:34]
    node _io_reg_write_enable_T_1 = eq(opcode, UInt<5>("h13")) @[src/main/scala/riscv/core/InstructionDecode.scala 212:70]
    node _io_reg_write_enable_T_2 = or(_io_reg_write_enable_T, _io_reg_write_enable_T_1) @[src/main/scala/riscv/core/InstructionDecode.scala 212:59]
    node _io_reg_write_enable_T_3 = eq(opcode, UInt<2>("h3")) @[src/main/scala/riscv/core/InstructionDecode.scala 213:13]
    node _io_reg_write_enable_T_4 = or(_io_reg_write_enable_T_2, _io_reg_write_enable_T_3) @[src/main/scala/riscv/core/InstructionDecode.scala 212:94]
    node _io_reg_write_enable_T_5 = eq(opcode, UInt<5>("h17")) @[src/main/scala/riscv/core/InstructionDecode.scala 213:48]
    node _io_reg_write_enable_T_6 = or(_io_reg_write_enable_T_4, _io_reg_write_enable_T_5) @[src/main/scala/riscv/core/InstructionDecode.scala 213:37]
    node _io_reg_write_enable_T_7 = eq(opcode, UInt<6>("h37")) @[src/main/scala/riscv/core/InstructionDecode.scala 213:83]
    node _io_reg_write_enable_T_8 = or(_io_reg_write_enable_T_6, _io_reg_write_enable_T_7) @[src/main/scala/riscv/core/InstructionDecode.scala 213:72]
    node _io_reg_write_enable_T_9 = eq(opcode, UInt<7>("h6f")) @[src/main/scala/riscv/core/InstructionDecode.scala 214:13]
    node _io_reg_write_enable_T_10 = or(_io_reg_write_enable_T_8, _io_reg_write_enable_T_9) @[src/main/scala/riscv/core/InstructionDecode.scala 213:105]
    node _io_reg_write_enable_T_11 = eq(opcode, UInt<7>("h67")) @[src/main/scala/riscv/core/InstructionDecode.scala 214:46]
    node _io_reg_write_enable_T_12 = or(_io_reg_write_enable_T_10, _io_reg_write_enable_T_11) @[src/main/scala/riscv/core/InstructionDecode.scala 214:35]
    io_regs_reg1_read_address <= _io_regs_reg1_read_address_T_1 @[src/main/scala/riscv/core/InstructionDecode.scala 148:29]
    io_regs_reg2_read_address <= rs2 @[src/main/scala/riscv/core/InstructionDecode.scala 149:29]
    io_ex_immediate <= immediate @[src/main/scala/riscv/core/InstructionDecode.scala 177:19]
    io_ex_aluop1_source <= _io_ex_aluop1_source_T_5 @[src/main/scala/riscv/core/InstructionDecode.scala 178:23]
    io_ex_aluop2_source <= _io_ex_aluop2_source_T_1 @[src/main/scala/riscv/core/InstructionDecode.scala 191:23]
    io_memory_read_enable <= _io_memory_read_enable_T_1 @[src/main/scala/riscv/core/InstructionDecode.scala 198:25]
    io_memory_write_enable <= _io_memory_write_enable_T_1 @[src/main/scala/riscv/core/InstructionDecode.scala 199:26]
    io_wb_reg_write_source <= _io_wb_reg_write_source_T_13 @[src/main/scala/riscv/core/InstructionDecode.scala 202:26]
    io_reg_write_enable <= _io_reg_write_enable_T_12 @[src/main/scala/riscv/core/InstructionDecode.scala 212:23]
    io_reg_write_address <= rd @[src/main/scala/riscv/core/InstructionDecode.scala 215:24]

  module ALU :
    input clock : Clock
    input reset : UInt<1>
    input io_func : UInt<4> @[src/main/scala/riscv/core/ALU.scala 16:14]
    input io_op1 : UInt<32> @[src/main/scala/riscv/core/ALU.scala 16:14]
    input io_op2 : UInt<32> @[src/main/scala/riscv/core/ALU.scala 16:14]
    output io_result : UInt<32> @[src/main/scala/riscv/core/ALU.scala 16:14]

    node _T = asUInt(UInt<1>("h1")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_1 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_2 = eq(_T, _T_1) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T = add(io_op1, io_op2) @[src/main/scala/riscv/core/ALU.scala 28:27]
    node _io_result_T_1 = tail(_io_result_T, 1) @[src/main/scala/riscv/core/ALU.scala 28:27]
    node _T_3 = asUInt(UInt<2>("h2")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_4 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_5 = eq(_T_3, _T_4) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_2 = sub(io_op1, io_op2) @[src/main/scala/riscv/core/ALU.scala 31:27]
    node _io_result_T_3 = tail(_io_result_T_2, 1) @[src/main/scala/riscv/core/ALU.scala 31:27]
    node _T_6 = asUInt(UInt<2>("h3")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_7 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_8 = eq(_T_6, _T_7) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_4 = bits(io_op2, 4, 0) @[src/main/scala/riscv/core/ALU.scala 34:36]
    node _io_result_T_5 = dshl(io_op1, _io_result_T_4) @[src/main/scala/riscv/core/ALU.scala 34:27]
    node _T_9 = asUInt(UInt<3>("h4")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_10 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_11 = eq(_T_9, _T_10) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_6 = asSInt(io_op1) @[src/main/scala/riscv/core/ALU.scala 37:27]
    node _io_result_T_7 = asSInt(io_op2) @[src/main/scala/riscv/core/ALU.scala 37:43]
    node _io_result_T_8 = lt(_io_result_T_6, _io_result_T_7) @[src/main/scala/riscv/core/ALU.scala 37:34]
    node _T_12 = asUInt(UInt<3>("h5")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_13 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_14 = eq(_T_12, _T_13) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_9 = xor(io_op1, io_op2) @[src/main/scala/riscv/core/ALU.scala 40:27]
    node _T_15 = asUInt(UInt<3>("h6")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_16 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_17 = eq(_T_15, _T_16) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_10 = or(io_op1, io_op2) @[src/main/scala/riscv/core/ALU.scala 43:27]
    node _T_18 = asUInt(UInt<3>("h7")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_19 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_20 = eq(_T_18, _T_19) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_11 = and(io_op1, io_op2) @[src/main/scala/riscv/core/ALU.scala 46:27]
    node _T_21 = asUInt(UInt<4>("h8")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_22 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_23 = eq(_T_21, _T_22) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_12 = bits(io_op2, 4, 0) @[src/main/scala/riscv/core/ALU.scala 49:36]
    node _io_result_T_13 = dshr(io_op1, _io_result_T_12) @[src/main/scala/riscv/core/ALU.scala 49:27]
    node _T_24 = asUInt(UInt<4>("h9")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_25 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_26 = eq(_T_24, _T_25) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_14 = asSInt(io_op1) @[src/main/scala/riscv/core/ALU.scala 52:28]
    node _io_result_T_15 = bits(io_op2, 4, 0) @[src/main/scala/riscv/core/ALU.scala 52:44]
    node _io_result_T_16 = dshr(_io_result_T_14, _io_result_T_15) @[src/main/scala/riscv/core/ALU.scala 52:35]
    node _io_result_T_17 = asUInt(_io_result_T_16) @[src/main/scala/riscv/core/ALU.scala 52:52]
    node _T_27 = asUInt(UInt<4>("ha")) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_28 = asUInt(io_func) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _T_29 = eq(_T_27, _T_28) @[src/main/scala/riscv/core/ALU.scala 26:19]
    node _io_result_T_18 = lt(io_op1, io_op2) @[src/main/scala/riscv/core/ALU.scala 55:27]
    node _GEN_0 = mux(_T_29, _io_result_T_18, UInt<1>("h0")) @[src/main/scala/riscv/core/ALU.scala 25:13 26:19 55:17]
    node _GEN_1 = mux(_T_26, _io_result_T_17, _GEN_0) @[src/main/scala/riscv/core/ALU.scala 26:19 52:17]
    node _GEN_2 = mux(_T_23, _io_result_T_13, _GEN_1) @[src/main/scala/riscv/core/ALU.scala 26:19 49:17]
    node _GEN_3 = mux(_T_20, _io_result_T_11, _GEN_2) @[src/main/scala/riscv/core/ALU.scala 26:19 46:17]
    node _GEN_4 = mux(_T_17, _io_result_T_10, _GEN_3) @[src/main/scala/riscv/core/ALU.scala 26:19 43:17]
    node _GEN_5 = mux(_T_14, _io_result_T_9, _GEN_4) @[src/main/scala/riscv/core/ALU.scala 26:19 40:17]
    node _GEN_6 = mux(_T_11, _io_result_T_8, _GEN_5) @[src/main/scala/riscv/core/ALU.scala 26:19 37:17]
    node _GEN_7 = mux(_T_8, _io_result_T_5, _GEN_6) @[src/main/scala/riscv/core/ALU.scala 26:19 34:17]
    node _GEN_8 = mux(_T_5, _io_result_T_3, _GEN_7) @[src/main/scala/riscv/core/ALU.scala 26:19 31:17]
    node _GEN_9 = mux(_T_2, _io_result_T_1, _GEN_8) @[src/main/scala/riscv/core/ALU.scala 26:19 28:17]
    io_result <= bits(_GEN_9, 31, 0)

  module ALUControl :
    input clock : Clock
    input reset : UInt<1>
    input io_opcode : UInt<7> @[src/main/scala/riscv/core/ALUControl.scala 10:14]
    input io_funct3 : UInt<3> @[src/main/scala/riscv/core/ALUControl.scala 10:14]
    input io_funct7 : UInt<7> @[src/main/scala/riscv/core/ALUControl.scala 10:14]
    output io_alu_funct : UInt<4> @[src/main/scala/riscv/core/ALUControl.scala 10:14]

    node _T = eq(UInt<5>("h13"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _io_alu_funct_T = bits(io_funct7, 5, 5) @[src/main/scala/riscv/core/ALUControl.scala 33:51]
    node _io_alu_funct_T_1 = mux(_io_alu_funct_T, UInt<4>("h9"), UInt<4>("h8")) @[src/main/scala/riscv/core/ALUControl.scala 33:41]
    node _io_alu_funct_T_2 = eq(UInt<1>("h1"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_3 = mux(_io_alu_funct_T_2, UInt<2>("h3"), UInt<1>("h1")) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_4 = eq(UInt<2>("h2"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_5 = mux(_io_alu_funct_T_4, UInt<3>("h4"), _io_alu_funct_T_3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_6 = eq(UInt<2>("h3"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_7 = mux(_io_alu_funct_T_6, UInt<4>("ha"), _io_alu_funct_T_5) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_8 = eq(UInt<3>("h4"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_9 = mux(_io_alu_funct_T_8, UInt<3>("h5"), _io_alu_funct_T_7) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_10 = eq(UInt<3>("h6"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_11 = mux(_io_alu_funct_T_10, UInt<3>("h6"), _io_alu_funct_T_9) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_12 = eq(UInt<3>("h7"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_13 = mux(_io_alu_funct_T_12, UInt<3>("h7"), _io_alu_funct_T_11) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_14 = eq(UInt<3>("h5"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_15 = mux(_io_alu_funct_T_14, _io_alu_funct_T_1, _io_alu_funct_T_13) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _T_1 = eq(UInt<6>("h33"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _io_alu_funct_T_16 = bits(io_funct7, 5, 5) @[src/main/scala/riscv/core/ALUControl.scala 42:53]
    node _io_alu_funct_T_17 = mux(_io_alu_funct_T_16, UInt<2>("h2"), UInt<1>("h1")) @[src/main/scala/riscv/core/ALUControl.scala 42:43]
    node _io_alu_funct_T_18 = bits(io_funct7, 5, 5) @[src/main/scala/riscv/core/ALUControl.scala 49:53]
    node _io_alu_funct_T_19 = mux(_io_alu_funct_T_18, UInt<4>("h9"), UInt<4>("h8")) @[src/main/scala/riscv/core/ALUControl.scala 49:43]
    node _io_alu_funct_T_20 = eq(UInt<1>("h1"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_21 = mux(_io_alu_funct_T_20, UInt<2>("h3"), _io_alu_funct_T_17) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_22 = eq(UInt<2>("h2"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_23 = mux(_io_alu_funct_T_22, UInt<3>("h4"), _io_alu_funct_T_21) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_24 = eq(UInt<2>("h3"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_25 = mux(_io_alu_funct_T_24, UInt<4>("ha"), _io_alu_funct_T_23) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_26 = eq(UInt<3>("h4"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_27 = mux(_io_alu_funct_T_26, UInt<3>("h5"), _io_alu_funct_T_25) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_28 = eq(UInt<3>("h6"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_29 = mux(_io_alu_funct_T_28, UInt<3>("h6"), _io_alu_funct_T_27) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_30 = eq(UInt<3>("h7"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_31 = mux(_io_alu_funct_T_30, UInt<3>("h7"), _io_alu_funct_T_29) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_32 = eq(UInt<3>("h5"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_alu_funct_T_33 = mux(_io_alu_funct_T_32, _io_alu_funct_T_19, _io_alu_funct_T_31) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _T_2 = eq(UInt<7>("h63"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _T_3 = eq(UInt<2>("h3"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _T_4 = eq(UInt<6>("h23"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _T_5 = eq(UInt<7>("h6f"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _T_6 = eq(UInt<7>("h67"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _T_7 = eq(UInt<6>("h37"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _T_8 = eq(UInt<5>("h17"), io_opcode) @[src/main/scala/riscv/core/ALUControl.scala 20:21]
    node _GEN_0 = mux(_T_8, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/riscv/core/ALUControl.scala 18:16 20:21 72:20]
    node _GEN_1 = mux(_T_7, UInt<1>("h1"), _GEN_0) @[src/main/scala/riscv/core/ALUControl.scala 20:21 69:20]
    node _GEN_2 = mux(_T_6, UInt<1>("h1"), _GEN_1) @[src/main/scala/riscv/core/ALUControl.scala 20:21 66:20]
    node _GEN_3 = mux(_T_5, UInt<1>("h1"), _GEN_2) @[src/main/scala/riscv/core/ALUControl.scala 20:21 63:20]
    node _GEN_4 = mux(_T_4, UInt<1>("h1"), _GEN_3) @[src/main/scala/riscv/core/ALUControl.scala 20:21 60:20]
    node _GEN_5 = mux(_T_3, UInt<1>("h1"), _GEN_4) @[src/main/scala/riscv/core/ALUControl.scala 20:21 57:20]
    node _GEN_6 = mux(_T_2, UInt<1>("h1"), _GEN_5) @[src/main/scala/riscv/core/ALUControl.scala 20:21 54:20]
    node _GEN_7 = mux(_T_1, _io_alu_funct_T_33, _GEN_6) @[src/main/scala/riscv/core/ALUControl.scala 20:21 38:20]
    node _GEN_8 = mux(_T, _io_alu_funct_T_15, _GEN_7) @[src/main/scala/riscv/core/ALUControl.scala 20:21 22:20]
    io_alu_funct <= _GEN_8

  module Execute :
    input clock : Clock
    input reset : UInt<1>
    input io_instruction : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]
    input io_instruction_address : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]
    input io_reg1_data : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]
    input io_reg2_data : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]
    input io_immediate : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]
    input io_aluop1_source : UInt<1> @[src/main/scala/riscv/core/Execute.scala 12:14]
    input io_aluop2_source : UInt<1> @[src/main/scala/riscv/core/Execute.scala 12:14]
    output io_mem_alu_result : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]
    output io_if_jump_flag : UInt<1> @[src/main/scala/riscv/core/Execute.scala 12:14]
    output io_if_jump_address : UInt<32> @[src/main/scala/riscv/core/Execute.scala 12:14]

    inst alu of ALU @[src/main/scala/riscv/core/Execute.scala 32:24]
    inst alu_ctrl of ALUControl @[src/main/scala/riscv/core/Execute.scala 33:24]
    node opcode = bits(io_instruction, 6, 0) @[src/main/scala/riscv/core/Execute.scala 26:30]
    node funct3 = bits(io_instruction, 14, 12) @[src/main/scala/riscv/core/Execute.scala 27:30]
    node funct7 = bits(io_instruction, 31, 25) @[src/main/scala/riscv/core/Execute.scala 28:30]
    node rd = bits(io_instruction, 11, 7) @[src/main/scala/riscv/core/Execute.scala 29:30]
    node uimm = bits(io_instruction, 19, 15) @[src/main/scala/riscv/core/Execute.scala 30:30]
    node _T = eq(io_aluop2_source, UInt<1>("h0")) @[src/main/scala/riscv/core/Execute.scala 44:25]
    node _GEN_0 = mux(_T, io_reg2_data, io_immediate) @[src/main/scala/riscv/core/Execute.scala 44:33 45:14 47:20]
    node _io_if_jump_flag_T = eq(opcode, UInt<7>("h6f")) @[src/main/scala/riscv/core/Execute.scala 52:30]
    node _io_if_jump_flag_T_1 = eq(opcode, UInt<7>("h67")) @[src/main/scala/riscv/core/Execute.scala 53:13]
    node _io_if_jump_flag_T_2 = or(_io_if_jump_flag_T, _io_if_jump_flag_T_1) @[src/main/scala/riscv/core/Execute.scala 52:52]
    node _io_if_jump_flag_T_3 = eq(opcode, UInt<7>("h63")) @[src/main/scala/riscv/core/Execute.scala 54:13]
    node _io_if_jump_flag_T_4 = eq(io_reg1_data, io_reg2_data) @[src/main/scala/riscv/core/Execute.scala 58:49]
    node _io_if_jump_flag_T_5 = neq(io_reg1_data, io_reg2_data) @[src/main/scala/riscv/core/Execute.scala 59:49]
    node _io_if_jump_flag_T_6 = asSInt(io_reg1_data) @[src/main/scala/riscv/core/Execute.scala 60:49]
    node _io_if_jump_flag_T_7 = asSInt(io_reg2_data) @[src/main/scala/riscv/core/Execute.scala 60:71]
    node _io_if_jump_flag_T_8 = lt(_io_if_jump_flag_T_6, _io_if_jump_flag_T_7) @[src/main/scala/riscv/core/Execute.scala 60:56]
    node _io_if_jump_flag_T_9 = asSInt(io_reg1_data) @[src/main/scala/riscv/core/Execute.scala 61:49]
    node _io_if_jump_flag_T_10 = asSInt(io_reg2_data) @[src/main/scala/riscv/core/Execute.scala 61:72]
    node _io_if_jump_flag_T_11 = geq(_io_if_jump_flag_T_9, _io_if_jump_flag_T_10) @[src/main/scala/riscv/core/Execute.scala 61:56]
    node _io_if_jump_flag_T_12 = lt(io_reg1_data, io_reg2_data) @[src/main/scala/riscv/core/Execute.scala 62:56]
    node _io_if_jump_flag_T_13 = geq(io_reg1_data, io_reg2_data) @[src/main/scala/riscv/core/Execute.scala 63:56]
    node _io_if_jump_flag_T_14 = eq(UInt<1>("h0"), funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_15 = mux(_io_if_jump_flag_T_14, _io_if_jump_flag_T_4, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_16 = eq(UInt<1>("h1"), funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_17 = mux(_io_if_jump_flag_T_16, _io_if_jump_flag_T_5, _io_if_jump_flag_T_15) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_18 = eq(UInt<3>("h4"), funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_19 = mux(_io_if_jump_flag_T_18, _io_if_jump_flag_T_8, _io_if_jump_flag_T_17) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_20 = eq(UInt<3>("h5"), funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_21 = mux(_io_if_jump_flag_T_20, _io_if_jump_flag_T_11, _io_if_jump_flag_T_19) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_22 = eq(UInt<3>("h6"), funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_23 = mux(_io_if_jump_flag_T_22, _io_if_jump_flag_T_12, _io_if_jump_flag_T_21) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_24 = eq(UInt<3>("h7"), funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_25 = mux(_io_if_jump_flag_T_24, _io_if_jump_flag_T_13, _io_if_jump_flag_T_23) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_if_jump_flag_T_26 = and(_io_if_jump_flag_T_3, _io_if_jump_flag_T_25) @[src/main/scala/riscv/core/Execute.scala 54:37]
    node _io_if_jump_flag_T_27 = or(_io_if_jump_flag_T_2, _io_if_jump_flag_T_26) @[src/main/scala/riscv/core/Execute.scala 53:36]
    node _io_if_jump_address_T = eq(opcode, UInt<7>("h67")) @[src/main/scala/riscv/core/Execute.scala 66:51]
    node _io_if_jump_address_T_1 = mux(_io_if_jump_address_T, io_reg1_data, io_instruction_address) @[src/main/scala/riscv/core/Execute.scala 66:43]
    node _io_if_jump_address_T_2 = add(io_immediate, _io_if_jump_address_T_1) @[src/main/scala/riscv/core/Execute.scala 66:38]
    node _io_if_jump_address_T_3 = tail(_io_if_jump_address_T_2, 1) @[src/main/scala/riscv/core/Execute.scala 66:38]
    io_mem_alu_result <= alu.io_result @[src/main/scala/riscv/core/Execute.scala 51:21]
    io_if_jump_flag <= _io_if_jump_flag_T_27 @[src/main/scala/riscv/core/Execute.scala 52:19]
    io_if_jump_address <= _io_if_jump_address_T_3 @[src/main/scala/riscv/core/Execute.scala 66:22]
    alu.clock <= clock
    alu.reset <= reset
    alu.io_func <= alu_ctrl.io_alu_funct @[src/main/scala/riscv/core/Execute.scala 40:15]
    alu.io_op1 <= io_reg1_data @[src/main/scala/riscv/core/Execute.scala 41:14]
    alu.io_op2 <= _GEN_0
    alu_ctrl.clock <= clock
    alu_ctrl.reset <= reset
    alu_ctrl.io_opcode <= opcode @[src/main/scala/riscv/core/Execute.scala 35:22]
    alu_ctrl.io_funct3 <= funct3 @[src/main/scala/riscv/core/Execute.scala 36:22]
    alu_ctrl.io_funct7 <= funct7 @[src/main/scala/riscv/core/Execute.scala 37:22]

  module MemoryAccess :
    input clock : Clock
    input reset : UInt<1>
    input io_alu_result : UInt<32> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    input io_reg2_data : UInt<32> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    input io_memory_read_enable : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    input io_memory_write_enable : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    input io_funct3 : UInt<3> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_wb_memory_read_data : UInt<32> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_address : UInt<32> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_write_data : UInt<32> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_write_enable : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_write_strobe_0 : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_write_strobe_1 : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_write_strobe_2 : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    output io_memory_bundle_write_strobe_3 : UInt<1> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]
    input io_memory_bundle_read_data : UInt<32> @[src/main/scala/riscv/core/MemoryAccess.scala 12:14]

    node mem_address_index = bits(io_alu_result, 1, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 23:40]
    node _io_wb_memory_read_data_T = bits(io_memory_bundle_read_data, 31, 31) @[src/main/scala/riscv/core/MemoryAccess.scala 39:28]
    node _io_wb_memory_read_data_T_1 = bits(_io_wb_memory_read_data_T, 0, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 39:19]
    node _io_wb_memory_read_data_T_2 = mux(_io_wb_memory_read_data_T_1, UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 39:19]
    node _io_wb_memory_read_data_T_3 = bits(io_memory_bundle_read_data, 31, 24) @[src/main/scala/riscv/core/MemoryAccess.scala 39:39]
    node _io_wb_memory_read_data_T_4 = cat(_io_wb_memory_read_data_T_2, _io_wb_memory_read_data_T_3) @[src/main/scala/riscv/core/MemoryAccess.scala 39:14]
    node _io_wb_memory_read_data_T_5 = bits(io_memory_bundle_read_data, 7, 7) @[src/main/scala/riscv/core/MemoryAccess.scala 41:37]
    node _io_wb_memory_read_data_T_6 = bits(_io_wb_memory_read_data_T_5, 0, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 41:28]
    node _io_wb_memory_read_data_T_7 = mux(_io_wb_memory_read_data_T_6, UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 41:28]
    node _io_wb_memory_read_data_T_8 = bits(io_memory_bundle_read_data, 7, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 41:47]
    node _io_wb_memory_read_data_T_9 = cat(_io_wb_memory_read_data_T_7, _io_wb_memory_read_data_T_8) @[src/main/scala/riscv/core/MemoryAccess.scala 41:23]
    node _io_wb_memory_read_data_T_10 = bits(io_memory_bundle_read_data, 15, 15) @[src/main/scala/riscv/core/MemoryAccess.scala 42:37]
    node _io_wb_memory_read_data_T_11 = bits(_io_wb_memory_read_data_T_10, 0, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 42:28]
    node _io_wb_memory_read_data_T_12 = mux(_io_wb_memory_read_data_T_11, UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 42:28]
    node _io_wb_memory_read_data_T_13 = bits(io_memory_bundle_read_data, 15, 8) @[src/main/scala/riscv/core/MemoryAccess.scala 42:48]
    node _io_wb_memory_read_data_T_14 = cat(_io_wb_memory_read_data_T_12, _io_wb_memory_read_data_T_13) @[src/main/scala/riscv/core/MemoryAccess.scala 42:23]
    node _io_wb_memory_read_data_T_15 = bits(io_memory_bundle_read_data, 23, 23) @[src/main/scala/riscv/core/MemoryAccess.scala 43:37]
    node _io_wb_memory_read_data_T_16 = bits(_io_wb_memory_read_data_T_15, 0, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 43:28]
    node _io_wb_memory_read_data_T_17 = mux(_io_wb_memory_read_data_T_16, UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 43:28]
    node _io_wb_memory_read_data_T_18 = bits(io_memory_bundle_read_data, 23, 16) @[src/main/scala/riscv/core/MemoryAccess.scala 43:48]
    node _io_wb_memory_read_data_T_19 = cat(_io_wb_memory_read_data_T_17, _io_wb_memory_read_data_T_18) @[src/main/scala/riscv/core/MemoryAccess.scala 43:23]
    node _io_wb_memory_read_data_T_20 = eq(UInt<1>("h0"), mem_address_index) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_21 = mux(_io_wb_memory_read_data_T_20, _io_wb_memory_read_data_T_9, _io_wb_memory_read_data_T_4) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_22 = eq(UInt<1>("h1"), mem_address_index) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_23 = mux(_io_wb_memory_read_data_T_22, _io_wb_memory_read_data_T_14, _io_wb_memory_read_data_T_21) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_24 = eq(UInt<2>("h2"), mem_address_index) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_25 = mux(_io_wb_memory_read_data_T_24, _io_wb_memory_read_data_T_19, _io_wb_memory_read_data_T_23) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_26 = mux(UInt<1>("h0"), UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 48:19]
    node _io_wb_memory_read_data_T_27 = bits(io_memory_bundle_read_data, 31, 24) @[src/main/scala/riscv/core/MemoryAccess.scala 48:34]
    node _io_wb_memory_read_data_T_28 = cat(_io_wb_memory_read_data_T_26, _io_wb_memory_read_data_T_27) @[src/main/scala/riscv/core/MemoryAccess.scala 48:14]
    node _io_wb_memory_read_data_T_29 = mux(UInt<1>("h0"), UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 50:28]
    node _io_wb_memory_read_data_T_30 = bits(io_memory_bundle_read_data, 7, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 50:43]
    node _io_wb_memory_read_data_T_31 = cat(_io_wb_memory_read_data_T_29, _io_wb_memory_read_data_T_30) @[src/main/scala/riscv/core/MemoryAccess.scala 50:23]
    node _io_wb_memory_read_data_T_32 = mux(UInt<1>("h0"), UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 51:28]
    node _io_wb_memory_read_data_T_33 = bits(io_memory_bundle_read_data, 15, 8) @[src/main/scala/riscv/core/MemoryAccess.scala 51:43]
    node _io_wb_memory_read_data_T_34 = cat(_io_wb_memory_read_data_T_32, _io_wb_memory_read_data_T_33) @[src/main/scala/riscv/core/MemoryAccess.scala 51:23]
    node _io_wb_memory_read_data_T_35 = mux(UInt<1>("h0"), UInt<24>("hffffff"), UInt<24>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 52:28]
    node _io_wb_memory_read_data_T_36 = bits(io_memory_bundle_read_data, 23, 16) @[src/main/scala/riscv/core/MemoryAccess.scala 52:43]
    node _io_wb_memory_read_data_T_37 = cat(_io_wb_memory_read_data_T_35, _io_wb_memory_read_data_T_36) @[src/main/scala/riscv/core/MemoryAccess.scala 52:23]
    node _io_wb_memory_read_data_T_38 = eq(UInt<1>("h0"), mem_address_index) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_39 = mux(_io_wb_memory_read_data_T_38, _io_wb_memory_read_data_T_31, _io_wb_memory_read_data_T_28) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_40 = eq(UInt<1>("h1"), mem_address_index) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_41 = mux(_io_wb_memory_read_data_T_40, _io_wb_memory_read_data_T_34, _io_wb_memory_read_data_T_39) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_42 = eq(UInt<2>("h2"), mem_address_index) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_43 = mux(_io_wb_memory_read_data_T_42, _io_wb_memory_read_data_T_37, _io_wb_memory_read_data_T_41) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_44 = eq(mem_address_index, UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 56:29]
    node _io_wb_memory_read_data_T_45 = bits(io_memory_bundle_read_data, 15, 15) @[src/main/scala/riscv/core/MemoryAccess.scala 57:28]
    node _io_wb_memory_read_data_T_46 = bits(_io_wb_memory_read_data_T_45, 0, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 57:19]
    node _io_wb_memory_read_data_T_47 = mux(_io_wb_memory_read_data_T_46, UInt<16>("hffff"), UInt<16>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 57:19]
    node _io_wb_memory_read_data_T_48 = bits(io_memory_bundle_read_data, 15, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 57:39]
    node _io_wb_memory_read_data_T_49 = cat(_io_wb_memory_read_data_T_47, _io_wb_memory_read_data_T_48) @[src/main/scala/riscv/core/MemoryAccess.scala 57:14]
    node _io_wb_memory_read_data_T_50 = bits(io_memory_bundle_read_data, 31, 31) @[src/main/scala/riscv/core/MemoryAccess.scala 58:28]
    node _io_wb_memory_read_data_T_51 = bits(_io_wb_memory_read_data_T_50, 0, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 58:19]
    node _io_wb_memory_read_data_T_52 = mux(_io_wb_memory_read_data_T_51, UInt<16>("hffff"), UInt<16>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 58:19]
    node _io_wb_memory_read_data_T_53 = bits(io_memory_bundle_read_data, 31, 16) @[src/main/scala/riscv/core/MemoryAccess.scala 58:39]
    node _io_wb_memory_read_data_T_54 = cat(_io_wb_memory_read_data_T_52, _io_wb_memory_read_data_T_53) @[src/main/scala/riscv/core/MemoryAccess.scala 58:14]
    node _io_wb_memory_read_data_T_55 = mux(_io_wb_memory_read_data_T_44, _io_wb_memory_read_data_T_49, _io_wb_memory_read_data_T_54) @[src/main/scala/riscv/core/MemoryAccess.scala 55:36]
    node _io_wb_memory_read_data_T_56 = eq(mem_address_index, UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 61:29]
    node _io_wb_memory_read_data_T_57 = mux(UInt<1>("h0"), UInt<16>("hffff"), UInt<16>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 62:19]
    node _io_wb_memory_read_data_T_58 = bits(io_memory_bundle_read_data, 15, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 62:34]
    node _io_wb_memory_read_data_T_59 = cat(_io_wb_memory_read_data_T_57, _io_wb_memory_read_data_T_58) @[src/main/scala/riscv/core/MemoryAccess.scala 62:14]
    node _io_wb_memory_read_data_T_60 = mux(UInt<1>("h0"), UInt<16>("hffff"), UInt<16>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 63:19]
    node _io_wb_memory_read_data_T_61 = bits(io_memory_bundle_read_data, 31, 16) @[src/main/scala/riscv/core/MemoryAccess.scala 63:34]
    node _io_wb_memory_read_data_T_62 = cat(_io_wb_memory_read_data_T_60, _io_wb_memory_read_data_T_61) @[src/main/scala/riscv/core/MemoryAccess.scala 63:14]
    node _io_wb_memory_read_data_T_63 = mux(_io_wb_memory_read_data_T_56, _io_wb_memory_read_data_T_59, _io_wb_memory_read_data_T_62) @[src/main/scala/riscv/core/MemoryAccess.scala 60:37]
    node _io_wb_memory_read_data_T_64 = eq(UInt<1>("h0"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_65 = mux(_io_wb_memory_read_data_T_64, _io_wb_memory_read_data_T_25, UInt<1>("h0")) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_66 = eq(UInt<3>("h4"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_67 = mux(_io_wb_memory_read_data_T_66, _io_wb_memory_read_data_T_43, _io_wb_memory_read_data_T_65) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_68 = eq(UInt<1>("h1"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_69 = mux(_io_wb_memory_read_data_T_68, _io_wb_memory_read_data_T_55, _io_wb_memory_read_data_T_67) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_70 = eq(UInt<3>("h5"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_71 = mux(_io_wb_memory_read_data_T_70, _io_wb_memory_read_data_T_63, _io_wb_memory_read_data_T_69) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_72 = eq(UInt<2>("h2"), io_funct3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_wb_memory_read_data_T_73 = mux(_io_wb_memory_read_data_T_72, io_memory_bundle_read_data, _io_wb_memory_read_data_T_71) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _T = eq(io_funct3, UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 72:20]
    node _io_memory_bundle_write_strobe_mem_address_index = UInt<1>("h1") @[src/main/scala/riscv/core/MemoryAccess.scala 73:{56,56}]
    node _WIRE_1_0 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 71:{45,45}]
    node _GEN_0 = mux(eq(UInt<1>("h0"), mem_address_index), _io_memory_bundle_write_strobe_mem_address_index, _WIRE_1_0) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 73:{56,56}]
    node _WIRE_1_1 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 71:{45,45}]
    node _GEN_1 = mux(eq(UInt<1>("h1"), mem_address_index), _io_memory_bundle_write_strobe_mem_address_index, _WIRE_1_1) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 73:{56,56}]
    node _WIRE_1_2 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 71:{45,45}]
    node _GEN_2 = mux(eq(UInt<2>("h2"), mem_address_index), _io_memory_bundle_write_strobe_mem_address_index, _WIRE_1_2) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 73:{56,56}]
    node _WIRE_1_3 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 71:{45,45}]
    node _GEN_3 = mux(eq(UInt<2>("h3"), mem_address_index), _io_memory_bundle_write_strobe_mem_address_index, _WIRE_1_3) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 73:{56,56}]
    node _io_memory_bundle_write_data_T = bits(io_reg2_data, 8, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 74:50]
    node _io_memory_bundle_write_data_T_1 = dshl(mem_address_index, UInt<2>("h3")) @[src/main/scala/riscv/core/MemoryAccess.scala 74:97]
    node _io_memory_bundle_write_data_T_2 = dshl(_io_memory_bundle_write_data_T, _io_memory_bundle_write_data_T_1) @[src/main/scala/riscv/core/MemoryAccess.scala 74:75]
    node _T_1 = eq(io_funct3, UInt<1>("h1")) @[src/main/scala/riscv/core/MemoryAccess.scala 77:26]
    node _T_2 = eq(mem_address_index, UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 78:30]
    node _io_memory_bundle_write_data_T_3 = bits(io_reg2_data, 16, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 82:52]
    node _io_memory_bundle_write_data_T_4 = bits(io_reg2_data, 16, 0) @[src/main/scala/riscv/core/MemoryAccess.scala 87:52]
    node _io_memory_bundle_write_data_T_5 = shl(_io_memory_bundle_write_data_T_4, 16) @[src/main/scala/riscv/core/MemoryAccess.scala 90:11]
    node _GEN_4 = mux(_T_2, UInt<1>("h1"), _WIRE_1_0) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 78:39 80:44]
    node _GEN_5 = mux(_T_2, UInt<1>("h1"), _WIRE_1_1) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 78:39 80:44]
    node _GEN_6 = mux(_T_2, _io_memory_bundle_write_data_T_3, _io_memory_bundle_write_data_T_5) @[src/main/scala/riscv/core/MemoryAccess.scala 78:39 82:37 87:37]
    node _GEN_7 = mux(_T_2, _WIRE_1_2, UInt<1>("h1")) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 78:39 85:44]
    node _GEN_8 = mux(_T_2, _WIRE_1_3, UInt<1>("h1")) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 78:39 85:44]
    node _T_3 = eq(io_funct3, UInt<2>("h2")) @[src/main/scala/riscv/core/MemoryAccess.scala 92:26]
    node _GEN_9 = mux(_T_3, UInt<1>("h1"), _WIRE_1_0) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 92:52 94:42]
    node _GEN_10 = mux(_T_3, UInt<1>("h1"), _WIRE_1_1) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 92:52 94:42]
    node _GEN_11 = mux(_T_3, UInt<1>("h1"), _WIRE_1_2) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 92:52 94:42]
    node _GEN_12 = mux(_T_3, UInt<1>("h1"), _WIRE_1_3) @[src/main/scala/riscv/core/MemoryAccess.scala 71:35 92:52 94:42]
    node _GEN_13 = mux(_T_1, _GEN_4, _GEN_9) @[src/main/scala/riscv/core/MemoryAccess.scala 77:52]
    node _GEN_14 = mux(_T_1, _GEN_5, _GEN_10) @[src/main/scala/riscv/core/MemoryAccess.scala 77:52]
    node _GEN_15 = mux(_T_1, _GEN_6, io_reg2_data) @[src/main/scala/riscv/core/MemoryAccess.scala 69:35 77:52]
    node _GEN_16 = mux(_T_1, _GEN_7, _GEN_11) @[src/main/scala/riscv/core/MemoryAccess.scala 77:52]
    node _GEN_17 = mux(_T_1, _GEN_8, _GEN_12) @[src/main/scala/riscv/core/MemoryAccess.scala 77:52]
    node _GEN_18 = mux(_T, _GEN_0, _GEN_13) @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
    node _GEN_19 = mux(_T, _GEN_1, _GEN_14) @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
    node _GEN_20 = mux(_T, _GEN_2, _GEN_16) @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
    node _GEN_21 = mux(_T, _GEN_3, _GEN_17) @[src/main/scala/riscv/core/MemoryAccess.scala 72:46]
    node _GEN_22 = mux(_T, _io_memory_bundle_write_data_T_2, _GEN_15) @[src/main/scala/riscv/core/MemoryAccess.scala 72:46 74:35]
    node _GEN_23 = mux(io_memory_write_enable, _GEN_22, UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 26:33 68:38]
    node _GEN_24 = mux(io_memory_write_enable, UInt<1>("h1"), UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 25:33 68:38 70:35]
    node _WIRE__0 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 28:{43,43}]
    node _GEN_25 = mux(io_memory_write_enable, _GEN_18, _WIRE__0) @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
    node _WIRE__1 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 28:{43,43}]
    node _GEN_26 = mux(io_memory_write_enable, _GEN_19, _WIRE__1) @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
    node _WIRE__2 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 28:{43,43}]
    node _GEN_27 = mux(io_memory_write_enable, _GEN_20, _WIRE__2) @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
    node _WIRE__3 = UInt<1>("h0") @[src/main/scala/riscv/core/MemoryAccess.scala 28:{43,43}]
    node _GEN_28 = mux(io_memory_write_enable, _GEN_21, _WIRE__3) @[src/main/scala/riscv/core/MemoryAccess.scala 28:33 68:38]
    node _GEN_29 = mux(io_memory_read_enable, _io_wb_memory_read_data_T_73, UInt<1>("h0")) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 33:28 29:33]
    node _GEN_30 = mux(io_memory_read_enable, UInt<1>("h0"), _GEN_23) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 26:33]
    node _GEN_31 = mux(io_memory_read_enable, UInt<1>("h0"), _GEN_24) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 25:33]
    node _GEN_32 = mux(io_memory_read_enable, _WIRE__0, _GEN_25) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
    node _GEN_33 = mux(io_memory_read_enable, _WIRE__1, _GEN_26) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
    node _GEN_34 = mux(io_memory_read_enable, _WIRE__2, _GEN_27) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
    node _GEN_35 = mux(io_memory_read_enable, _WIRE__3, _GEN_28) @[src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
    io_wb_memory_read_data <= _GEN_29
    io_memory_bundle_address <= io_alu_result @[src/main/scala/riscv/core/MemoryAccess.scala 27:33]
    io_memory_bundle_write_data <= bits(_GEN_30, 31, 0)
    io_memory_bundle_write_enable <= _GEN_31
    io_memory_bundle_write_strobe_0 <= _GEN_32
    io_memory_bundle_write_strobe_1 <= _GEN_33
    io_memory_bundle_write_strobe_2 <= _GEN_34
    io_memory_bundle_write_strobe_3 <= _GEN_35

  module WriteBack :
    input clock : Clock
    input reset : UInt<1>
    input io_instruction_address : UInt<32> @[src/main/scala/riscv/core/WriteBack.scala 11:14]
    input io_alu_result : UInt<32> @[src/main/scala/riscv/core/WriteBack.scala 11:14]
    input io_memory_read_data : UInt<32> @[src/main/scala/riscv/core/WriteBack.scala 11:14]
    input io_regs_write_source : UInt<2> @[src/main/scala/riscv/core/WriteBack.scala 11:14]
    output io_regs_write_data : UInt<32> @[src/main/scala/riscv/core/WriteBack.scala 11:14]

    node _io_regs_write_data_T = add(io_instruction_address, UInt<3>("h4")) @[src/main/scala/riscv/core/WriteBack.scala 23:72]
    node _io_regs_write_data_T_1 = tail(_io_regs_write_data_T, 1) @[src/main/scala/riscv/core/WriteBack.scala 23:72]
    node _io_regs_write_data_T_2 = eq(UInt<2>("h1"), io_regs_write_source) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_regs_write_data_T_3 = mux(_io_regs_write_data_T_2, io_memory_read_data, io_alu_result) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_regs_write_data_T_4 = eq(UInt<2>("h3"), io_regs_write_source) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    node _io_regs_write_data_T_5 = mux(_io_regs_write_data_T_4, _io_regs_write_data_T_1, _io_regs_write_data_T_3) @[src/main/scala/chisel3/util/Mux.scala 77:13]
    io_regs_write_data <= _io_regs_write_data_T_5 @[src/main/scala/riscv/core/WriteBack.scala 18:22]

  module CPU :
    input clock : Clock
    input reset : UInt<1>
    output io_instruction_address : UInt<32> @[src/main/scala/riscv/core/CPU.scala 12:14]
    input io_instruction : UInt<32> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_address : UInt<32> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_write_data : UInt<32> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_write_enable : UInt<1> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_write_strobe_0 : UInt<1> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_write_strobe_1 : UInt<1> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_write_strobe_2 : UInt<1> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_memory_bundle_write_strobe_3 : UInt<1> @[src/main/scala/riscv/core/CPU.scala 12:14]
    input io_memory_bundle_read_data : UInt<32> @[src/main/scala/riscv/core/CPU.scala 12:14]
    input io_instruction_valid : UInt<1> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_deviceSelect : UInt<3> @[src/main/scala/riscv/core/CPU.scala 12:14]
    input io_debug_read_address : UInt<5> @[src/main/scala/riscv/core/CPU.scala 12:14]
    output io_debug_read_data : UInt<32> @[src/main/scala/riscv/core/CPU.scala 12:14]

    inst regs of RegisterFile @[src/main/scala/riscv/core/CPU.scala 14:26]
    inst inst_fetch of InstructionFetch @[src/main/scala/riscv/core/CPU.scala 15:26]
    inst id of InstructionDecode @[src/main/scala/riscv/core/CPU.scala 16:26]
    inst ex of Execute @[src/main/scala/riscv/core/CPU.scala 17:26]
    inst mem of MemoryAccess @[src/main/scala/riscv/core/CPU.scala 18:26]
    inst wb of WriteBack @[src/main/scala/riscv/core/CPU.scala 19:26]
    node _io_deviceSelect_T = bits(mem.io_memory_bundle_address, 31, 29) @[src/main/scala/riscv/core/CPU.scala 22:13]
    node _mem_io_funct3_T = bits(inst_fetch.io_instruction, 14, 12) @[src/main/scala/riscv/core/CPU.scala 55:58]
    node _io_memory_bundle_address_T = bits(mem.io_memory_bundle_address, 28, 0) @[src/main/scala/riscv/core/CPU.scala 59:33]
    node _io_memory_bundle_address_T_1 = cat(UInt<3>("h0"), _io_memory_bundle_address_T) @[src/main/scala/riscv/core/CPU.scala 57:34]
    io_instruction_address <= inst_fetch.io_instruction_address @[src/main/scala/riscv/core/CPU.scala 28:39]
    io_memory_bundle_address <= _io_memory_bundle_address_T_1 @[src/main/scala/riscv/core/CPU.scala 57:28]
    io_memory_bundle_write_data <= mem.io_memory_bundle_write_data @[src/main/scala/riscv/core/CPU.scala 62:34]
    io_memory_bundle_write_enable <= mem.io_memory_bundle_write_enable @[src/main/scala/riscv/core/CPU.scala 61:34]
    io_memory_bundle_write_strobe_0 <= mem.io_memory_bundle_write_strobe_0 @[src/main/scala/riscv/core/CPU.scala 63:34]
    io_memory_bundle_write_strobe_1 <= mem.io_memory_bundle_write_strobe_1 @[src/main/scala/riscv/core/CPU.scala 63:34]
    io_memory_bundle_write_strobe_2 <= mem.io_memory_bundle_write_strobe_2 @[src/main/scala/riscv/core/CPU.scala 63:34]
    io_memory_bundle_write_strobe_3 <= mem.io_memory_bundle_write_strobe_3 @[src/main/scala/riscv/core/CPU.scala 63:34]
    io_deviceSelect <= _io_deviceSelect_T @[src/main/scala/riscv/core/CPU.scala 21:19]
    io_debug_read_data <= regs.io_debug_read_data @[src/main/scala/riscv/core/CPU.scala 37:30]
    regs.clock <= clock
    regs.reset <= reset
    regs.io_write_enable <= id.io_reg_write_enable @[src/main/scala/riscv/core/CPU.scala 30:25]
    regs.io_write_address <= id.io_reg_write_address @[src/main/scala/riscv/core/CPU.scala 31:25]
    regs.io_write_data <= wb.io_regs_write_data @[src/main/scala/riscv/core/CPU.scala 32:25]
    regs.io_read_address1 <= id.io_regs_reg1_read_address @[src/main/scala/riscv/core/CPU.scala 33:25]
    regs.io_read_address2 <= id.io_regs_reg2_read_address @[src/main/scala/riscv/core/CPU.scala 34:25]
    regs.io_debug_read_address <= io_debug_read_address @[src/main/scala/riscv/core/CPU.scala 36:30]
    inst_fetch.clock <= clock
    inst_fetch.reset <= reset
    inst_fetch.io_jump_flag_id <= ex.io_if_jump_flag @[src/main/scala/riscv/core/CPU.scala 25:39]
    inst_fetch.io_jump_address_id <= ex.io_if_jump_address @[src/main/scala/riscv/core/CPU.scala 24:39]
    inst_fetch.io_instruction_read_data <= io_instruction @[src/main/scala/riscv/core/CPU.scala 27:39]
    inst_fetch.io_instruction_valid <= io_instruction_valid @[src/main/scala/riscv/core/CPU.scala 26:39]
    id.clock <= clock
    id.reset <= reset
    id.io_instruction <= inst_fetch.io_instruction @[src/main/scala/riscv/core/CPU.scala 39:21]
    ex.clock <= clock
    ex.reset <= reset
    ex.io_instruction <= inst_fetch.io_instruction @[src/main/scala/riscv/core/CPU.scala 42:21]
    ex.io_instruction_address <= inst_fetch.io_instruction_address @[src/main/scala/riscv/core/CPU.scala 43:29]
    ex.io_reg1_data <= regs.io_read_data1 @[src/main/scala/riscv/core/CPU.scala 44:19]
    ex.io_reg2_data <= regs.io_read_data2 @[src/main/scala/riscv/core/CPU.scala 45:19]
    ex.io_immediate <= id.io_ex_immediate @[src/main/scala/riscv/core/CPU.scala 46:19]
    ex.io_aluop1_source <= id.io_ex_aluop1_source @[src/main/scala/riscv/core/CPU.scala 47:23]
    ex.io_aluop2_source <= id.io_ex_aluop2_source @[src/main/scala/riscv/core/CPU.scala 48:23]
    mem.clock <= clock
    mem.reset <= reset
    mem.io_alu_result <= ex.io_mem_alu_result @[src/main/scala/riscv/core/CPU.scala 51:30]
    mem.io_reg2_data <= regs.io_read_data2 @[src/main/scala/riscv/core/CPU.scala 52:30]
    mem.io_memory_read_enable <= id.io_memory_read_enable @[src/main/scala/riscv/core/CPU.scala 53:30]
    mem.io_memory_write_enable <= id.io_memory_write_enable @[src/main/scala/riscv/core/CPU.scala 54:30]
    mem.io_funct3 <= _mem_io_funct3_T @[src/main/scala/riscv/core/CPU.scala 55:30]
    mem.io_memory_bundle_read_data <= io_memory_bundle_read_data @[src/main/scala/riscv/core/CPU.scala 64:34]
    wb.clock <= clock
    wb.reset <= reset
    wb.io_instruction_address <= inst_fetch.io_instruction_address @[src/main/scala/riscv/core/CPU.scala 66:29]
    wb.io_alu_result <= ex.io_mem_alu_result @[src/main/scala/riscv/core/CPU.scala 67:29]
    wb.io_memory_read_data <= mem.io_wb_memory_read_data @[src/main/scala/riscv/core/CPU.scala 68:29]
    wb.io_regs_write_source <= id.io_wb_reg_write_source @[src/main/scala/riscv/core/CPU.scala 69:29]

  module TestTopModule :
    input clock : Clock
    input reset : UInt<1>
    input io_mem_debug_read_address : UInt<32> @[src/test/scala/riscv/singlecycle/CPUTest.scala 21:14]
    input io_regs_debug_read_address : UInt<5> @[src/test/scala/riscv/singlecycle/CPUTest.scala 21:14]
    output io_regs_debug_read_data : UInt<32> @[src/test/scala/riscv/singlecycle/CPUTest.scala 21:14]
    output io_mem_debug_read_data : UInt<32> @[src/test/scala/riscv/singlecycle/CPUTest.scala 21:14]

    inst mem of Memory @[src/test/scala/riscv/singlecycle/CPUTest.scala 28:31]
    inst instruction_rom of InstructionROM @[src/test/scala/riscv/singlecycle/CPUTest.scala 29:31]
    inst rom_loader of ROMLoader @[src/test/scala/riscv/singlecycle/CPUTest.scala 30:31]
    inst cpu of CPU @[src/test/scala/riscv/singlecycle/CPUTest.scala 44:21]
    reg CPU_clkdiv : UInt<2>, clock with :
      reset => (UInt<1>("h0"), CPU_clkdiv) @[src/test/scala/riscv/singlecycle/CPUTest.scala 36:27]
    node _CPU_next_T = eq(CPU_clkdiv, UInt<2>("h3")) @[src/test/scala/riscv/singlecycle/CPUTest.scala 39:32]
    node _CPU_next_T_1 = add(CPU_clkdiv, UInt<1>("h1")) @[src/test/scala/riscv/singlecycle/CPUTest.scala 39:57]
    node _CPU_next_T_2 = tail(_CPU_next_T_1, 1) @[src/test/scala/riscv/singlecycle/CPUTest.scala 39:57]
    node _CPU_next_T_3 = mux(_CPU_next_T, UInt<1>("h0"), _CPU_next_T_2) @[src/test/scala/riscv/singlecycle/CPUTest.scala 39:20]
    node _CPU_tick_T = eq(CPU_clkdiv, UInt<1>("h0")) @[src/test/scala/riscv/singlecycle/CPUTest.scala 40:28]
    node CPU_tick = _CPU_tick_T @[src/test/scala/riscv/singlecycle/CPUTest.scala 37:24 40:14]
    node _T = asClock(CPU_tick) @[src/test/scala/riscv/singlecycle/CPUTest.scala 43:22]
    node _T_1 = eq(rom_loader.io_load_finished, UInt<1>("h0")) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:10]
    node _GEN_0 = mux(_T_1, rom_loader.io_bundle_address, cpu.io_memory_bundle_address) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_1 = mux(_T_1, rom_loader.io_bundle_write_data, cpu.io_memory_bundle_write_data) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_2 = mux(_T_1, rom_loader.io_bundle_write_enable, cpu.io_memory_bundle_write_enable) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_3 = mux(_T_1, rom_loader.io_bundle_write_strobe_0, cpu.io_memory_bundle_write_strobe_0) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_4 = mux(_T_1, rom_loader.io_bundle_write_strobe_1, cpu.io_memory_bundle_write_strobe_1) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_5 = mux(_T_1, rom_loader.io_bundle_write_strobe_2, cpu.io_memory_bundle_write_strobe_2) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_6 = mux(_T_1, rom_loader.io_bundle_write_strobe_3, cpu.io_memory_bundle_write_strobe_3) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 55:28]
    node _GEN_7 = mux(_T_1, mem.io_bundle_read_data, UInt<1>("h0")) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 51:28 54:38]
    node _GEN_8 = mux(_T_1, UInt<1>("h0"), mem.io_bundle_read_data) @[src/test/scala/riscv/singlecycle/CPUTest.scala 50:40 52:38 55:28]
    node CPU_next = _CPU_next_T_3 @[src/test/scala/riscv/singlecycle/CPUTest.scala 38:24 39:14]
    io_regs_debug_read_data <= cpu.io_debug_read_data @[src/test/scala/riscv/singlecycle/CPUTest.scala 59:31]
    io_mem_debug_read_data <= mem.io_debug_read_data @[src/test/scala/riscv/singlecycle/CPUTest.scala 63:29]
    mem.clock <= clock
    mem.reset <= reset
    mem.io_bundle_address <= _GEN_0
    mem.io_bundle_write_data <= _GEN_1
    mem.io_bundle_write_enable <= _GEN_2
    mem.io_bundle_write_strobe_0 <= _GEN_3
    mem.io_bundle_write_strobe_1 <= _GEN_4
    mem.io_bundle_write_strobe_2 <= _GEN_5
    mem.io_bundle_write_strobe_3 <= _GEN_6
    mem.io_instruction_address <= cpu.io_instruction_address @[src/test/scala/riscv/singlecycle/CPUTest.scala 47:32]
    mem.io_debug_read_address <= io_mem_debug_read_address @[src/test/scala/riscv/singlecycle/CPUTest.scala 62:29]
    instruction_rom.clock <= clock
    instruction_rom.reset <= reset
    instruction_rom.io_address <= rom_loader.io_rom_address @[src/test/scala/riscv/singlecycle/CPUTest.scala 34:30]
    rom_loader.clock <= clock
    rom_loader.reset <= reset
    rom_loader.io_bundle_read_data <= _GEN_7
    rom_loader.io_rom_data <= instruction_rom.io_data @[src/test/scala/riscv/singlecycle/CPUTest.scala 32:30]
    rom_loader.io_load_address <= UInt<32>("h1000") @[src/test/scala/riscv/singlecycle/CPUTest.scala 33:30]
    CPU_clkdiv <= mux(reset, UInt<1>("h0"), CPU_next) @[src/test/scala/riscv/singlecycle/CPUTest.scala 36:{27,27} 41:14]
    cpu.clock <= _T
    cpu.reset <= reset
    cpu.io_instruction <= mem.io_instruction @[src/test/scala/riscv/singlecycle/CPUTest.scala 48:32]
    cpu.io_memory_bundle_read_data <= _GEN_8
    cpu.io_instruction_valid <= rom_loader.io_load_finished @[src/test/scala/riscv/singlecycle/CPUTest.scala 46:32]
    cpu.io_debug_read_address <= io_regs_debug_read_address @[src/test/scala/riscv/singlecycle/CPUTest.scala 58:31]
