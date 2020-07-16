`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:38 11/18/2019 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input [31:0] in,
    input clk,
	 input reset,
    output [31:0] out,
	 input en
    );
	reg[31:0] pc_reg;
	assign out=pc_reg;
	
	initial begin
		pc_reg<=32'h00003000;
	end
	
	always @(posedge clk)begin
		if(reset==1) pc_reg<=32'h00003000;
		else if(en==1) pc_reg<=in;
	end
endmodule
