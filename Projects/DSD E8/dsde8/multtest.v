`timescale 1ns / 1ps
module multtest;

	// Inputs
	reg [15:0] a,aa,b,bb;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	mult uut (
		.a(a), 
		.aa(aa), 
		.b(b), 
		.bb(bb), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		aa = 0;
		b = 0;
		bb = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 4;
		aa = 1;
		bb = 1;
		b = 2;
		#100;
		a = 4;
		aa = 1;
		bb = 1;
		b = 2;
        
		// Add stimulus here

	end
      
endmodule

