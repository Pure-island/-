`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:57 11/18/2019 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [31:0] data,
    input [1:0] Extop,
    output [31:0] out
    );
	wire [15:0] one,two;
	wire [31:0] zero_ext,sign_ext,lui_ext,three;
	
	assign {one,two}=data;
	assign zero_ext={16'h0000,two};
	assign sign_ext={{16{two[15]}},two};
	assign lui_ext={two,16'h0000};
	
	MUX32 extMux(Extop,zero_ext,sign_ext,lui_ext,out);
	
endmodule
