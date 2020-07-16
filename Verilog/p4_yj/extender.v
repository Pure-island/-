`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:34 11/12/2019 
// Design Name: 
// Module Name:    extender 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module extender(
    input [31:0] data,
    input ori,
    input lui,
    output [31:0] out
    );
	wire [4:0] fake1,fake2;
	wire [15:0] one,two;
	wire [31:0] zero_ext,sign_ext,lui_ext,three;
	assign {one,two}=data;
	assign zero_ext={16'h0000,two};
	assign sign_ext={{16{two[15]}},two};
	assign lui_ext={two,16'h0000};
	mux m1(32,1,ori,sign_ext,zero_ext,fake1,fake1,three,fake2);
	mux m2(32,1,lui,three,lui_ext,fake1,fake1,out,fake2);
endmodule


