`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:11 10/18/2019 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output reg out
    );
	reg [1:0] state=0;
	always @(posedge clk)begin
		if(in<=57 &&in>=48&& state==0) state=1;
		else if((in==42||in==43)&&state==0) state=2;
		else if(in<=57 &&in>=48&& state==1) state=2;
		else if((in==42||in==43)&&state==1) state=0;
		if(state==1) out=1;
		else out=0;
	end
	always@(clr)begin
		state=0;
		out=0;
	end
endmodule
