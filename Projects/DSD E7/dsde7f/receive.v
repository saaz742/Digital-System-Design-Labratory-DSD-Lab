`timescale 1ns / 1ps
`include "states.v"

module receive(
    input clk,
    input rx,
	 input rst,
	 
    output reg [7:0] out,
	 output reg par
   
);
//1 fard => par 1
// 1 joz => par 0
reg [1:0] state;
reg [3:0] cnt;
reg [1:0] baud;
reg [1:0] stop;
reg [7:0] data;

initial begin
    state = `IDLE;
	 out = 0;
	 data = 0;
	 stop = 0;
end

always @(posedge clk or posedge rst or negedge rx) begin
	 if (rst) begin 
		 data = 0;
		 stop = 0;
		 state = `IDLE;
	 end 
	  if (stop != 0) begin 
		 stop = stop - 1;
	 end 
	 else if (clk) begin
		if(state == `NEXT) begin
			  if (baud == 2) begin
					data = data << 1;
					data[0] = rx;
					cnt = cnt + 1 ;
					baud = 0;
				end
        end
        baud = baud + 1;
        if (cnt == 9) begin
            state = `IDLE;
				par = 1;
				if (data[7]==(data[6]^data[5]^data[4]^data[3]^data[2]^data[1]^data[0])) begin
					par = 0;
				end
				out = data;
				stop = 2;
        end
    end 
	 else if (!rx && !stop)begin
			if(state == `IDLE) begin
				  cnt = 0;
				  baud = 0;
				  state = `NEXT;
		  end
    end
end

endmodule
