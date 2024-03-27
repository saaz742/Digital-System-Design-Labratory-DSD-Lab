`timescale 1ns / 1ps

module updowntest;

	// Inputs
	reg u;
	reg clk;
	reg clr;
	reg enable;

	// Outputs
	wire [3:0] n; 

	// Instantiate the Unit Under Test (UUT)
	updown uut (
		.n(n), 
		.u(u), 
		.clk(clk), 
		.clr(clr), 
		.enable(enable)
	);

	initial begin
		// Initialize Inputs
		u = 0;
		clk = 0;
		clr = 0;
		enable = 0;

		// Wait 100 ns for global reset to finish
			
		#100;
			
			
			clr = 1;
			
			#20
			enable = 1; 
			
			#20
			
			u = 1; 
		// Add stimulus here

	end
      
		always clk = #10 ~clk;
        
		// Add stimulus here

      
endmodule

