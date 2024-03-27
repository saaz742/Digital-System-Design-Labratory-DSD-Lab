`timescale 1ns / 1ps

module testserialcmpr;

	// Inputs
	reg a;
	reg b;
	reg reset;
	reg clk;

	// Outputs
	wire alessb;
	wire aequalb;
	wire agreatb;
	integer i;

	// Instantiate the Unit Under Test (UUT)
	serialcmpr uut (
		.a(a), 
		.b(b), 
		.reset(reset), 
		.clk(clk), 
		.alessb(alessb), 
		.aequalb(aequalb), 
		.agreatb(agreatb)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		reset = 1;
		clk = 0;
		#1
      a = 1;
		b = 0;
		#100
		reset = 0;
      a = 0; 
		b = 0;
		#100
		reset = 1;
      a = 0; 
		b = 0;				
		#100
      a = 1;
		b = 1;
		#100
      a = 0;
		b = 0;	 
		
		for(i=0; i<20; i = i+1)begin
		#100
		a = $random;
		b = $random;
		end	
				
	end
      always clk = #10 ~clk;
endmodule

