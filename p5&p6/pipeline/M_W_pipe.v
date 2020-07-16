`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:33 11/19/2019 
// Design Name: 
// Module Name:    M_W_pipe 
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
module M_W_pipe(
    input clk,
    input reset,
    input [31:0] IR,
    input [31:0] PC4,
    input [31:0] PC8,
    input [31:0] ALUout,
    input [31:0] DMout,
    input [4:0] RDst,
    output reg [31:0] IR_W,
    output  reg[31:0] PC4_W,
    output reg [31:0] PC8_W,
    output reg [31:0] ALUout_W,
    output reg [31:0] DMout_W,
    output reg [4:0] RDst_W
    );
	
	always @(posedge clk)begin
		if(reset==1)begin
			IR_W<=0;
			PC4_W<=0;
			PC8_W<=0;
			ALUout_W<=0;
			DMout_W<=0;
			RDst_W<=5'b00000;
		end
		else begin
			IR_W<=IR;
			PC4_W<=PC4;
			PC8_W<=PC8;
			ALUout_W<=ALUout;
			DMout_W<=DMout;
			RDst_W<=RDst;
		end
	end

endmodule
