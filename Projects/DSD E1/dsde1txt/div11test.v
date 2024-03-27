`timescale 1ns / 1ps


module div11test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg [3:0] c;
	reg [3:0] d;
	
  	wire out;
	
	// Instantiate the Unit Under Test (UUT)
	div11 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d),
		.out(out)
		
	);
	

	initial begin
		// Initialize Inputs
		a =1001;
		b = 1001;
		c =1001;
		d =1001;

		// Wait 100 ns for global reset to finish
		#100;
     	a = 1001;
		b = 1001;
		c = 1001;
		d = 1001;
		// Add stimulus here

	end
      
endmodule

