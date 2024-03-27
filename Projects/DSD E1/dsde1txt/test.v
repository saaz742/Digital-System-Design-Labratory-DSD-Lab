`timescale 1ns / 1ps

module test;

	 reg [3:0] a;
    reg [3:0] b;
	 reg [3:0] c;
	 reg [3:0] d;
	 wire result;
	// wire out1;
	// wire out2;
	 
	// Instantiate the Unit Under Test (UUT)
	div uut (
	.a(a),
	.b(b),
	.c(c),
	.d(d),
	.result(result)
	//,.out1(out1),
	//.out2(out2)
	);

	initial begin
	a=3;
	b=3;
	c=0;
	d=0;
	
	#100
	
	a=3;
	b=3;
	c=0;
	d=0;
	/*
	 a[0] = 1; a[1]=0; a[2]=0; a[3]=1;
	 b[0] = 1; b[1]=0; b[2]=0; b[3]=1;
	 c[0] = 1; c[1]=0; c[2]=0; c[3]=1;
	 d[0] = 1; d[1]=0; d[2]=0; d[3]=1;
	 
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
	 a[0] = 1; a[1]=0; a[2]=0; a[3]=1;
	 #10
	 b[0] = 1; b[1]=0; b[2]=0; b[3]=1;
	 #10
	 c[0] = 1; c[1]=0; c[2]=0; c[3]=1;
	 #10
	 d[0] = 1; d[1]=0; d[2]=0; d[3]=1;
	 */
	
		// Add stimulus here

	end
      
endmodule

