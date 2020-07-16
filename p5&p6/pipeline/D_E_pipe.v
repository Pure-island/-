`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:09 11/19/2019 
// Design Name: 
// Module Name:    D_E_pipe 
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
module D_E_pipe(
    input clk,
    input reset,
    input stall,
    input [31:0] IR,
    input [31:0] PC_4_Ein,
    input [31:0] PC_8Ein,
    input [31:0] rs_Ein,
    input [31:0] rt_Ein,
    input [31:0] EXT_Ein,
    output reg [31:0] IR_E,
    output reg[31:0] PC4_E,
    output reg[31:0] PC8_E,
    output reg [31:0] rs_E,
    output reg [31:0] rt_E,
    output reg  [31:0] EXT_E
    );
	
	always @(posedge clk)begin
		if(reset==1)begin
			 IR_E<=0;
			 PC4_E<=0;
			 PC8_E<=0;
			 rs_E<= 0;
			 rt_E<=0;
			 EXT_E<=0;
		end
		else begin
			 IR_E<=IR;
			 PC4_E<=PC_4_Ein;
			 PC8_E<=PC_8Ein;
			 rs_E<= rs_Ein;
			 rt_E<=rt_Ein;
			 EXT_E<=EXT_Ein;
		end
			
	end

endmodule


