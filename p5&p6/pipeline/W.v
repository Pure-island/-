`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:05 11/19/2019 
// Design Name: 
// Module Name:    W 
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
module W(
    input [31:0] IR,
    input [31:0] PC4,
    input [31:0] PC8,
    input [31:0] ALUout,
    input [31:0] DMout,
    input [4:0] RDst,
    input clk,
    output [31:0] WB_data,
    output regwrite,
    output [4:0] RDst_out,
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

	MUX32 WB_MUX({J,MemtoReg},ALUout,DMout,PC8,WB_data);
	
	assign regwrite=RegWrite;
	assign RDst_out=RDst;
endmodule
