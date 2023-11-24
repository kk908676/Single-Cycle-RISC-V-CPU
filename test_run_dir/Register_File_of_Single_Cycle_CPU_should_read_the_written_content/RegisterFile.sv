module RegisterFile(
  input         clock,
  input         reset,
  input         io_write_enable, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_write_address, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [31:0] io_write_data, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_read_address1, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_read_address2, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_read_data1, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_read_data2, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  input  [4:0]  io_debug_read_address, // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
  output [31:0] io_debug_read_data // @[src/main/scala/riscv/core/RegisterFile.scala 16:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_1; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_2; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_3; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_4; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_5; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_6; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_7; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_8; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_9; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_10; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_11; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_12; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_13; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_14; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_15; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_16; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_17; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_18; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_19; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_20; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_21; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_22; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_23; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_24; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_25; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_26; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_27; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_28; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_29; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_30; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  reg [31:0] registers_31; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
  wire  _io_read_data1_T = io_read_address1 == 5'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 38:22]
  wire [31:0] _GEN_97 = 5'h1 == io_read_address1 ? registers_1 : registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_98 = 5'h2 == io_read_address1 ? registers_2 : _GEN_97; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_99 = 5'h3 == io_read_address1 ? registers_3 : _GEN_98; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_100 = 5'h4 == io_read_address1 ? registers_4 : _GEN_99; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_101 = 5'h5 == io_read_address1 ? registers_5 : _GEN_100; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_102 = 5'h6 == io_read_address1 ? registers_6 : _GEN_101; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_103 = 5'h7 == io_read_address1 ? registers_7 : _GEN_102; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_104 = 5'h8 == io_read_address1 ? registers_8 : _GEN_103; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_105 = 5'h9 == io_read_address1 ? registers_9 : _GEN_104; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_106 = 5'ha == io_read_address1 ? registers_10 : _GEN_105; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_107 = 5'hb == io_read_address1 ? registers_11 : _GEN_106; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_108 = 5'hc == io_read_address1 ? registers_12 : _GEN_107; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_109 = 5'hd == io_read_address1 ? registers_13 : _GEN_108; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_110 = 5'he == io_read_address1 ? registers_14 : _GEN_109; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_111 = 5'hf == io_read_address1 ? registers_15 : _GEN_110; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_112 = 5'h10 == io_read_address1 ? registers_16 : _GEN_111; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_113 = 5'h11 == io_read_address1 ? registers_17 : _GEN_112; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_114 = 5'h12 == io_read_address1 ? registers_18 : _GEN_113; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_115 = 5'h13 == io_read_address1 ? registers_19 : _GEN_114; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_116 = 5'h14 == io_read_address1 ? registers_20 : _GEN_115; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_117 = 5'h15 == io_read_address1 ? registers_21 : _GEN_116; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_118 = 5'h16 == io_read_address1 ? registers_22 : _GEN_117; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_119 = 5'h17 == io_read_address1 ? registers_23 : _GEN_118; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_120 = 5'h18 == io_read_address1 ? registers_24 : _GEN_119; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_121 = 5'h19 == io_read_address1 ? registers_25 : _GEN_120; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_122 = 5'h1a == io_read_address1 ? registers_26 : _GEN_121; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_123 = 5'h1b == io_read_address1 ? registers_27 : _GEN_122; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_124 = 5'h1c == io_read_address1 ? registers_28 : _GEN_123; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_125 = 5'h1d == io_read_address1 ? registers_29 : _GEN_124; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_126 = 5'h1e == io_read_address1 ? registers_30 : _GEN_125; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_127 = 5'h1f == io_read_address1 ? registers_31 : _GEN_126; // @[src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire  _io_read_data2_T = io_read_address2 == 5'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 44:22]
  wire [31:0] _GEN_129 = 5'h1 == io_read_address2 ? registers_1 : registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_130 = 5'h2 == io_read_address2 ? registers_2 : _GEN_129; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_131 = 5'h3 == io_read_address2 ? registers_3 : _GEN_130; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_132 = 5'h4 == io_read_address2 ? registers_4 : _GEN_131; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_133 = 5'h5 == io_read_address2 ? registers_5 : _GEN_132; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_134 = 5'h6 == io_read_address2 ? registers_6 : _GEN_133; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_135 = 5'h7 == io_read_address2 ? registers_7 : _GEN_134; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_136 = 5'h8 == io_read_address2 ? registers_8 : _GEN_135; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_137 = 5'h9 == io_read_address2 ? registers_9 : _GEN_136; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_138 = 5'ha == io_read_address2 ? registers_10 : _GEN_137; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_139 = 5'hb == io_read_address2 ? registers_11 : _GEN_138; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_140 = 5'hc == io_read_address2 ? registers_12 : _GEN_139; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_141 = 5'hd == io_read_address2 ? registers_13 : _GEN_140; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_142 = 5'he == io_read_address2 ? registers_14 : _GEN_141; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_143 = 5'hf == io_read_address2 ? registers_15 : _GEN_142; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_144 = 5'h10 == io_read_address2 ? registers_16 : _GEN_143; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_145 = 5'h11 == io_read_address2 ? registers_17 : _GEN_144; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_146 = 5'h12 == io_read_address2 ? registers_18 : _GEN_145; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_147 = 5'h13 == io_read_address2 ? registers_19 : _GEN_146; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_148 = 5'h14 == io_read_address2 ? registers_20 : _GEN_147; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_149 = 5'h15 == io_read_address2 ? registers_21 : _GEN_148; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_150 = 5'h16 == io_read_address2 ? registers_22 : _GEN_149; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_151 = 5'h17 == io_read_address2 ? registers_23 : _GEN_150; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_152 = 5'h18 == io_read_address2 ? registers_24 : _GEN_151; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_153 = 5'h19 == io_read_address2 ? registers_25 : _GEN_152; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_154 = 5'h1a == io_read_address2 ? registers_26 : _GEN_153; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_155 = 5'h1b == io_read_address2 ? registers_27 : _GEN_154; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_156 = 5'h1c == io_read_address2 ? registers_28 : _GEN_155; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_157 = 5'h1d == io_read_address2 ? registers_29 : _GEN_156; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_158 = 5'h1e == io_read_address2 ? registers_30 : _GEN_157; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_159 = 5'h1f == io_read_address2 ? registers_31 : _GEN_158; // @[src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire  _io_debug_read_data_T = io_debug_read_address == 5'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 50:27]
  wire [31:0] _GEN_161 = 5'h1 == io_debug_read_address ? registers_1 : registers_0; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_162 = 5'h2 == io_debug_read_address ? registers_2 : _GEN_161; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_163 = 5'h3 == io_debug_read_address ? registers_3 : _GEN_162; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_164 = 5'h4 == io_debug_read_address ? registers_4 : _GEN_163; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_165 = 5'h5 == io_debug_read_address ? registers_5 : _GEN_164; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_166 = 5'h6 == io_debug_read_address ? registers_6 : _GEN_165; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_167 = 5'h7 == io_debug_read_address ? registers_7 : _GEN_166; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_168 = 5'h8 == io_debug_read_address ? registers_8 : _GEN_167; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_169 = 5'h9 == io_debug_read_address ? registers_9 : _GEN_168; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_170 = 5'ha == io_debug_read_address ? registers_10 : _GEN_169; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_171 = 5'hb == io_debug_read_address ? registers_11 : _GEN_170; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_172 = 5'hc == io_debug_read_address ? registers_12 : _GEN_171; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_173 = 5'hd == io_debug_read_address ? registers_13 : _GEN_172; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_174 = 5'he == io_debug_read_address ? registers_14 : _GEN_173; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_175 = 5'hf == io_debug_read_address ? registers_15 : _GEN_174; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_176 = 5'h10 == io_debug_read_address ? registers_16 : _GEN_175; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_177 = 5'h11 == io_debug_read_address ? registers_17 : _GEN_176; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_178 = 5'h12 == io_debug_read_address ? registers_18 : _GEN_177; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_179 = 5'h13 == io_debug_read_address ? registers_19 : _GEN_178; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_180 = 5'h14 == io_debug_read_address ? registers_20 : _GEN_179; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_181 = 5'h15 == io_debug_read_address ? registers_21 : _GEN_180; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_182 = 5'h16 == io_debug_read_address ? registers_22 : _GEN_181; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_183 = 5'h17 == io_debug_read_address ? registers_23 : _GEN_182; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_184 = 5'h18 == io_debug_read_address ? registers_24 : _GEN_183; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_185 = 5'h19 == io_debug_read_address ? registers_25 : _GEN_184; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_186 = 5'h1a == io_debug_read_address ? registers_26 : _GEN_185; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_187 = 5'h1b == io_debug_read_address ? registers_27 : _GEN_186; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_188 = 5'h1c == io_debug_read_address ? registers_28 : _GEN_187; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_189 = 5'h1d == io_debug_read_address ? registers_29 : _GEN_188; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_190 = 5'h1e == io_debug_read_address ? registers_30 : _GEN_189; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_191 = 5'h1f == io_debug_read_address ? registers_31 : _GEN_190; // @[src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  assign io_read_data1 = _io_read_data1_T ? 32'h0 : _GEN_127; // @[src/main/scala/riscv/core/RegisterFile.scala 37:23]
  assign io_read_data2 = _io_read_data2_T ? 32'h0 : _GEN_159; // @[src/main/scala/riscv/core/RegisterFile.scala 43:23]
  assign io_debug_read_data = _io_debug_read_data_T ? 32'h0 : _GEN_191; // @[src/main/scala/riscv/core/RegisterFile.scala 49:28]
  always @(posedge clock) begin
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_0 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h0 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_0 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_1 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_1 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_2 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h2 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_2 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_3 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h3 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_3 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_4 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h4 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_4 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_5 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h5 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_5 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_6 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h6 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_6 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_7 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h7 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_7 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_8 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h8 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_8 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_9 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h9 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_9 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_10 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'ha == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_10 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_11 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hb == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_11 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_12 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hc == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_12 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_13 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hd == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_13 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_14 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'he == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_14 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_15 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'hf == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_15 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_16 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h10 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_16 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_17 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h11 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_17 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_18 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h12 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_18 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_19 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h13 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_19 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_20 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h14 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_20 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_21 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h15 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_21 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_22 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h16 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_22 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_23 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h17 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_23 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_24 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h18 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_24 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_25 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h19 == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_25 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_26 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1a == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_26 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_27 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1b == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_27 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_28 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1c == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_28 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_29 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1d == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_29 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_30 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1e == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_30 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
      end
    end
    if (reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
      registers_31 <= 32'h0; // @[src/main/scala/riscv/core/RegisterFile.scala 29:26]
    end else if (~reset) begin // @[src/main/scala/riscv/core/RegisterFile.scala 31:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[src/main/scala/riscv/core/RegisterFile.scala 32:55]
        if (5'h1f == io_write_address) begin // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
          registers_31 <= io_write_data; // @[src/main/scala/riscv/core/RegisterFile.scala 33:35]
        end
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
  registers_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  registers_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
