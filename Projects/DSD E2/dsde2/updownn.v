`timescale 1ns / 1ps
 
module updown(
         output reg [3:0] out,
         
			input u,clk,clt,enable
          );

always @(posedge clk)
	
	if(!clk) begin
	out<= 4'b0;
	end
	
	else if(!enable) begin
	out <=out;
	end
	
	else if(u) begin
	out <= out+1;
	end
	
	else begin
	out <= out -1;
	 end

 
  endmodule

