`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:32 11/18/2019 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] pc_in,
    output [31:0] out
    );
	 
	reg[31:0] Imem[5000:0];
	wire[19:0] n0;
	wire[11:0] add_IM;
	
	initial begin
		$readmemh("code.txt",Imem);
	end
	
	
	assign {n0,add_IM}=pc_in/4;
	assign out=Imem[add_IM];
endmodule
