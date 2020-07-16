`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:52:51 11/11/2019 
// Design Name: 
// Module Name:    npc 
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
module npc(
    input [31:0] pc,
    input [31:0] ins,
    input [31:0] extended,
    input branch,
    input zero,
	 input jal,
	 input jr,
	 input [31:0]jr_pc,
    output [31:0] newpc
    );
	wire [4:0] fake1,fake2;
	wire [31:0]one,two,three,pc1,pc2,jal_pc;
	assign one=pc+4;
	assign two=one+extended*4;
	assign jal_pc={pc[31:28],ins[25:0],2'b00};
	mux m0(32,1,branch&zero,one,two,fake1,fake1,pc1,fake2);
	mux m1(32,1,jal,pc1,jal_pc,fake1,fake1,pc2,fake2);
	mux m2(32,1,jr,pc2,jr_pc,fake1,fake1,newpc,fake2);
endmodule


