`timescale 1ns / 1ps
module alu #(parameter n = 32)(

input [n-1:0] c,d, 
input [1:0]control,	
output reg [n-1:0] result 

    );
wire [n-1:0]add,sub,mul;
wire [(n/2)-1:0] a,aa,b,bb;

assign a = c[n-1:n/2];
assign aa = c[(n/2)-1:0];
assign b = d[n-1:n/2];
assign bb = d[(n/2)-1:0];

add_sub ad(a,aa,b,bb,0,add);
add_sub su(a,aa,b,bb,1,sub);
mult mu(a,aa,b,bb,mul);

always @* begin
		case (control)
		2'b00: result = add;
		2'b01: result = sub;
		2'b10: result = mul;
		default: result = 'dz; 
		endcase
	end
/*
assign result = (control == 2'b00) ? add : 32'dz;
assign result = (control == 2'b01) ? sub : 32'dz;
assign result = (control == 2'b10) ? mul : 32'dz;
*/
endmodule
