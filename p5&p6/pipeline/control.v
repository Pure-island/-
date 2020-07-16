`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:25:56 11/18/2019 
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
    input [31:0] IR,
    output reg [1:0] RegDst,
    output reg ALUSrc,
    output reg MemtoReg,
    output reg RegWrite,
    output reg MemWrite,
    output reg [1:0] Extop,
    output reg [3:0] ALUop,
    output reg pc_sel1,
    output reg [1:0] pc_sel2,
    output reg Cal_r,
    output reg Cal_i,
    output reg B,
    output reg Load,
    output reg Save,
    output reg J
    );
	 
	always @(*)begin
		case(IR[31:26])
		
		6'b000000:
			begin
			RegDst<=1;
			ALUSrc<=0;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=0;
			if(IR[5:0]==6'b100001||IR[5:0]==6'b100000) ALUop <= 0;//addu
			else if(IR[5:0]==6'b100011||IR[5:0]==6'b100010) ALUop<=1;//subu
			else if(IR[5:0]==6'b000000) ALUop<=4;//sll
			else if(IR[5:0]==6'b000010) ALUop<=5;//srl
			else if(IR[5:0]==6'b000011) ALUop<=6;//sra
			else if(IR[5:0]==6'b000100) ALUop<=7;//sllv
			else if(IR[5:0]==6'b000110) ALUop<=8;//srlv
			else if(IR[5:0]==6'b000111) ALUop<=9;//srav
			else if(IR[5:0]==6'b100100) ALUop<=10;//and
			else if(IR[5:0]==6'b100101) ALUop<=2;//or
			else if(IR[5:0]==6'b100110) ALUop<=11;//xor
			else if(IR[5:0]==6'b100111) ALUop<=12;//nor
			else if(IR[5:0]==6'b101010) ALUop<=13;//slt
			else if(IR[5:0]==6'b101011) ALUop<=14;//sltu
			else ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			if(IR[15:11]==0)Cal_r<=0;
			else Cal_r<=1;
			Cal_i<=0;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			
			if(IR[5:0]==6'b001000)begin//jr
				RegDst<=2;
				ALUSrc<=0;
				MemtoReg<=0;
				RegWrite<=0;
				MemWrite<=0;
				Extop<=0;
				ALUop<=3;
				pc_sel1<=1;
				pc_sel2<=2;
				Cal_r<=1;
				Cal_i<=0;
				B<=1;
				Load<=0;
				Save<=0;
				J<=1;
			 end
			 
			 if(IR[5:0]==6'b001001)begin//jalr
				RegDst<=1;
				ALUSrc<=0;
				MemtoReg<=0;
				RegWrite<=1;
				MemWrite<=0;
				Extop<=0;
				ALUop<=3;
				pc_sel1<=1;
				pc_sel2<=2;
				Cal_r<=1;
				Cal_i<=0;
				B<=1;
				Load<=1;
				Save<=0;
				J<=1;
			 end
			 
			 if(IR[5:0]==6'b011000||IR[5:0]==6'b011001||IR[5:0]==6'b011010||IR[5:0]==6'b011011)begin//mult...
				RegDst<=1;
				ALUSrc<=0;
				MemtoReg<=0;
				RegWrite<=0;
				MemWrite<=0;
				Extop<=0;
				ALUop<=3;
				pc_sel1<=0;
				pc_sel2<=0;
				Cal_r<=1;
				Cal_i<=0;
				B<=0;
				Load<=0;
				Save<=0;
				J<=0;
			 end
			 
			 if(IR[5:0]==6'b010000||IR[5:0]==6'b010010)begin//mfhi.mflo
				RegDst<=1;
				ALUSrc<=0;
				MemtoReg<=0;
				RegWrite<=1;
				MemWrite<=0;
				Extop<=0;
				ALUop<=3;
				pc_sel1<=0;
				pc_sel2<=0;
				Cal_r<=1;
				Cal_i<=0;
				B<=0;
				Load<=0;
				Save<=0;
				J<=0;
			 end
			 
			 if(IR[5:0]==6'b010001||IR[5:0]==6'b010011)begin//mthi.mtlo
				RegDst<=1;
				ALUSrc<=0;
				MemtoReg<=0;
				RegWrite<=0;
				MemWrite<=0;
				Extop<=0;
				ALUop<=3;
				pc_sel1<=0;
				pc_sel2<=0;
				Cal_r<=1;
				Cal_i<=0;
				B<=0;
				Load<=0;
				Save<=0;
				J<=0;
			 end
			 /*
			 if(IR[5:0]==6'b011000)  option=0;//mult
			else if(IR[5:0]==6'b011001) option=1;//multu
			else if(IR[5:0]==6'b011010)  option=2;//div
			else if(IR[5:0]==6'b011011) option=3;//divu
			 */
			end
			
		6'b001101://ori
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=0;
			ALUop<=2;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001110://xori
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=0;
			ALUop<=11;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001010://slti
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=13;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001011://sltiu
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=14;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001000://addi
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001001://addiu
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001100://andi
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=0;
			ALUop<=10;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b100011://lw
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=1;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=1;
			Save<=0;
			J<=0;
			end
			
		6'b101011://sw
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=0;
			MemWrite<=1;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=0;
			Save<=1;
			J<=0;
			end
		
		6'b000101,//bne
		6'b000001,//bltz,bgez
		6'b000110,//blez
		6'b000111,//bgtz
		6'b000100://beq
			begin
			RegDst<=0;
			ALUSrc<=0;
			MemtoReg<=0;
			RegWrite<=0;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=1;
			pc_sel2<=1;
			Cal_r<=0;
			Cal_i<=0;
			B<=1;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b001111://lui
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=2;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=1;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
			
		6'b000011://Jal
			begin
			RegDst<=2;
			ALUSrc<=0;
			MemtoReg<=0;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=0;
			ALUop<=0;
			pc_sel1<=1;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=1;
			Save<=0;
			J<=1;
			end
			
		6'b000010://J
			begin
			RegDst<=0;
			ALUSrc<=0;
			MemtoReg<=0;
			RegWrite<=0;
			MemWrite<=0;
			Extop<=0;
			ALUop<=0;
			pc_sel1<=1;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=0;
			Save<=0;
			J<=1;
			end
			
		6'b100000://lb
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=1;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=1;
			Save<=0;
			J<=0;
			end
			
		6'b100100://lbu
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=1;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=1;
			Save<=0;
			J<=0;
			end
			
		6'b100001://lh
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=1;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=1;
			Save<=0;
			J<=0;
			end
			
		6'b100101://lhu
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=1;
			RegWrite<=1;
			MemWrite<=0;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=1;
			Save<=0;
			J<=0;
			end
			
		6'b101000://sb
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=0;
			MemWrite<=1;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=0;
			Save<=1;
			J<=0;
			end
			
		6'b101001://sh
			begin
			RegDst<=0;
			ALUSrc<=1;
			MemtoReg<=0;
			RegWrite<=0;
			MemWrite<=1;
			Extop<=1;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=0;
			Save<=1;
			J<=0;
			end
		
		default:
			begin
			RegDst<=0;
			ALUSrc<=0;
			MemtoReg<=0;
			RegWrite<=0;
			MemWrite<=0;
			Extop<=0;
			ALUop<=0;
			pc_sel1<=0;
			pc_sel2<=0;
			Cal_r<=0;
			Cal_i<=0;
			B<=0;
			Load<=0;
			Save<=0;
			J<=0;
			end
		endcase
	end

endmodule
