`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:18:30 11/18/2019 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
	 input [31:0] IR,
    input [31:0] RFRD1,
    input [31:0] RFRD2,
    output reg equal
    );

	always @(*)begin
		if(IR[31:26]==6'b000100) equal<=(RFRD1==RFRD2);//beq
		else if(IR[31:26]==6'b000101) equal<=~(RFRD1==RFRD2);//bne
		else if(IR[31:26]==6'b000110) equal<=($signed(RFRD1)<=0);//blez
		else if(IR[31:26]==6'b000111) equal<=($signed(RFRD1)>0);//bgtz
		else if(IR[31:26]==6'b000001) begin
			if(IR[20:16]==5'b00000)
				equal<=($signed(RFRD1)<0);//bltz
			else if(IR[20:16]==5'b00001)
				equal<=($signed(RFRD1)>=0);//bgez		
		end
		else equal<=0;
	end
	
endmodule
