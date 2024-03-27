`timescale 1ns / 1ps

module test;

	// Inputs
	reg clk;
	reg start;

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk(clk),
		.start(start)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		start =0;

		// Wait 100 ns for global reset to finish
		#100;
		start =1;
		#10
		start=0;
		
		#500
		start =1;
        
		// Add stimulus here

	end
      always clk = #20 ~clk; 
endmodule

