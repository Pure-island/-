`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:52:18 11/19/2019 
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
	input [31:0]IR,
    input clk,
    input reset,
    input [31:0] pc4,
    input [31:0] addr,
    input en,
    input [31:0] MemData,
    output [31:0] DMout
    );
	
	reg[31:0] DMem[11023:0],i,temp,j,temp_D,temp_R;
	
	always@(posedge clk)begin
		#1
		temp=0;
		temp_D=DMem[addr/4];
		if(IR[31:26]==6'b100000||IR[31:26]==6'b100100)begin//lb||lbu
			for(j=0;j<8;j=j+1)
				temp[j]=temp_D[addr[1:0]*8+j];
			if(IR[31:26]==6'b100000) temp={{24{temp[7]}},temp[7:0]};
		end
		else if(IR[31:26]==6'b100001||IR[31:26]==6'b100101)begin//lh||lhu
			for(j=0;j<16;j=j+1)
				temp[j]=temp_D[addr[1]*16+j];
			if(IR[31:26]==6'b100001) temp={{16{temp[15]}},temp[15:0]};
		end
		else	temp= temp_D;
	end
	
	 assign DMout=temp;
	
	initial begin
		for(i=0;i<11024;i=i+1)
			DMem[i]<=0;
	end
	
	always @(posedge clk)begin
	#1
		if(reset==1)begin
			for(i=0;i<11024;i=i+1)
				DMem[i]<=0;
		end
		else if(en==1)begin
			if(IR[31:26]==6'b101011)begin//sw
				DMem[addr/4]<=MemData;
				$display("%d@%h: *%h <= %h", $time, pc4-4, addr,MemData);
			end
			else if(IR[31:26]==6'b101000)begin//sb
				temp_R=DMem[addr/4];
				for(j=0;j<8;j=j+1)
					temp_R[addr[1:0]*8+j]=MemData[j];
				DMem[addr/4]=temp_R;
				$display("%d@%h: *%h <= %h", $time, pc4-4, {addr[31:2],2'b00},temp_R);
			end
			else if(IR[31:26]==6'b101001)begin//sh
				temp_R=DMem[addr/4];
				for(j=0;j<16;j=j+1)
					temp_R[addr[1]*16+j]=MemData[j];
				DMem[addr/4]=temp_R;
				$display("%d@%h: *%h <= %h", $time, pc4-4, {addr[31:2],2'b00},temp_R);
			end
		end
	end
endmodule
