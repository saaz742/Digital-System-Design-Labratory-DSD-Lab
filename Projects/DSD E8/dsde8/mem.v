`timescale 1ns / 1ps

module mem #(parameter n = 32)(
	input [4:0] addr,addr2,
	input [n-1:0] write_data,
	input rst, MemRead, MemWrite,
	output [n-1:0] read_data,read_data2
	);
	reg [n-1:0] Memory [31:0];
	integer k;

	
	//meghdar avalie baraye test krdn
	initial begin
		Memory[0] = 1;
		Memory[1] = 2;
		Memory[2] = 3; 
		Memory[3] = 4;
		Memory[30] = 60;
	end
	
	assign read_data = (MemRead==1) ? Memory[addr] : 'bx;
	assign read_data2 = (MemRead==1) ? Memory[addr2] : 'bx;
	
	always @* begin
		if (rst == 1) begin
				for (k=0; k<32; k=k+1) begin
					Memory[k] = 0;
				end
			end
		else if (MemWrite==1) Memory[addr] = write_data;
	end
endmodule

