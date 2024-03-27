`timescale 1ns / 1ps
module div11(
      
	 input [3:0] a,
    input [3:0] b,
	 input [3:0] c,
	 input [3:0] d,
	 output out
	
  );
	 
	 wire cin;
	 wire [4:0] sum1;
	 wire [4:0] sum2;
	 wire [4:0] sumn2;
	 wire [4:0] sum3;
	 wire [4:0] sum4;
	 wire [2:0] outs;
    wire carry1,carry2,carryn2,carry3,carry4;
	 
	 
	 
assign cin = 0;


fulladder5 f0(0,a,0,c,cin,sum1,carry1);
fulladder5 f1(0,d,0,b,carry1,sum2,carry2);

//negative 
not n0(sumn2[0],sum2[0]);
not n1(sumn2[1],sum2[1]);
not n2(sumn2[2],sum2[2]);
not n3(sumn2[3],sum2[3]);
not n4(sumn2[4],sum2[4]);
not n5(carryn2,carry2);
 
fulladder5 fn1(sumn2[4],sumn2[3:0],0,1,carry2,sum3,carry3);

fulladder5 fn2(sum1[4],sum1[3:0],sum3[4],sum3[3:0],0,sum4,carry4);

//0
div11equal eq10(0,sum4[4],sum4[3],sum4[2],sum4[1],sum4[0],0,0,0,0,0,0,outs[0]);
//11
div11equal eq11(0,sum4[4],sum4[3],sum4[2],sum4[1],sum4[0],0,0,1,0,1,1,outs[1]);
//22
div11equal eq12(0,sum4[4],sum4[3],sum4[2],sum4[1],sum4[0],0,1,0,1,1,0,outs[2]);
//33
//div11equal eq13(carry4,sum4[4],sum4[3],sum4[2],sum4[1],sum4[0],1,0,0,0,0,1,outs[3]);
or or1(out,outs[0],outs[1],outs[2]);
endmodule
