`timescale 1ns / 1ps

module controltest;

	// Inputs
	reg [4:0] addr1;
	reg [4:0] addr2;
	reg [4:0] wraddr;
	reg [1:0] alucont;
	reg clk;
	reg rst;

	// Outputs
	wire [31:0]result;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.addr1(addr1),  
		.addr2(addr2), 
		.wraddr(wraddr), 
		.alucont(alucont), 
		.clk(clk), 
		.rst(rst), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
      addr1 = 2;
		addr2 = 1;
		wraddr = 10;
		alucont = 0;
		#100;
      addr1 = 2;
		addr2 = 1;
		wraddr = 4;
		alucont = 1;
		#100;
      addr1 = 30;
		addr2 = 1;
		wraddr = 5;
		alucont = 0;
		#100;
      addr1 = 2;
		addr2 = 2;
		wraddr = 4;
		alucont = 2;
		#100;
      addr1 = 3;
		addr2 = 1;
		wraddr = 4;
		alucont = 0;
		#100;
      addr1 = 10; //az meghdari k bayad minevest estefade miknonim
		addr2 = 1;
		wraddr = 11;
		alucont = 0;
	
	
	end
      always clk = #10 ~clk;
endmodule

