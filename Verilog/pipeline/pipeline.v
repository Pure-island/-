`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:38:20 09/16/2019 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(
    input [31:0] A1,
    input [31:0] A2,
    input [31:0] B1,
    input [31:0] B2,
    input clk,
    output reg [31:0] C = 0
    );
	reg [31:0] ply1 [2:1],ply2 =0 ;
	integer i;
	initial begin
		ply1[1]=0;
		ply1[2]=0;
	end
	always @(posedge clk)begin
		ply1[1]<=A1*B1;
		ply1[2]<=A2*B2;
		
		C<=ply1[1]+ply1[2];
	end
	
endmodule
