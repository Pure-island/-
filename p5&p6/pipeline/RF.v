`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:05:51 11/18/2019 
// Design Name: 
// Module Name:    RF 
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
module RF(
    input IR_W,
	 input reset,
    input we,
    input [4:0] a1,
    input [4:0] a2,
    input [4:0] a3,
    input [31:0] WD,
    input clk,
	 input [31:0] wpc,
    output [31:0] RD1,
    output [31:0] RD2
    );
	//wire [31:0] WD1;
	reg[31:0] grf[31:0];
	reg[5:0] yj0;
	assign RD1=grf[a1];
	assign RD2=grf[a2];
	
	
	initial begin
		for(yj0=0;yj0<32;yj0=yj0+1)
			grf[yj0]=0;
	end
	
	
	always @(posedge clk)begin
	#1
		if(reset==1) begin
		for(yj0=0;yj0<32;yj0=yj0+1)
			grf[yj0]=0;
		end
		else if(we==1)begin
			
			if({1'b0,a3}!=0) grf[a3]=WD;
			//if(IR_W==32'h00000000)$display("%d@%h: $%d <= %h", $time, wpc,{1'b0,a3},IR_W);
			/*else */if({1'b0,a3}!=0)$display("%d@%h: $%d <= %h", $time, wpc,{1'b0,a3},WD);
		end
	end
	
endmodule
