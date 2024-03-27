
`timescale 1ns / 1ps

module div3equal(
	
	 input a5,
	 input a4,a3,a2,a1,a0,
	 input b5,b4,b3,b2,b1,b0, 
	 output same
	// output [5:0] c
    );
	 wire [5:0] c;

xnor x1(c[0],a0,b0);
xnor x2(c[1],a1,b1);
xnor x3(c[2],a2,b2);
xnor x4(c[3],a3,b3);
xnor x5(c[4],a4,b4);
xnor x6(c[5],a5,b5);

and and1(same,c[0],c[1],c[2],c[3],c[4],c[5]);

endmodule
