`timescale 1ns / 1ps
module memtest;

	// Inputs
	reg [4:0] addr;
	reg [4:0] addr2;
	reg [31:0] write_data;
	reg rst;
	reg MemRead;
	reg MemWrite;

	// Outputs
	wire [31:0] read_data;
	wire [31:0] read_data2;
	// Instantiate the Unit Under Test (UUT)
	mem uut (
		.addr(addr), 
		.addr2(addr2), 
		.write_data(write_data), 
		.rst(rst), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.read_data(read_data),
		.read_data2(read_data2)
	);

	initial begin
		// Initialize Inputs
		addr = 0;
		addr2 = 0;
		write_data = 0;
		rst = 0;
		MemRead = 0;
		MemWrite = 0;

		// Wait 100 ns for global reset to finish
		#100;
      addr = 6;
		addr2 = 1;
		write_data = 6;
		MemRead = 0;
		MemWrite = 1;		
		#100;
      addr = 6;
		write_data = 6;
		MemRead = 1;
		MemWrite = 0;
		#100;
      addr = 0;
		write_data = 6;
		MemRead = 1;
		MemWrite = 0;
		#100;
      addr = 1;
		write_data = 6;
		MemRead = 1;
		MemWrite = 0;
		#100;
      addr = 2;
		write_data = 6;
		MemRead = 1;
		MemWrite = 0;
		// Add stimulus here

	end
endmodule

