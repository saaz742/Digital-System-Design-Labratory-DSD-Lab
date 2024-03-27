`timescale 1ns / 1ps

module div3eqtest;

	// Inputs
	reg a5;
	reg a4;
	reg a3;
	reg a2;
	reg a1;
	reg a0;
	reg b5;
	reg b4;
	reg b3;
	reg b2;
	reg b1;
	reg b0;

	// Outputs
	wire same;
	//wire [5:0] c;

	// Instantiate the Unit Under Test (UUT)
	div3equal uut (
		.a5(a5), 
		.a4(a4), 
		.a3(a3), 
		.a2(a2), 
		.a1(a1), 
		.a0(a0), 
		.b5(b5), 
		.b4(b4), 
		.b3(b3), 
		.b2(b2), 
		.b1(b1), 
		.b0(b0), 
		.same(same)
		//,.c(c)
	);

	initial begin
		// Initialize Inputs
		a5 = 0;
		a4 = 0;
		a3 = 1;
		a2 = 1;
		a1 = 1;
		a0 = 1;
		b5 = 0;
		b4 = 0;
		b3 = 1;
		b2 = 1;
		b1 = 1;
		b0 = 1;

		// Wait 100 ns for global reset to finish
		#100;
 	a5 = 0;
		a4 = 0;
		a3 = 1;
		a2 = 1;
		a1 = 1;
		a0 = 1;
		b5 = 0;
		b4 = 0;
		b3 = 1;
		b2 = 1;
		b1 = 1;
		b0 = 1;
		// Add stimulus here

	end
      
endmodule

