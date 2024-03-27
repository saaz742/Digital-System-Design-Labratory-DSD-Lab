`timescale 1ns / 1ps

module div3test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg [3:0] c;
	reg [3:0] d;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	div3 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0000;
		b = 0;
		c = 0;
		d = 0;


		// Wait 100 ns for global reset to finish
		#100;
      a = 0000;
		b = 0;
		c = 0;
		d = 0;
		// Add stimulus here

	end
      
endmodule

