`timescale 1ns / 1ps

module add_sub #(parameter n = 32)(

input [(n/2)-1:0] a,aa,b,bb, 
input addsub,	
output [n-1:0] result 
    );
	 wire [(n/2)-1:0] res1,res2;

assign res1 = (addsub == 0)? a+b : a-b;
assign res2 = (addsub == 0)? aa+bb : aa-bb; 
assign result = {res1,res2};

endmodule
