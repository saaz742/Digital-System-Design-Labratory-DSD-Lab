`timescale 1ns / 1ps

module test;

	// Inputs
	reg [3:0] wraddr;
	reg [15:0] value;
	reg [15:0] value2;
	reg wr;

	// Outputs
	wire [15:0] addr;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.wraddr(wraddr), 
		.value(value), 
		.value2(value2), 
		.wr(wr), 
		.addr(addr)
	);

	initial begin
		// Initialize Inputs
		wraddr = 0;
		value = 0;
		value2 = 0;
		wr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		wraddr = 10; //x1101xxx
		value = 16'b0000000001101000;
		value2 = 16'b0000000010000111;
		wr=1;
	   #100;
		wraddr = 11; //0110xxxx
		value = 16'b0000000001100000;
		value2 = 16'b0000000000001111;
		wr=1;
		#100;
		wraddr = 12; //0111xxxx
		value = 16'b0000000001110000;
		value2 = 16'b0000000000001111;
		wr=1;
		#100; //01101110
		value = 16'b00000000_01101110;
		value2 = 16'b00000000_00000000;
		wr=0;

	end
      
endmodule

