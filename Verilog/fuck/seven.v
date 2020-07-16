`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:18 09/25/2019 
// Design Name: 
// Module Name:    seven 
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
module seven(
    input [3:0] x,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g
    );
	wire x1,x2,x3,x4;
	assign {x1,x2,x3,x4}=x;
	assign a=(x1|| x2|| x3|| !x4)&&(x1||! x2|| x3|| x4)&&(!x1|| x2|| !x3|| !x4)&&(!x1|| !x2|| x3|| !x4);
	assign b=(x1|| x2||! x3)&&(x1|| !x3|| !x4)&&(!x1|| !x2|| x3|| !x4);
	assign c=(x1||! x2|| x3) &&(x1|| !x3||! x4) &&(!x1|| x2|| x3||! x4);
	assign d=(x1|| x2|| x3|| !x4)&&(x1||! x2|| x3|| x4)&&(!x1|| x2|| !x3|| x4) &&( !x2|| !x3||! x4);
	assign e=(x1|| x2|| x3||! x4)&&(x1|| x2||! x3|| x4)&& (!x1|| !x2 || x4) &&(!x1|| !x2|| !x3);
	assign f=(x1 || x3||! x4)&&(!x1 || !x3||! x4) &&(!x2||! x3|| x4) &&(!x1|| !x2 || x4);
	assign g=(x1|| x2|| x3) &&(x1|| !x2||! x3||! x4)&&(!x1|| !x2|| x3|| x4);
	
endmodule
