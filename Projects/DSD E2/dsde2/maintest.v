`timescale 1ns / 1ps


module maintest;

	// Inputs
	reg ent;
	reg ext;
	reg clk;
	reg clr;

	// Outputs
	wire open;
	wire close;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.open(open), 
		.close(close), 
		.ent(ent), 
		.ext(ext), 
		.clk(clk), 
		.clr(clr)
	);
 
	initial begin
		// Initialize Inputs
		ent = 0;
		ext = 0;
		clr = 0;
		clk =0;

		// Wait 100 ns for global reset to finish
		#100;
		
        

		// Add stimulus here

	end
      
		always clk = #10 ~clk;
endmodule

