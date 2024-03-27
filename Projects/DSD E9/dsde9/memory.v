`timescale 1ns / 1ps

module memory(
	 input [3:0] wraddr,
    input [15:0] value, value2,
    input wr,
    output reg [15:0] addr
	 );

    reg [15:0] mem [0:15];
    reg [15:0] mem2 [0:15];//if value is x store 1 in this memory
    integer i, j;
	 
	 initial begin //test
		for (i = 0; i < 16; i = i+1) begin
			 mem[i] = i;
			 mem2[i] = 0; 
		end
	 end

    always @* begin
			if (wr) begin
				 mem[wraddr] = value;
				 mem2[wraddr] = value2; 
			end
			else begin
				//for(i = 0; i <16; i = i+1) begin
				//   addr[i] = 1; 
				//end
            for (i = 0; i < 16; i = i+1) begin
					addr[i] = 1; 				
					for (j = 0; j < 16; j = j+1) begin
                    if (!mem2[i][j]) begin //if value isn't x
								if(mem[i][j] != value[j]) begin  //if values aren't equal
									 addr[i] = 0;
								end
						 end
					end
				end
			end
	end
endmodule

