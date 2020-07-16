`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:16:56 11/11/2019 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input [31:0] NEWpc,
    input clk,
    input reset,
    output [31:0] pc,
    output [31:0] out
    );
	reg[31:0] IM[1023:0];
	reg[31:0] pc_reg;
	wire[21:0] n0;
	wire[9:0] add_IM;
	assign {n0,add_IM}=pc_reg/4;
	assign pc=pc_reg;
	assign out=IM[add_IM];
	initial begin
		pc_reg=32'h00003000;
		$readmemh("code.txt",IM);
	end
	always @(posedge clk)begin
		if(reset==1) pc_reg=32'h00003000;
		else	pc_reg=NEWpc;
	end
endmodule
