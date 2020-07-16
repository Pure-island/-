`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:04 10/17/2019 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
	assign C = cc;
	reg [31:0] aa,bb,cc;
	always @(*)begin
		aa = A;
		bb = B;
		case(C)
			3'b000:cc=aa+bb;
			3'b001:cc=aa-bb;
			3'b010:cc=aa&bb;
			3'b011:cc=aa|bb;
			3'b100:cc=aa>>bb;
			3'b101:cc=$signed(aa)>>>bb;
		endcase
	end
	
endmodule

