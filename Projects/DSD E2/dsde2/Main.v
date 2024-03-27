`timescale 1ns / 1ps

module main(

	input ent,ext,clk,clr,
	output reg open,close
	
    );
	 
	 reg in,out;
	 wire [3:0] n;
	 wire [1:0] t;
	 reg u,enable ;
	 
	updown numbers(n,u,clk,clr,enable);
	counter tcount(t,clk,clr,enable); 

always @( clk)begin

	open <= 0;
	in <= 0;
	out <=0; 
	 
	 if (ent) begin
		if (n < 10) begin
			if (t < 4) begin
				in <= 1;
				u <=1;
				enable <= 1 ;
				open <= 1;
			end	
		end
	end

	 if (n == 0) begin
		close <= 0;
	 end 
	
	 else begin
		close <= 1;
	 end
	 
	  if(ext) begin 
		out <= 1;
		u <=0;
		enable <= 1 ;
		close <= 1;
		if(in==out)begin
		enable <=0;
		end
	 end 
	 //enable <= (in ^ out) ;
/*	 
	 if(in)begin
		u<=1;
	 end
	 
	 if(out)begin
		u<=0;
	 end
	 
	 
	 u<= in;
	 
	 */
	 

end

	

endmodule
