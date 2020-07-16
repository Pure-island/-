`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:27:01 11/19/2019 
// Design Name: 
// Module Name:    M 
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
module M(
    input clk,
    input reset,
    input [31:0] IR_M,
    input [31:0] PC4_M,
    input [31:0] PC8_M,
    input [31:0] ALUout_M,
    input [31:0] rt_M,
    input [4:0] RDst_M,
    output [31:0] IR,
    output [31:0] PC4,
    output [31:0] PC8,
    output [31:0] ALUout,
    output [31:0] DMout,
    output [4:0] RDst,
	 output Cal_r,
	 output Cal_i,
	 output B,
	 output Load, 
	 output Save,
	 output J,
	 output RegWrite
    );

	 wire ALUSrc,MemtoReg,MemWrite,pc_sel1;
	 wire [1:0] RegDst, Extop,pc_sel2;
	 wire [3:0] ALUop;
	 //wire [31:0] ;
	
	//decode
	control D_control(IR,RegDst,ALUSrc,MemtoReg,RegWrite,MemWrite, Extop,ALUop,pc_sel1,pc_sel2, Cal_r,Cal_i, B,Load, Save, J);

	DM dm(IR_M,clk,reset,PC4_M,ALUout_M,MemWrite, rt_M,DMout);
	
	assign IR=IR_M;
	assign PC4=PC4_M;
	assign PC8=PC8_M;
	assign ALUout=ALUout_M;
	assign RDst=RDst_M;
endmodule
