`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:56:21 10/23/2019 
// Design Name: 
// Module Name:    ads 
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
module ads( 
    input [254:0] in,
    output  [7:0] out );
    reg [7:0] sum=0;
    integer i;
    assign out=sum;
    always @(*)begin
        for(i=0;i<=254;i=i+1)begin
            if(in[i]) begin sum =sum+1;end
        end
    end
endmodule
