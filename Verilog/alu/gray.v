`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:19:24 10/18/2019 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
	 reg [2:0] s=0;
	initial begin
		Output=0;
		Overflow=0;
	end
	always @(posedge Clk)begin
		if(Reset==1)begin
		Output=0;
		s=0;
		Overflow=0;
		end
		else if(En==1)begin
		if(Output==3'b100) begin
			Overflow=1;
			Output=0;
			s=0;
		end
		else begin
			s=s+1;
			Output=(s>>1)^s;
			end
		end
	end

endmodule
