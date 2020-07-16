`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:19:25 11/19/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	 input [31:0] IR,
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALUop,
    output reg [31:0] result
    );
	
	reg [31:0] i,j;
	always @(*)begin
		case(ALUop)
		0:result<=A+B;
		1:result<=A-B;
		2:result<=A|B;
		3:result<=A;
		4:begin
			result=B;
			for(i=0;i<IR[10:6];i=i+1)
				result={result[30:0],1'b0};
		end
		5:begin
			result=B;
			for(i=0;i<IR[10:6];i=i+1)
				result={1'b0,result[31:1]};
		end
		6:begin
			result=B;
			for(i=0;i<IR[10:6];i=i+1)
				result={result[31],result[31:1]};
		end
		7:begin
			result=B;
			for(i=0;i<A[4:0];i=i+1)
				result={result[30:0],1'b0};
		end
		8:begin
			result=B;
			for(i=0;i<A[4:0];i=i+1)
				result={1'b0,result[31:1]};
		end
		9:begin
			result=B;
			for(i=0;i<A[4:0];i=i+1)
				result={result[31],result[31:1]};
		end
		10:result<=A&B;
		11:result<=A^B;
		12:result<=~(A|B);
		13:result<=($signed(A)<$signed(B))?1:0;
		14:result<=({1'b0,A}<{1'b0,B})?1:0;
		endcase
	end

endmodule
