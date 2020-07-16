`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:17 09/14/2019 
// Design Name: 
// Module Name:    code 
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
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output [63:0] Output0,
    output [63:0] Output1
    );
	 reg [63:0] Output0_,Output1_,o2;
initial begin
	Output0_=0;
	Output1_=0;
end
assign Output0=Output0_;
assign Output1=Output1_;
always  @(posedge Clk)begin
	if(En == 1)begin
		if(Slt == 0)
			Output0_ = Output0_ + 1;
		else if(Slt == 1)begin
			o2 = o2 +1;
			if(o2 == 4)begin
				o2 = 0;
				Output1_ = Output1_ + 1;
			end
		end
	end
	if(Reset == 1)begin
		Output0_=0;
		Output1_=0;
		o2= 0; 
		end
	end
endmodule
