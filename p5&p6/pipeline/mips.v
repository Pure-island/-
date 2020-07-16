`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:27:20 11/18/2019 
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
	wire [31:0] npc_D,PC4_mF,IR_mF,IR_D,PC4_D,PC8_D,RF_D_RD1out,RF_D_RD2out,EXT_mD,NPC_mD,PC4_mD,PC8_mD,IR_mD;
	wire [31:0] IR_E,PC4_E,PC8_E,rs_E,rt_E,EXT_E,ALU_mE, rt_mE, PC4_mE, PC8_mE, IR_mE;
	wire [31:0] IR_M, PC4_M, PC8_M, ALUout_M, rt_M,IR_mM, PC4_mM, PC8_mM, ALUout_mM, DMout_mM;
	wire [31:0] IR_W, PC4_W, PC8_W, ALUout_W,DMout_W,WB_mW,rs_F_mD,rt_F_mD,rt_F_E,rs_F_E,rt_F_M;
	wire pc_sel1_mD,regwrite_mW,reg1,reg2,busy;
	wire [4:0]  RDst_mE, RDst_M,RDst_mM,RDst_W,RDst_mW;
	wire Cal_r_D,Cal_i_D, B_D,Load_D, Save_D, J_D;
	wire Cal_r_E,Cal_i_E, B_E,Load_E, Save_E, J_E;
	wire Cal_r_M,Cal_i_M, B_M,Load_M, Save_M, J_M;
	wire Cal_r_W,Cal_i_W, B_W,Load_W, Save_W, J_W;
	reg stall,stall_md,stall_B_Calr,stall_B_Cali,stall_B_Load1,stall_B_Load2,stall_Calr_Load,stall_Cali_Load,stall_Load_Load,stall_Save_Load ;
	assign bd=
	
	F f(pc_sel1_mD,clk,reset,NPC_mD,PC4_mF,IR_mF,stall);
	F_D_pipe f_d(IR_mF,PC4_mF,IR_D,PC4_D,PC8_D,clk,(!stall),reset, excode_D,bd,BD_D);
	D d(IR_W,IR_D,PC4_W,PC4_D,PC8_D,clk,reset,regwrite_mW,RDst_mW,WB_mW,RF_D_RD1out,RF_D_RD2out,EXT_mD,NPC_mD,PC4_mD,PC8_mD,IR_mD,pc_sel1_mD,Cal_r_D,Cal_i_D, B_D,Load_D, Save_D, J_D,rs_F_mD,rt_F_mD);
	D_E_pipe d_e(clk,reset|stall,D_stall,IR_mD,PC4_mD,PC8_mD,rs_F_mD,rt_F_mD,EXT_mD,IR_E,PC4_E,PC8_E,rs_E,rt_E,EXT_E );
	E e(reset,clk,IR_E,PC4_E, PC8_E,rs_F_E, rt_F_E, EXT_E, ALU_mE, rt_mE, RDst_mE, PC4_mE, PC8_mE, IR_mE,Cal_r_E,Cal_i_E, B_E,Load_E, Save_E, J_E,busy);
	E_M_pipe e_m(clk,reset, IR_mE, PC4_mE, PC8_mE, ALU_mE, rt_mE, RDst_mE,IR_M, PC4_M, PC8_M, ALUout_M, rt_M, RDst_M );
	M m(clk, reset,IR_M, PC4_M, PC8_M, ALUout_M, rt_F_M, RDst_M, IR_mM, PC4_mM, PC8_mM, ALUout_mM, DMout_mM,RDst_mM ,Cal_r_M,Cal_i_M, B_M,Load_M, Save_M, J_M,reg1);
	M_W_pipe m_w(clk, reset, IR_mM, PC4_mM, PC8_mM, ALUout_mM, DMout_mM, RDst_mM, IR_W, PC4_W, PC8_W, ALUout_W,DMout_W,RDst_W );
	W w(IR_W,PC4_W,PC8_W,ALUout_W,DMout_W,RDst_W,clk,WB_mW,regwrite_mW,RDst_mW,Cal_r_W,Cal_i_W, B_W,Load_W, Save_W, J_W,reg2);
	
	Forward forwarder(ALUout_M,RF_D_RD1out,RF_D_RD2out,rs_E,rt_E, IR_D[25:21],WB_mW,IR_D[20:16],RDst_M,RDst_mW,IR_E[25:21],IR_E[20:16],reg1,reg2,rs_F_mD,rt_F_mD,rt_F_E,rs_F_E,rt_M,rt_F_M ,IR_M[20:16]);
	 
	 //stall_sign
	 initial begin
		stall<=0;
	 end
	 
	 always @(*)begin
		 stall_B_Calr =(B_D&&Cal_r_E&&((IR_D[25:21]===IR_E[15:11])|(IR_D[20:16]===IR_E[15:11])));
		 stall_B_Cali=(B_D&&Cal_i_E&&((IR_D[25:21]===IR_E[20:16])|(IR_D[20:16]===IR_E[20:16])));
		 stall_B_Load1=(B_D&&Load_E&&((IR_D[25:21]===IR_E[20:16])|(IR_D[20:16]===IR_E[20:16])));
		 stall_B_Load2=(B_D&&Load_M&&((IR_D[25:21]===IR_M[20:16])|(IR_D[20:16]===IR_M[20:16])));
		 stall_Calr_Load=(Cal_r_D&&Load_E&&((IR_D[25:21]===IR_E[20:16])|(IR_D[20:16]===IR_E[20:16])));
		 stall_Cali_Load=(Cal_i_D&&Load_E&&(IR_D[25:21]===IR_E[20:16]));
		 stall_Load_Load =(Load_D&&Load_E&&(IR_D[25:21]===IR_E[20:16]));
		 stall_Save_Load =(Save_D&&Load_E&&(IR_D[25:21]===IR_E[20:16]));	  
		 stall_md=(busy&&((IR_D[5:0]==6'b011000||IR_D[5:0]==6'b011001||IR_D[5:0]==6'b011010||IR_D[5:0]==6'b011011)||(IR_D[5:0]==6'b010000||IR_D[5:0]==6'b010010)||(IR_D[5:0]==6'b010001||IR_D[5:0]==6'b010011)));
		 stall=1'b1&(stall_B_Calr|stall_B_Cali|stall_B_Load1|stall_B_Load2|stall_Calr_Load|stall_Cali_Load|stall_Load_Load|stall_Save_Load| stall_md);
	 end
	//(IR_E[5:0]==6'b011000||IR_E[5:0]==6'b011001||IR_E[5:0]==6'b011010||IR_E[5:0]==6'b011011)
	//(IR[5:0]==6'b010000||IR[5:0]==6'b010010)
	//(IR[5:0]==6'b010001||IR[5:0]==6'b010011)
	brudge Bridge(ALUout_M,);
	module brudge(
    
    input prWE,
    input [31:0] RD1,
    input [31:0] RD2,
    input [31:0] prWD,
    input [7:2] hwintin,
    output [7:2] hwintout,
    output [31:0] prRD,
    output [31:0] Dadd,
    output [31:0] DWD,
    output we1,
    output we2
    );

	
	TC timer1(clk,reset,)
	module TC(
    input clk,
    input reset,
    input [31:2] Addr,
    input WE,
    input [31:0] Din,
    output [31:0] Dout,
    output IRQ
    );
endmodule
