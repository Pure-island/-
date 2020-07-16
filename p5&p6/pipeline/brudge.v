`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:50 12/24/2019 
// Design Name: 
// Module Name:    brudge 
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
module brudge(
    input [31:0] pradd,
    input prWE,
    input [31:0] RD1,
    input [31:0] RD2,
    input [31:0] prWD,
    input [7:2] hwintin,
    output [7:2] hwintout,
    output [31:0] prRD,
    output [31:0] Dadd,
    output [31:0] DWD,
    output we1,
    output we2
    );

	assign prRD=(pradd[31:4]==28'h00007F0)?RD1:
					(pradd[31:4]==28'h00007F1)?RD2:
					0;
					
	assign we1=prWE&(pradd[31:4]==28'h00007F0);
	assign we2=prWE&(pradd[31:4]==28'h00007F1);
	assign hwintout=hwintin;
	assign Dadd=pradd;
	assign DWD=prWD;
endmodule
