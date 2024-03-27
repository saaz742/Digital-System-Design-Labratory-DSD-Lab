`timescale 1ns / 1ps

module subtractor(

input a4, b4,

output c4, d4);

wire x;

xor u1(c4,a4, b4); // XOR gate instance u1; a4, b4 will act as input and c4 will be the output

and u2(d4,x, b4); // AND gate instance u2; x, b4 will act as input and d4 will be the output

not u3(x,a4); // NOT gate instance u3; a4 will act as input and x will be the output

endmodule