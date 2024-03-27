`timescale 1ns / 1ps

module Main(
	 input [3:0] a,
    input [3:0] b,
	 input [3:0] c,
	 input [3:0] d,
	  
	  output result;

    );
	 
	 wire out1;
	 wire out2;
	
div3(a,b,c,d,out1);	
div3(a,b,c,d,out2);
and(result,out1,out2);

endmodule
