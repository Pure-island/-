`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:18 09/14/2019 
// Design Name: 
// Module Name:    adder 
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
module adder(
    input [3:0] A,
    input [3:0] B,
    input Clk,
    input En,
    output  [3:0] Sum,
    output  Overflow
    );
	reg [4:0] a=0;
	assign {Overflow,Sum} = a;
	always @(posedge Clk)begin
		if(En)begin
		a= A + B;
		end
	end

endmodule
