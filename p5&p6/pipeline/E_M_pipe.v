`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:45 11/19/2019 
// Design Name: 
// Module Name:    E_M_pipe 
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
module E_M_pipe(
    input clk,
    input reset,
    input [31:0] IR,
    input [31:0] PC4,
    input [31:0] PC8,
    input [31:0] ALUout,
    input [31:0] rt,
    input [4:0] RDst,
    output reg [31:0] IR_M,
    output reg [31:0] PC4_M,
    output reg [31:0] PC8_M,
    output reg [31:0] ALUout_M,
    output reg [31:0] rt_M,
    output reg [4:0] RDst_M
    );
	
	always @(posedge clk)begin
		if(reset==1)begin
			 IR_M<=0;
			 PC4_M<=0;
			 PC8_M<=0;
			 ALUout_M<=0;
			 rt_M<=0;
			 RDst_M<=5'b00000;
		end
		else begin
			 IR_M<=IR;
			 PC4_M<=PC4;
			 PC8_M<=PC8;
			 ALUout_M<=ALUout;
			 rt_M<=rt;
			 RDst_M<=RDst;
		end
	end

endmodule
