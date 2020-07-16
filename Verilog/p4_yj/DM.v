`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:30 11/11/2019 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input [31:0] wpc, 
    input [31:0] add,
    input [31:0] data,
    input clk,
    input reset,
    input write,
    input read,
    input select,
    output [31:0] out
    );
	reg[31:0] DMem[1023:0];
	reg [31:0] dm_out,temp;
	reg [10:0] yj;
	wire[21:0] n0;
	wire[9:0] add_DM;
	assign {n0,add_DM}=add/4;
	assign out = (select)?dm_out:add;
	initial begin
		for(yj=0;yj<1024;yj=yj+1)
			DMem[yj]=0;
	end
	always @(posedge clk)begin
		if(reset==1)begin
			for(yj=0;yj<1024;yj=yj+1)
				DMem[yj]=0;
		end
		else if(write==1)begin
			DMem[add_DM]=data;
			temp= add_DM;
			$display("@%h: *%h <= %h",wpc,temp*4,data);
		end
	end
	always @(*)begin
		if(read==1) dm_out=DMem[add_DM];
	end
endmodule
