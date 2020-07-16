`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:47 11/12/2019 
// Design Name: 
// Module Name:    ALUcontrol 
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
module ALUcontrol(
    input [1:0] ALUOp,
    input [5:0] func,
    output reg [3:0] ALUfunc
    );
	
	always @(*)begin
		if(ALUOp==2'b00) 
			ALUfunc=4'b0010;
		else if(ALUOp==2'b01) 
			ALUfunc=4'b0001;
		else if(ALUOp==2'b10)begin
			if(func==6'b100001) ALUfunc=4'b0010;
			else if(func==6'b100011) ALUfunc=4'b0110;
			else if(func==6'b001000) ALUfunc=4'b0010;
		end
	
	end

endmodule
