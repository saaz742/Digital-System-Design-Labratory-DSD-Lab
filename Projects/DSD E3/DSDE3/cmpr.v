`timescale 1ns / 1ps

module cmpr(

output alessb, aequalb, agreaterb,
input a,b
    );

xnor ul(aequalb,a,b);

assign alessb = ~a & b;

assign agreaterb = ~b & a;
endmodule
