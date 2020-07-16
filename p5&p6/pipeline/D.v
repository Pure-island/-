`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:14 11/18/2019 
// Design Name: 
// Module Name:    D 
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
module D(
    input [31:0] IR_W,
	 input [31:0] IR,
	 input [31:0] PC4_W,
	 input [31:0] PC4_D,
	 input [31:0] PC8_D,
	 input clk,
	 input reset,
	 input RF_we,
    input [4:0] RF_a3,
    input [31:0] RF_WD,
    output [31:0] RF_D_RD1out,
    output [31:0] RF_D_RD2out,
	 output [31:0] EXT_D_out,
	 output [31:0] NPC_D_out,
	 output [31:0] PC4,
	 output [31:0] PC8,
	 output [31:0] IRout,
	 output pc_sel1,
	 output Cal_r,
	 output Cal_i,
	 output B,
	 output Load, 
	 output Save,
	 output J,
	 input [31:0]rs_F_mD,
	 input [31:0]rt_F_mD,
	 input interrupt
    );
	 
	 wire ALUSrc,MemtoReg,RegWrite,MemWrite,zero;
	 wire [1:0] RegDst, Extop,pc_sel2;
	 wire [3:0] ALUop;
	 wire [31:0] npc_beq,npc_j,npc_nor;
	
	//decode
	control D_control(IR,RegDst,ALUSrc,MemtoReg,RegWrite,MemWrite, Extop,ALUop,pc_sel1,pc_sel2, Cal_r,Cal_i, B,Load, Save, J);
	
	 
	RF rf(IR_W,reset,RF_we,IR[25:21],IR[20:16],RF_a3,RF_WD,clk,PC4_W-4, RF_D_RD1out, RF_D_RD2out);
	
	EXT extender(IR, Extop,EXT_D_out);
	
	NPC_beq pc_beq(IR,EXT_D_out,PC4_D,zero,npc_beq);
	NPC_j pc_j(IR,PC4_D,npc_j);
	MUX32 npc_D(pc_sel2,npc_j,npc_beq,rs_F_mD,npc_nor);
	assign NPC_D_out=(interrupt)?32'h00004180:npc_nor;
	
	CMP cmp(IR,rs_F_mD, rt_F_mD,zero);
	
	assign PC4=PC4_D;
	assign PC8=PC8_D;
	assign IRout=IR;
endmodule
