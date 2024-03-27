module main(

	input ent,ext,clk,
	//clr,
	output reg open,close
	
    );
	 
	 //reg in,out;
	 reg [3:0] n;
	 reg [1:0] t;

initial begin

	n = 4'b0;
	t = 2'b0;
	
end

always @( clk)begin

	open <= 0;
	//in <= 0;
	//out <=0;
	n<=n;	
	 
	 if (ent) begin
		if (n < 10) begin
			//if (t < 4) begin
			    n <= n+1;
				 t <= t+1;
//				 in< = 1;
				open <= 1;
		//	end	
		end
	end

	 if (n == 0) begin
		close <= 0;
	 end 
	
	 else begin
		close <= 1;
	 end
	 
	 if(ext) begin 
	  	close <= 1;
		if(n!=0)begin
			n <= n-1;
		end
		//out <= 1;
	 end
	 
	 if(t==1) begin
		t<=2;
	 end
	 
	 if (t == 3) begin
	 
		//in <=1;
		open <= 0;
		t <= 2'b0;
	end
	 
	// if(in)begin
		// u<=1;
	// end
	 
	// if(out)begin
		// u<=0;
	// end
	 
	// enable <= (in & out) ;

end

	

endmodule
