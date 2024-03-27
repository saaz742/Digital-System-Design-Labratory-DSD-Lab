`timescale 1ns / 1ps

module test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg clk;
	reg rst;

	// Outputs
	wire [7:0] c;

	// Instantiate the Unit Under Test (UUT)
	booth uut (
		.a(a), 
		.b(b), 
		.clk(clk), 
		.rst(rst), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		clk = 0;
		rst =0;
		#30
		a = 2; //3 clk
		b = 7;
		rst =1;
		#40
		rst = 0;
		#300
		a = 3;  //4 clk
		b = 5;
		rst =1;
		#40
		rst =0;
		#200
		a = 6;  //3clk
		b = 4;
		rst = 1;
		#40
		rst =0;
 

	end
      always #20 clk = ~clk;
      
endmodule

