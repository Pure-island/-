`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:52 09/25/2019 
// Design Name: 
// Module Name:    func
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
module adder(A,B,Sum,Carry,cin);
parameter  width=2; 
input [width-1:0] A,B; 
input cin;
output [width-1:0] Sum; 
output  Carry;
assign {Carry,Sum} = A+B+cin; 
endmodule
