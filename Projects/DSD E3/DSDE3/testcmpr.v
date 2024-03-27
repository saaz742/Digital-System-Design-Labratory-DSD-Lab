`timescale 1ns / 1ps

module testcmpr;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire alessb;
	wire aequalb;
	wire agreaterb;
	integer i;
	
	// Instantiate the Unit Under Test (UUT)
	cmpr uut (
		.a(a), 
		.b(b),  
		.alessb(alessb), 
		.aequalb(aequalb), 
		.agreaterb(agreaterb)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		for(i=0; i<9; i = i+1)begin
		#100
		a = $random;
		b = $random;
		end
        
		// Add stimulus here

	end
      
endmodule

