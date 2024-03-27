`timescale 1ns / 1ps
 
module counter(
   output reg [1:0] n,
    input clk,
    input clr,
    input enable
);


always @(posedge clk)

    if(!clr) begin
    n <= 2'b0;
    end

    else if(enable) begin
    n <= n;
    end

    else begin
    n <= n+1;
    end

endmodule
 