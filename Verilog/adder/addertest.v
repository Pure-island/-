`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:32:32 09/14/2019
// Design Name:   adder
// Module Name:   D:/study/DDandCA/Verilog/adder/addertest.v
// Project Name:  adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module addertest;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg Clk;
	reg En;

	// Outputs
	wire [3:0] Sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
reg Cin;

initial begin

A = 0; B = 0; Cin = 0;

$monitor("%04dns monitor: A=%d, B=%d, Cin=%d, Sum=%d, Overflow=%d", $time, A, B, Cin, Sum, Overflow);

#1000 $finish;

end



always #50 Cin = Cin + 1;

always #100 A = A + 1;

always #200 B = B + 1;

endmodule

