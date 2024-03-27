`timescale 1ns / 1ps


module fultest;

	// Inputs
	reg a4;
	reg [3:0] a;
	reg [3:0] b;
	reg b4;
	reg cin;

	// Outputs
	wire [4:0] sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	fulladder5 uut (
		.a4(a4), 
		.a(a), 
		.b(b), 
		.b4(b4), 
		.cin(cin), 
		.sum(sum), 
		.carry(carry)
	);

	initial begin
		// Initialize Inputs
		a4 = 0;
		a = 1001;
		b = 1001;
		b4 = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
      a4 = 0;
		a = 1001;
		b = 1001;
		b4 = 0;
		cin = 0; 
		// Add stimulus here

	end
      
endmodule

