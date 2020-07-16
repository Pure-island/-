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
	
	reg [31:0] aa,bb,cc;
	assign C = cc;
	always @(*)begin
		aa = A;
		bb = B;
		case(ALUOp)
			3'b000:cc=aa+bb;
			3'b001:cc=aa-bb;
			3'b010:cc=aa&bb;
			3'b011:cc=aa|bb;
			3'b100:cc=aa>>bb;
			3'b101:cc=$signed(aa)>>>bb;
			default:;
		endcase
	end
	
endmodule
