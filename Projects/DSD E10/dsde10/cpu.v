`timescale 1ns / 1ps
`include "instr.v"

module cpu(
	input clk, start
	//,output reg [7:0] n3
);
	
//2^8 = 256
	reg [7:0] const, instr, pc;
	reg signed [7:0] n1,n2
	//;
	,n3;
	
	reg [7:0] stack [0:7];
	reg [7:0] instrmem [0:255];
	
	reg [2:0] pointer;
	reg sf, zf;//sign zero
	
	initial begin //for test
		instrmem[0]= 8'b0000_0000; //pushc
		instrmem[1]= 8'b0000_0011; //3
		instrmem[2]= 8'b0000_0000; //pushc
		instrmem[3]= 8'b0000_0010; //2
		instrmem[4]= 8'b0111_0000; //sub
		instrmem[5]= 8'b0000_0000; //pushc
		instrmem[6]= 8'b0000_0100; //4
		instrmem[7]= 8'b0110_0000; //add	
		instrmem[8]= 8'b0001_0000; //push
		instrmem[9]= 8'b0000_0001; //address1
		instrmem[10]= 8'b0100_0000; //jz
		instrmem[11]= 8'b0010_0000; //pop
		instrmem[12]= 8'b0001_0100; //20
		instrmem[13]= 8'b0000_0000; //pushc
		instrmem[14]= 8'b0000_0000; //3
		instrmem[15]= 8'b0011_0000; //jump //go to first line
	end
	
  always @(posedge clk or posedge start) begin
		if(start) begin
			pc = 0;
			sf =0;
			zf =0;
			pointer =0;
		end
		else begin
			instr = instrmem[pc];
			const = instrmem[pc+1];
			case (instr[7:4]) //4 bit opcodes
									//8 input mux
				`PUSHC: begin
					stack[pointer] = const;
					pointer = pointer+1;
					pc = pc+2; //has constant after opcode
				end
				`PUSH: begin
					stack[pointer] = instrmem[const];
					pointer = pointer+1;
					pc = pc+2;
				end
				`POP: begin
					pointer= pointer-1;
					instrmem[const] = stack[pointer];
					pc = pc+2;
				end
				`JUMP: begin
					pointer = pointer-1;
					pc = stack[pointer];
				end
				`JZ: begin
					if (zf) begin
						pointer = pointer-1;
						pc = stack[pointer];
					end
					else
						pc = pc+1;
				end
				`JS: begin
					if (sf) begin
						pointer = pointer-1;
						pc = stack[pointer];						
					end
					else 
						pc = pc+1;
				end
				`ADD: begin
					pointer=pointer-1;
					n1 = stack[pointer];//pop n1
					pointer= pointer-1;
					n2 = stack[pointer];//pop n2
					n3 = n1 + n2;
					stack[pointer] = n3; //push n3
					pointer = pointer+1;
					zf = 0;
					if(n3==0) begin
						zf = 1; //zero
					end
					sf = n3[7]; //sign
					pc = pc+1;
				end
				`SUB: begin
					pointer = pointer-1; //pop n1
					n1 = stack[pointer];
					pointer = pointer-1; //pop n2
					n2 = stack[pointer];
					n3 = n2 - n1;			//n3
					stack[pointer] = n3; //push
					pointer = pointer+1;
					zf = 0;
					if(n3==0) begin
						zf = 1; //zero
					end
					sf = n3[7]; //sign
					pc = pc+1;
				end
			endcase
		end
	end
		
endmodule
