`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:43:34 09/11/2019
// Design Name:   trial
// Module Name:   D:/study/DDandCA/Verilog/trial/jk.v
// Project Name:  trial
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trial
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module jk;

	// Inputs
	reg clk;
	reg rstn;

	// Outputs
	wire [3:0] cnt;

	// Instantiate the Unit Under Test (UUT)
	trial uut (
		.clk(clk), 
		.rstn(rstn), 
		.cnt(cnt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstn = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

