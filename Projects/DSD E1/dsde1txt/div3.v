module div3(
   
	 input [3:0] a,
    input [3:0] b,
	 input [3:0] c,
	 input [3:0] d,
  
	 output out
    );

	 wire [4:0] sum1;
	 wire [4:0] sum2;
	 wire [4:0] sum3;
	 wire [12:0] outs;
    wire carry1,carry2, carry3;
	 

fulladder5 f0(0,a,0,b,0,sum1,carry1);
fulladder5 f1(0,c,0,d,carry1,sum2,carry2);
fulladder5 f2(sum1[4],sum1[3:0],sum2[4],sum2[3:0],carry2,sum3,carry3);

//0 3 6 9 12 15 18 21 24 27 30 33 36
div3equal div13(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,0,0,0,0,0,outs[0]);
div3equal div1(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,0,0,0,1,1,outs[12]);
div3equal div2(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,0,0,1,1,0,outs[1]);
div3equal div3(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,0,1,0,0,1,outs[2]);

div3equal div4(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,0,1,1,0,0,outs[3]);
div3equal div5(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,0,1,1,1,1,outs[4]);
div3equal div6(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,1,0,0,1,0,outs[5]);

div3equal div7(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,1,0,1,0,1,outs[6]);
div3equal div8(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,1,1,0,0,0,outs[7]);
div3equal div9(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,1,1,0,1,1,outs[8]);
div3equal div10(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],0,1,1,1,1,0,outs[9]);

div3equal div11(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],1,0,0,0,0,1,outs[10]);
div3equal div12(carry3,sum3[4],sum3[3],sum3[2],sum3[1],sum3[0],1,0,0,1,0,0,outs[11]);

or or1(out,outs[0],outs[1],outs[2],outs[3],outs[4],outs[5],outs[6],outs[7],outs[8],outs[9],outs[10],outs[11],outs[12]);
endmodule
