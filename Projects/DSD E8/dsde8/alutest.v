`timescale 1ns / 1ps
module alutest;

	// Inputs
	reg [31:0] c,d;
	reg [1:0] control;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.c(c), 
		.d(d), 
		.control(control), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		c = 0;
		d = 0;
		control = 0;

		// Wait 100 ns for global reset to finish
		#100;
		c = 4;
		d = 3;
		control = 1;
		#100;
		c = 4;
		d = 3;
		control = 0;
		#100;
		c = 4;
		d = 3;
		control = 2;
        
		// Add stimulus here

	end
      
endmodule

