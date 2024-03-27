`timescale 1ns / 1ps

module booth
	 #(parameter n = 4)(
    input [n-1:0] a,
    input [n-1:0] b,
	 input clk,
    input rst,
    output reg [2*n-1:0] c
    );

reg q_1;
reg [n-1:0] q;
reg [n-1:0] m;
reg [n-1:0] res;
reg [n-1:0] cnt;
reg signed [2*n:0] result;
reg [n-1:0] shf;
// controller
reg start;
reg s;
reg s0;
reg s1;
reg s2;
reg proc;

integer i;


//controller
always @(posedge clk) begin
	 start = 0;
	 s = 0;
	 s0 = 0;
	 s1 = 0;
	 s2 = 0;
    if (rst) begin
        start = 1;
        proc = 1;
    end 
	 else if (proc) begin
		   if (q[0] == 0)begin
				if(q_1 == 1) begin
					s0  = 1;
					s = 1;
				end
				else begin
					s2 =1;
					s = 1;
				end
        end 
		  else if (q[0] == 1)begin
				if(q_1 == 0) begin
					s1  = 1;          
					s = 1;
				end
				else begin
					s2 =1;
					s = 1;
				end
        end
		 else	if(cnt ==n) begin
			proc =0;
		 end
    end
end

// Data Path
always @* begin
    if (start) begin
        res = 0;
		  cnt = 0;
        q_1 = 0;
        m = a;
        q = b;
    end 
	 else if (s) begin
		 if (s0 ) begin
		  	shf = 1;
         res = res + m;
        end
        else if (s1) begin
		  	shf = 1;
         res = res - m;
        end 
		  else if (s2) begin
           shf = 1; 
				i = 0;
				while (cnt != n-1 && i < n - 2 && i < n - cnt  && q[i] == q[i+1]) begin
					 shf = shf + 1;
					 i = i + 1;
				end
        end
		  cnt = cnt + shf;
		  result[0] = q_1;
        result[n:1] = q;
        result[2*n:n+1] = res;
        result = result >>> shf;
		  q_1 = result[0];
		  q = result[n:1];
        res = result[2*n:n+1];      		  
    end
	    if (cnt == n)begin
				c[n-1:0] = q[n-1:0];
				for (i=0; i <= n-1; i = i+1)begin
					c[i+n] = res[i]; 
				end 
			end
end
endmodule
