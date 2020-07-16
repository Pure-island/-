`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:15:25 11/19/2019 
// Design Name: 
// Module Name:    F 
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
module F(
    input pc_sel1_D,
    input clk,
    input reset,
    input [31:0] npc_D,
    output [31:0] PC4,
    output [31:0] IR,
	 input stall
    );
	wire [31:0] npc,pc_out;
	
	PC pc(npc,clk,reset,pc_out,!stall );
	
	ADD4 add4(pc_out,PC4);
	
	IM im(pc_out-32'h00003000,IR);
	
	MUX32 pc_sel({1'b0,pc_sel1_D},PC4,npc_D,,npc);

endmodule
