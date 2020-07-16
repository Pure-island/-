`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:59:11 11/11/2019 
// Design Name: 
// Module Name:    mux 
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
module mux(
    input [31:0] dataB,
    input [31:0] selectB,
	 input sel,
    input [31:0] _32in1,
    input [31:0] _32in2,
    input [4:0] _5in1,
    input [4:0] _5in2,
    output reg[31:0] _32out,
    output reg[4:0] _5out
    );
	always @(*)begin
		if(dataB==32&&selectB==1)begin
			if(sel==0) _32out= _32in1;
			else _32out= _32in2;
		end
		if(dataB==5&&selectB==1)begin
			if(sel==0) _5out= _5in1;
			else _5out= _5in2;
		end
	end

endmodule
