`timescale 1ns / 1ps

module cmpr4(

input [3:0]a, b,

output alessb, aequalb, agreaterb
    );

wire [3:0] alessbreg;
wire [3:0] aequalbreg;
wire [3:0] agreaterbreg;

cmpr c0(alessbreg[0], aequalbreg[0], agreaterbreg[0], a[0],b[0]);
cmpr c1(alessbreg[1], aequalbreg[1], agreaterbreg[1], a[1],b[1]);
cmpr c2(alessbreg[2], aequalbreg[2], agreaterbreg[2], a[2],b[2]);
cmpr c3(alessbreg[3], aequalbreg[3], agreaterbreg[3], a[3],b[3]);

assign aequalb = (aequalbreg[0] & aequalbreg[1] & aequalbreg[2] & aequalbreg[3]);
assign agreaterb = agreaterbreg[3] | (agreaterbreg[2] & aequalbreg[3] ) | (agreaterbreg[1] & aequalbreg[3] & aequalbreg[2]) |(agreaterbreg[0] & aequalbreg[3] & aequalbreg[2] & aequalbreg[1]);
assign alessb = ~aequalb & ~agreaterb;

endmodule
