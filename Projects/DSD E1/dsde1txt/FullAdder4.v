`timescale 1ns / 1ps

module fulladder5(

	 input a4;
    input [3:0] a,
    input [3:0] b,
	 input b4;
	 input cin;
    output [4:0] sum,
    output carry
    );
//	wire cin;
	
//	assign cin = 1'b0;
	SingleStage s0( .a( a[0] ), .b( b[0]), .cin( cin ), .s( sum[0]), .cout( ripple0 ) );
	SingleStage s1( .a( a[1] ), .b( b[1]), .cin( ripple0 ), .s( sum[1]), .cout( ripple1 ) );
	SingleStage s2( .a( a[2] ), .b( b[2]), .cin( ripple1 ), .s( sum[2]), .cout( ripple2 ) );
	SingleStage s3( .a( a[3] ), .b( b[3]), .cin( ripple2 ), .s( sum[3]), .cout( ripple3 ) );
   SingleStage s3( .a( a4 ), .b( b4 ), .cin( ripple3 ), .s( sum[4]), .cout( carry ) );
endmodule