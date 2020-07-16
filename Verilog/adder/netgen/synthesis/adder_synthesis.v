////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: adder_synthesis.v
// /___/   /\     Timestamp: Sat Sep 14 11:29:48 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim adder.ngc adder_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: adder.ngc
// Output file	: D:\study\DDandCA\Verilog\adder\netgen\synthesis\adder_synthesis.v
// # of Modules	: 1
// Design Name	: adder
// Xilinx        : D:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module adder (
  Clk, En, Overflow, A, B, Sum
);
  input Clk;
  input En;
  output Overflow;
  input [3 : 0] A;
  input [3 : 0] B;
  output [3 : 0] Sum;
  wire A_3_IBUF_0;
  wire A_2_IBUF_1;
  wire A_1_IBUF_2;
  wire A_0_IBUF_3;
  wire B_3_IBUF_4;
  wire B_2_IBUF_5;
  wire B_1_IBUF_6;
  wire B_0_IBUF_7;
  wire Clk_BUFGP_8;
  wire En_IBUF_9;
  wire [4 : 0] a;
  wire [3 : 1] n0010;
  wire [0 : 0] Madd_n0010_lut;
  wire [3 : 2] Madd_n0010_cy;
  FDE #(
    .INIT ( 1'b0 ))
  a_0 (
    .C(Clk_BUFGP_8),
    .CE(En_IBUF_9),
    .D(Madd_n0010_lut[0]),
    .Q(a[0])
  );
  FDE #(
    .INIT ( 1'b0 ))
  a_1 (
    .C(Clk_BUFGP_8),
    .CE(En_IBUF_9),
    .D(n0010[1]),
    .Q(a[1])
  );
  FDE #(
    .INIT ( 1'b0 ))
  a_2 (
    .C(Clk_BUFGP_8),
    .CE(En_IBUF_9),
    .D(n0010[2]),
    .Q(a[2])
  );
  FDE #(
    .INIT ( 1'b0 ))
  a_3 (
    .C(Clk_BUFGP_8),
    .CE(En_IBUF_9),
    .D(n0010[3]),
    .Q(a[3])
  );
  FDE #(
    .INIT ( 1'b0 ))
  a_4 (
    .C(Clk_BUFGP_8),
    .CE(En_IBUF_9),
    .D(Madd_n0010_cy[3]),
    .Q(a[4])
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \Madd_n0010_lut<0>1  (
    .I0(A_0_IBUF_3),
    .I1(B_0_IBUF_7),
    .O(Madd_n0010_lut[0])
  );
  IBUF   A_3_IBUF (
    .I(A[3]),
    .O(A_3_IBUF_0)
  );
  IBUF   A_2_IBUF (
    .I(A[2]),
    .O(A_2_IBUF_1)
  );
  IBUF   A_1_IBUF (
    .I(A[1]),
    .O(A_1_IBUF_2)
  );
  IBUF   A_0_IBUF (
    .I(A[0]),
    .O(A_0_IBUF_3)
  );
  IBUF   B_3_IBUF (
    .I(B[3]),
    .O(B_3_IBUF_4)
  );
  IBUF   B_2_IBUF (
    .I(B[2]),
    .O(B_2_IBUF_5)
  );
  IBUF   B_1_IBUF (
    .I(B[1]),
    .O(B_1_IBUF_6)
  );
  IBUF   B_0_IBUF (
    .I(B[0]),
    .O(B_0_IBUF_7)
  );
  IBUF   En_IBUF (
    .I(En),
    .O(En_IBUF_9)
  );
  OBUF   Sum_3_OBUF (
    .I(a[3]),
    .O(Sum[3])
  );
  OBUF   Sum_2_OBUF (
    .I(a[2]),
    .O(Sum[2])
  );
  OBUF   Sum_1_OBUF (
    .I(a[1]),
    .O(Sum[1])
  );
  OBUF   Sum_0_OBUF (
    .I(a[0]),
    .O(Sum[0])
  );
  OBUF   Overflow_OBUF (
    .I(a[4]),
    .O(Overflow)
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \Madd_n0010_cy<3>11  (
    .I0(A_3_IBUF_0),
    .I1(B_3_IBUF_4),
    .I2(Madd_n0010_cy[2]),
    .O(Madd_n0010_cy[3])
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \Madd_n0010_xor<3>11  (
    .I0(A_3_IBUF_0),
    .I1(B_3_IBUF_4),
    .I2(Madd_n0010_cy[2]),
    .O(n0010[3])
  );
  LUT4 #(
    .INIT ( 16'h9666 ))
  \Madd_n0010_xor<1>11  (
    .I0(A_1_IBUF_2),
    .I1(B_1_IBUF_6),
    .I2(A_0_IBUF_3),
    .I3(B_0_IBUF_7),
    .O(n0010[1])
  );
  LUT6 #(
    .INIT ( 64'h9996966696669666 ))
  \Madd_n0010_xor<2>11  (
    .I0(A_2_IBUF_1),
    .I1(B_2_IBUF_5),
    .I2(B_1_IBUF_6),
    .I3(A_1_IBUF_2),
    .I4(A_0_IBUF_3),
    .I5(B_0_IBUF_7),
    .O(n0010[2])
  );
  LUT6 #(
    .INIT ( 64'hEEE8E888E888E888 ))
  \Madd_n0010_cy<2>11  (
    .I0(A_2_IBUF_1),
    .I1(B_2_IBUF_5),
    .I2(A_1_IBUF_2),
    .I3(B_1_IBUF_6),
    .I4(A_0_IBUF_3),
    .I5(B_0_IBUF_7),
    .O(Madd_n0010_cy[2])
  );
  BUFGP   Clk_BUFGP (
    .I(Clk),
    .O(Clk_BUFGP_8)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

