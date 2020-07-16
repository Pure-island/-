`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:15 09/11/2019 
// Design Name: 
// Module Name:    k 
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

	 reg[31:0] _reg[31:0];
	 wire i;
	 initial begin
		for(i=0;i<=31;i++)begin
		 _reg[i] <= 0;
		 end
	end

