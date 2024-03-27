`timescale 1ns / 1ps

module mult#(parameter n = 32)(
		input [(n/2)-1:0] a,aa,b,bb,
		output [n-1:0] result
    );
	 wire [(n/2)-1:0] res1,res2;
//(a+aa)(b+bb) = (ab - aa*bb) + (a*bb + b*aa)i
assign res1 = (a*b)-(aa*bb);
assign res2 = (a*bb)+(b*aa);
assign result = {res1,res2};

endmodule
