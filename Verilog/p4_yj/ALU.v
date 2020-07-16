`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:09:28 11/11/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	 input lui,
    input [3:0] ALUcontrol,
    input [31:0] in1,
    input [31:0] in2,
    output reg [31:0] out,
    output zero
    );
	assign zero=(in1==in2);
	wire cin;
	always @(*)begin
		if(lui==1) out=in2;
		else begin
			case(ALUcontrol)
			4'b0000:out=in1&in2;
			4'b0001:out=in1|in2;
			4'b0010:out=in1+in2;
			4'b0110:out=in1-in2;
			endcase
		end
	end

endmodule
