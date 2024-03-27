`timescale 1ns / 1ps

module add_subtest;

	// Inputs
	reg [15:0] a,aa,b,bb;
	reg addsub;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	add_sub uut (
		.a(a), 
		.aa(aa), 
		.bb(bb), 
		.b(b), 
		.addsub(addsub), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		aa = 0;
		bb = 0;
		b = 0;
		addsub = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 4;
		aa = 1;
		bb = 1;
		b = 2;
		addsub = 0;
		#100;
		a = 4;
		aa = 1;
		bb = 1;
		b = 2;
		addsub = 1;
        
		// Add stimulus here

	end
      
endmodule

