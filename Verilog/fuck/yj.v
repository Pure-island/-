`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:42 09/26/2019 
// Design Name: 
// Module Name:    yj 
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
module yj( 
    input [3:0] x, 
    output a, 
    output b, 
    output c, 
    output d, 
    output e, 
    output f, 
    output g 
    ); 
 
 wire [3:0] notx; 
 wire a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, d1, d2, d3, d4, e1, e2, e3, f1, f2, 
f3, f4, g1, g2, g3; 
  
 genvar i; 
 generate 
 for (i = 0; i <= 3; i = i + 1) begin :assnotx
  not (notx[i], x[i]); 
 end 
 endgenerate 
 or (a1, x[3], x[2], x[1], notx[0]); 
 or (a2, x[3], notx[2], x[1], x[0]); 
 or (a3, notx[3], x[2], notx[1], notx[0]); 
 or (a4, notx[3], notx[2], x[1], notx[0]); 
 and (a, a1, a2, a3, a4); 
 or (b1, x[3], x[2], notx[0]); 
 or (b2, x[3], x[2], notx[1]); 
 or (b3, x[3], notx[1], notx[0]); 
 assign b4 = a4; 
 and (b, b1, b2, b3, b4); 
 or (c1, x[3], notx[0]); 
 or (c2, x[2], x[1], notx[0]); 
 or (c3, x[3], notx[2], x[1]); 
 and (c, c1, c2, c3); 
 assign d1 = a1; 
 assign d2 = a2; 
 or (d3, notx[2], notx[1], notx[0]); 
 or (d4, notx[3], x[2], notx[1], x[0]); 
 and (d, d1, d2, d3, d4);  
 or (e1, x[3], x[2], notx[1], x[0]); 
 or (e2, notx[3], notx[2], x[0]); 
 or (e3, notx[3], notx[2], notx[1]); 
 and (e, e1, e2, e3);  
 or (f1, x[3], notx[2], x[1], notx[0]); 
 or (f2, notx[2], notx[1], x[0]); 
 or (f3, notx[3],notx[1], notx[0]); 
 assign f4 = e2; 
 and (f, f1, f2, f3, f4);  
 or (g1, x[3], x[2], x[1]); 
 or (g2, x[3], notx[2], notx[1], notx[0]); 
 or (g3, notx[3], notx[2], x[1], x[0]); 
 and (g, g1, g2, g3); 
 
endmodule 