`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:20:36 11/18/2019 
// Design Name: 
// Module Name:    NPC 
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
module NPC_beq(
    input [31:0] ins,
    input [31:0] extended,
    input [31:0] PC4_D,
    input zero,
    output reg [31:0] npc_beq
    );
	
	always @(*)begin
		if(zero==1) npc_beq<= PC4_D+extended*4;
		else  npc_beq<= PC4_D+4;
	end
	
endmodule
