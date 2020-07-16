`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:12:56 09/16/2019 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );
	reg flag=0,out1=0;
	
	always @(posedge clk)begin
		if((char>=8'd65&&char<=8'd90)||(char>=8'd97&&char<=8'd122))
			flag = 1;
		else if(char>=8'd48&&char<=8'd57)
			begin end
		else
			flag = 0;
		if(flag==1&&char>=8'd48&&char<=8'd57)
			out1 = 1;
		else 
			out1 = 0;
	end
	assign out = out1;
endmodule
