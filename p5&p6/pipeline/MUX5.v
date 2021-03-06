`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:52 11/19/2019 
// Design Name: 
// Module Name:    MUX5 
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
module MUX5(
    input [1:0] sel,
    input [4:0] a,
    input [4:0] b,
    input [4:0] c,
	 output reg [4:0] out
    );

	always @(*)begin
		case(sel)
		0:out<=a;
		1:out<=b;
		2:out<=c;
		default:out<=a;
		endcase
	end
endmodule
