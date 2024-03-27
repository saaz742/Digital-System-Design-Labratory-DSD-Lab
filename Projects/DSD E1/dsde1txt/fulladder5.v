`timescale 1ns / 1ps

module fulladder5(

	 input a4,
    input [3:0] a,
	 input b4,
    input [3:0] b,
	 input cin,
    output [4:0] sum,
    output carry
    );

	fulladder s0( .a( a[0] ), .b( b[0]), .cin( cin ), .s( sum[0]), .cout( ripple0 ) );
	fulladder s1( .a( a[1] ), .b( b[1]), .cin( ripple0 ), .s( sum[1]), .cout( ripple1 ) );
	fulladder s2( .a( a[2] ), .b( b[2]), .cin( ripple1 ), .s( sum[2]), .cout( ripple2 ) );
	fulladder s3( .a( a[3] ), .b( b[3]), .cin( ripple2 ), .s( sum[3]), .cout( ripple3 ) );
   fulladder s4( .a( a4 ), .b( b4 ), .cin( ripple3 ), .s( sum[4]), .cout( carry ) );
endmodule