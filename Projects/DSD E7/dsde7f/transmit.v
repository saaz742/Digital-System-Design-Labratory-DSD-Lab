`timescale 1ns / 1ps

`include "states.v"

module transmit(
    input clk,
    input [7:0] data,
    input start,
	// input stop, niaz nabood
    output reg tx
); 

reg [1:0] state;
reg [3:0] cnt;
reg [1:0] baud;

initial begin
    tx = 1;
	 state = `IDLE;
end

always @(posedge clk or posedge start) begin
    if (clk)begin
		 if(state == `NEXT) begin
			  if (baud == 2) begin
					tx = data >> (7 - cnt);
					cnt = cnt + 1;
					baud = 0;
			  end
		  end
        baud = baud + 1;
        if (cnt == 9) begin
            state = `IDLE;
				tx = 1;
        end
    end 
	 else if (start) begin
			if(state == `IDLE) begin 
			 state = `NEXT;
				  cnt = 0;
				  baud = 0;
				  tx = 0;
			  end
    end
end

endmodule
