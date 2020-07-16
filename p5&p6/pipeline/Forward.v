`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:15:11 11/20/2019 
// Design Name: 
// Module Name:    Forward 
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
module Forward(
    input [31:0] ALUout_M,
	 input [31:0] rs_mD,
	 input [31:0] rt_mD,
	 input [31:0] rs_E,
	 input [31:0] rt_E,
    input [4:0] rsst_D,
    input [31:0] WB_mW,
    input [4:0] rtst_D,
    input [4:0] RDst_M,
    input [4:0] RDst_mW,
    input [4:0] rsst_E,
    input [4:0] rtst_E,
	 input reg1,
	 input reg2,
    output reg [31:0] rs_F_mD,
    output reg [31:0] rt_F_mD,
    output reg [31:0] rt_F_E,
    output reg [31:0] rs_F_E,
	 input [31:0] rt_M,
	 output reg [31:0] rt_F_M,
	 input [4:0] rtst_M
    );
	
	always @(*)begin
		if(rsst_D==RDst_M&&reg1==1&&RDst_M!=0) rs_F_mD<=ALUout_M;
		else if(rsst_D==RDst_mW&&reg2==1&&RDst_mW!=0) rs_F_mD<=WB_mW;
		else rs_F_mD<= rs_mD;
		
		if(rtst_D==RDst_M&&reg1==1&&RDst_M!=0) rt_F_mD<=ALUout_M;
		else if(rtst_D==RDst_mW&&reg2==1&&RDst_mW!=0) rt_F_mD<=WB_mW;
		else rt_F_mD<= rt_mD;
		
		if(rsst_E==RDst_M&&reg1==1&&RDst_M!=0) rs_F_E<=ALUout_M;
		else if(rsst_E==RDst_mW&&reg2==1&&RDst_mW!=0) rs_F_E<=WB_mW;
		else rs_F_E<= rs_E;
		
		if(rtst_E==RDst_M&&reg1==1&&RDst_M!=0) rt_F_E<=ALUout_M;
		else if(rtst_E==RDst_mW&&reg2==1&&RDst_mW!=0) rt_F_E<=WB_mW;
		else rt_F_E<= rt_E;
		
		if(rtst_M==RDst_mW&&reg2==1&&RDst_mW!=0) rt_F_M<=WB_mW;
		else rt_F_M<= rt_M;
		
	end

endmodule
