`timescale 1ns / 1ps

module stack
#(parameter w = 4 , h = 3 , l=7)(
input clk,
input rstN, //reset
input [3:0]data_In,
input push,
input pop,

output reg [3:0]data_Out,
output reg full,
output reg empty
    );

reg [h-1 :0] level;
reg [w-1 :0] s [0 : l-1];

initial begin
	level <= 0;
	full <= 0;
	empty <= 0;
end 

always @(posedge clk or posedge rstN) begin

	if(rstN == 1)begin
		level <= 0;	
		empty <= 0;
		full <=0;
	end
	
	else begin
	if(push == 1)begin
		if(level != l) begin
			level <= level + 1;
			s[level] <= data_In;
			empty <= 1;
				if(level == l-1)begin
					full <= 1;
				end	
		end		
	end
	
	else if(pop == 1)begin
		if(level != 0)begin
			level <= level - 1;
			data_Out <= s[level - 1];
			full <= 0;
				if(level == 1)begin
					empty <= 0;
				end
		end		
	end
	end
	
end

endmodule
