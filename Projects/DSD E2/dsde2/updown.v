`timescale 1ns / 1ps
 
module updown(

         output reg [3:0] n,

         input u,clk,clr,enable

          );

always @(posedge clk)

    if(!clr) begin
    n <= 4'b0;
    end

    else if(!enable) begin
    n <= n;
    end

    else if(u) begin
    n <= n+1;
    end

    else begin
    n <= n-1;
     end

 
  endmodule
