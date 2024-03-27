`timescale 1ns / 1ps

module div(

	 input [3:0] a,
    input [3:0] b,
	 input [3:0] c,
	 input [3:0] d, 
	 output result
	// output out1,out2
    );
	 
	 wire out1;
	 wire out2;
	
div3 d1(a,b,c,d,out1);	
div11 d2(a,b,c,d,out2);

and(result,out1,out2);
 
//9999 = 9*4 = 36
 
endmodule