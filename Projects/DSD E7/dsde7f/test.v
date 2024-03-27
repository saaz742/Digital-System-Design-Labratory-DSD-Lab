`timescale 1ns / 1ps

module test;
	reg clk;
	reg start;
	reg rst;
	reg [7:0] data;
	
	wire tx;
	wire [7:0] out;
	wire par;
 
	transmit t(.clk(clk), .data(data), .start(start), .tx(tx));
	receive r (.clk(clk), .rx(tx), .rst(rst), .out(out), .par(par));

	initial begin
		clk = 0;
		rst = 0;
		 data = 8'b01001100; // par =1
		 start = 0;
		 #20
		 start = 1;
		 #20
		 start = 0;
		 #400
		 rst = 1;
		 #20 
		 rst = 0;
		 #20
		 data = 8'b01001110;
		 start = 0;
		 #20
		 start = 1;
		 #20
		 start = 0;
	end 
	always #10 clk = ~clk;

endmodule
