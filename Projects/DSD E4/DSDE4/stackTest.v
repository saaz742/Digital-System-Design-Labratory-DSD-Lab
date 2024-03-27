`timescale 1ns / 1ps

module stackTest;

	// Inputs
	reg clk;
	reg rstN;
	reg [3:0] data_In;
	reg push;
	reg pop;

	// Outputs
	wire [3:0] data_Out;
	wire full;
	wire empty;
 
	// Instantiate the Unit Under Test (UUT)
	stack uut (
		.clk(clk), 
		.rstN(rstN), 
		.data_In(data_In), 
		.push(push), 
		.pop(pop), 
		.data_Out(data_Out), 
		.full(full), 
		.empty(empty)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rstN = 0;
		data_In = 0;
		push = 0;
		pop = 0;

// push 2, 1, 2, 7, 6, 6, 3, 4//full
//pop 3
//rest 
//	push 1,5
// pop 5,1

		#50;
      data_In = 2;
		push = 1;		
		#50
		data_In = 1;
		#50
		data_In = 2;
		#50
		data_In = 7;
		#50
		data_In = 6;
		#50
		data_In = 9;
		#50
		data_In = 3;
		#50
		data_In = 4;
		#50
		push =0;		
		pop = 1;		
		#50
		pop =0;
		#50
		rstN =1;	
		#50
		rstN =0;	
		#50
		push = 1;
		data_In = 1;
		#50
		data_In = 5;
		#50
		push = 0; 
		pop =1;
	end
	always clk = #25 ~clk;
      
endmodule

