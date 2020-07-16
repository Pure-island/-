`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:32 12/24/2019 
// Design Name: 
// Module Name:    cp0 
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
module cp0(
	 input[4:0] A1,
	 input[31:0] DIn,
	 input[31:0] PC_E,
	 input[31:0] PC,
	 input[31:0] PC_W,
	 input[31:0] IR_M,
	 input[31:0] IR_W,
	 input Zero,
	 input more,
	 input less,
	 input if_bd,
	 input[6:2] ExcCode,
	 input[5:0] HWInt,
	 input We,
	 input EXLSet,
	 input EXLClr,
    input clk,
    input reset,
	 output Interrupt,
	 output[31:0] EPC,
	 output[31:0] DOut 
    );
	 
	 reg[15:10] im;
	reg exl;
	reg ie;
	reg bd;
	reg[6:2] exccode;
	reg[15:10] hwint_pend;
	reg[31:0] epc;
	reg[31:0] prid = 32'h12345678;
	wire Exception;//“Ï≥£
	wire IntReq;//÷–∂œ
	 
	initial begin
		im<=6'b0;//SR
		exl<=1'b0;
		ie<=1'b0;
		hwint_pend<=6'b0;//CAUSE
		bd<=0;
		exccode<=0;
		epc<=0;//EPC
	end
	
	assign EPC=epc;

endmodule
