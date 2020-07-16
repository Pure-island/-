`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:28 11/19/2019 
// Design Name: 
// Module Name:    E 
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
module E(
	 input reset,
	 input clk,
    input [31:0] IR_E,
    input [31:0] PC4_E,
    input [31:0] PC8_E,
    input [31:0] rs_E,
    input [31:0] rt_E,
    input [31:0] EXT_E,
    output [31:0] ALU_E_out,
    output [31:0] rt_E_out,
    output [4:0] RDst_E_out,
    output [31:0] PC4_E_out,
    output [31:0] PC8_E_out,
	 output [31:0] IR_E_out,
	 output Cal_r,
	 output Cal_i,
	 output B,
	 output Load, 
	 output Save,
	 output J,
	 output busy
	 
    );

	 wire ALUSrc,MemtoReg,MemWrite,pc_sel1,RegWrite,start,mf_sign;
	 wire [1:0] RegDst, Extop,pc_sel2;
	 wire [31:0] ALU_in2,ALU_out,m_dout,alu1;
	 wire [3:0] ALUop;
	
	//decode
	assign mf_sign=((IR_E[5:0]==6'b010000||IR_E[5:0]==6'b010010)&&(IR_E[31:26]==6'b000000));
	assign start=(IR_E[31:26]==6'b000000&&(IR_E[5:0]==6'b011000||IR_E[5:0]==6'b011001||IR_E[5:0]==6'b011010||IR_E[5:0]==6'b011011));
	control D_control(IR_E,RegDst,ALUSrc,MemtoReg,RegWrite,MemWrite, Extop,ALUop,pc_sel1,pc_sel2, Cal_r,Cal_i, B,Load, Save, J);
	 
	MUX32 alu_in2({1'b0,ALUSrc},rt_E,EXT_E,,ALU_in2);
	ALU alu(IR_E,rs_E,ALU_in2,ALUop,ALU_out );
	MUX32 alu_out({1'b0,J}&{1'b0,~Cal_r},ALU_out,PC8_E,,alu1);
	MUX32 alu2({1'b0,mf_sign},alu1,m_dout,,ALU_E_out);
	
	mul_div m_d(reset,rs_E,ALU_in2,IR_E,start,clk,busy,m_dout );
	
	MUX5 rDst(RegDst,IR_E[20:16],IR_E[15:11],5'b11111,RDst_E_out);
	
	assign rt_E_out=rt_E;
	assign PC4_E_out=PC4_E;
	assign PC8_E_out=PC8_E;
	assign IR_E_out=IR_E;
endmodule
