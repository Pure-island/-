`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:08 12/09/2019 
// Design Name: 
// Module Name:    mul_div 
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
module mul_div(
	 input reset,
    input [31:0] data11,
    input [31:0] data22,
    input [31:0] IR,
	 input start,
	 input clk,
	 output reg busy,
    output reg [31:0] out
    );
	
	reg working;
	reg [31:0] option,t,hi,lo,data1,data2;
	reg [1:0] fa;
	initial begin
		busy=0;
		hi=0;
		lo=0;	
		out=0;
		working=0;
	end
	always @(posedge clk)begin
	#1		
		if(reset==1)begin
			hi=0;
			lo=0;
			busy=0;
			out=0;
			working=0;
			
		end
		
		if(IR[5:0]==6'b010000&&IR[31:26]==6'b000000) out = hi;
		else if(IR[5:0]==6'b010010&&IR[31:26]==6'b000000) out = lo;
		
		if(IR[5:0]==6'b010001) hi=data11;
		else if(IR[5:0]==6'b010011) lo=data11;
	
	
		if(start==1)begin
			data1=data11;
			data2=data22;
			working<=1;
			if(IR[5:0]==6'b011000)  option=0;//mult
			else if(IR[5:0]==6'b011001) option=1;//multu
			else if(IR[5:0]==6'b011010)  option=2;//div
			else if(IR[5:0]==6'b011011) option=3;//divu
			t=0;
			busy=1;
		end
		else if(working==1) begin
			
			if(option==0)begin
				t=t+1;
				if(t==5)begin
					{hi,lo}=$signed(data1)*$signed(data2);
					working=0;
					busy=0;
				end
			end
			if(option==1)begin
				t=t+1;
				if(t==5)begin
					{fa,hi,lo}=$signed({1'b0,data1})*$signed({1'b0,data2});
					working=0;
					busy=0;
				end
			end
			if(option==2)begin
				t=t+1;
				if(t==10)begin
					lo=$signed(data1)/$signed(data2);
					hi=$signed(data1)%$signed(data2);
					working=0;
					busy=0;
				end
			end
			if(option==3)begin
				t=t+1;
				if(t==10)begin
					lo=$signed({1'b0,data1})/$signed({1'b0,data2});
					hi=$signed({1'b0,data1})%$signed({1'b0,data2});
					working=0;
					busy=0;
				end
			end
		end
	end

endmodule
