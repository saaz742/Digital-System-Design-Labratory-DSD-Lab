`timescale 1ns / 1ps

module control #(parameter n =32)(
	input [4:0] addr1,addr2,wraddr,
	input [1:0] alucont,
	input clk,rst,
	output reg [n-1:0]result
    );

wire [n-1:0] res1,res2;
wire [n-1:0] prv;
reg [n-1:0] res3;
reg [5:0] addrs1,addrs2;
reg re,wr;

//instr = addr1(5bit) addr2(5bit) wraddr(5bit) alucontrol(2bit)
  
reg state;

 initial begin
	state = 0;
 end

always @(posedge clk) begin
		if(state == 0) begin
				state <= 1;
				re <= 1;
				wr <= 0;
				addrs1 <= addr1;
				addrs2 <= addr2;
				
		end
		else begin
				re <=0;
				wr <=1;
				addrs1 <= wraddr;
				res3 <= prv;	
				result <= res3;	
				state <= 0;
		end

end

mem rm2(addrs1,addrs2,res3,rst,re,wr,res1,res2);
alu aluuu(res1,res2, alucont, prv);

endmodule
