`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:11:42 11/11/2019 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
	 wire [31:0] npc_out,ifu_pc,ifu_out,grf_out1,grf_out2,ALUout,dm_out,ext_out,in2,fake1,fake2;
	 wire [4:0] a3_add,fake3,fake4;
	 wire [3:0] alu_f;
	 wire [1:0] aluop;
	 wire jr,jal,zerosign,control_write,control_read,memtoreg,regdst,alusrc,regwrite,branch;
	 wire aluop1,aluop2,lui;
	IFU        yj_ifu(npc_out,clk,reset,ifu_pc,ifu_out);
	ALU        yj_alu(lui,alu_f,grf_out1,in2,ALUout,zerosign);
	ALUcontrol yj_alucontrol({aluop1,aluop2},ifu_out[5:0],alu_f);
	DM         yj_dm(ifu_pc,ALUout,grf_out2,clk,reset,control_write,control_read,memtoreg,dm_out);
	control    yj_control(ifu_out,ifu_out[31:26],regdst,alusrc,memtoreg,regwrite,control_read,control_write,branch,aluop1,aluop2,lui,jal,jr);
	extender   yj_extender(ifu_out,aluop2,lui,ext_out);
	grf        yj_grf(reset,regwrite,ifu_out[25:21],ifu_out[20:16],a3_add,dm_out,clk,ifu_pc,grf_out1,grf_out2,jal);
	npc        yj_npc(ifu_pc,ifu_out,ext_out,branch,zerosign,jal,jr,grf_out1,npc_out);
	
	mux        a3_mux(5,1,regdst,fake1,fake1,ifu_out[20:16],ifu_out[15:11],fake2,a3_add);
	mux        in2_alu(32,1,alusrc,grf_out2,ext_out,fake3,fake3,in2,fake4);
endmodule

