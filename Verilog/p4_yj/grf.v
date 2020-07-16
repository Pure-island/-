`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:39:10 11/11/2019 
// Design Name: 
// Module Name:    grf 
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
module grf(
    input reset,
    input we,
    input [4:0] a1,
    input [4:0] a2,
    input [4:0] a3,
    input [31:0] WD,
    input clk,
	 input [31:0] wpc,
    output [31:0] RD1,
    output [31:0] RD2,
	 input jal
    );
	wire [4:0]add3;
	wire [31:0] WD1;
	reg[31:0] grf[31:0];
	reg[5:0] yj0;
	assign RD1=grf[a1];
	assign RD2=grf[a2];
	assign add3=(jal)?31:a3;
	assign WD1=(jal)?(wpc+4):WD;
	initial begin
		for(yj0=0;yj0<32;yj0=yj0+1)
			grf[yj0]=0;
	end
	always @(posedge clk)begin
		if(reset==1) begin
		for(yj0=0;yj0<32;yj0=yj0+1)
			grf[yj0]=0;
		end
		else if(we==1)begin
			if({1'b0,add3}!=0) grf[add3]=WD1;
			if({1'b0,add3}!=0)$display("@%h: $%d <= %h",wpc,{1'b0,add3},WD1);
		end
	end
endmodule
