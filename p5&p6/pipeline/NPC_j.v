`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:11:01 11/19/2019 
// Design Name: 
// Module Name:    NPC_j 
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
module NPC_j(
    input [31:0] IR,
    input [31:0] PC4_D,
    output [31:0] npc_j
    );
	
	assign npc_j={PC4_D[31:26],IR[25:0],2'b00};

endmodule
