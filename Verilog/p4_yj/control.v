`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:19 11/12/2019 
// Design Name: 
// Module Name:    control 
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
module control(
		input [31:0]ins,
    input [5:0] mat,
    output reg RegDst,
    output reg ALUSrc,
    output reg MemtoReg,
    output reg RegWrite,
    output reg MemRead,
    output reg MemWrite,
    output reg Branch,
    output reg ALUOp1,
    output reg ALUOp2,
    output reg Lui,
	 output reg jal,
	 output reg jr
    );
	always @(*)begin
		case(mat)
		6'b000000:
			begin
			RegDst=1;
			ALUSrc=0;
			MemtoReg=0;
			RegWrite=1;
			MemRead=0;
			MemWrite=0;
			Branch=0;
			ALUOp1=1;
			ALUOp2=0;
			Lui=0;
			jal=0;
			end
		6'b001101:
			begin
			RegDst=0;
			ALUSrc=1;
			MemtoReg=0;
			RegWrite=1;
			MemRead=0;
			MemWrite=0;
			Branch=0;
			ALUOp1=0;
			ALUOp2=1;
			Lui=0;
			jal=0;
			end
		6'b100011:
			begin
			RegDst=0;
			ALUSrc=1;
			MemtoReg=1;
			RegWrite=1;
			MemRead=1;
			MemWrite=0;
			Branch=0;
			ALUOp1=0;
			ALUOp2=0;
			Lui=0;
			jal=0;
			end
		6'b101011:
			begin
			RegDst=0;
			ALUSrc=1;
			MemtoReg=0;
			RegWrite=0;
			MemRead=0;
			MemWrite=1;
			Branch=0;
			ALUOp1=0;
			ALUOp2=0;
			Lui=0;
			jal=0;
			end
		6'b000100:
			begin
			RegDst=0;
			ALUSrc=0;
			MemtoReg=0;
			RegWrite=0;
			MemRead=0;
			MemWrite=0;
			Branch=1;
			ALUOp1=0;
			ALUOp2=0;
			Lui=0;
			jal=0;
			end
		6'b001111:
			begin
			RegDst=0;
			ALUSrc=1;
			MemtoReg=0;
			RegWrite=1;
			MemRead=0;
			MemWrite=0;
			Branch=0;
			ALUOp1=0;
			ALUOp2=0;
			Lui=1;
			jal=0;
			end
		6'b000011:
			begin
			RegDst=0;
			ALUSrc=0;
			MemtoReg=0;
			RegWrite=1;
			MemRead=0;
			MemWrite=0;
			Branch=0;
			ALUOp1=0;
			ALUOp2=0;
			Lui=0;
			jal=1;
			end
		endcase
		if(mat==6'b000000&&ins[5:0]==6'b001000) jr=1;
		else jr=0;
	end

endmodule
