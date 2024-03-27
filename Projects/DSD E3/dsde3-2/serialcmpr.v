`timescale 1ns / 1ps

module serialcmpr(

input a,b,
input reset,
input clk,
output alessb, aequalb, agreatb

    );
//greater
wire x,y,m,z,og,ogn;
//egual
wire x1,y1,m1,z1,oe,oen;
//less
wire x2,y2,m2,z2,ol,oln;
//current
wire e,g,l;

//check current bit
//assign e = (a == b);
//assign l = (a < b) ? 1'b1 : 1'b0;
//assign g = (a > b) ? 1'b1 : 1'b0;

xnor ul(e,a,b);
assign l = ~a & b;
assign g = ~b & a;

// dff for greater
assign m = ~x | ~z;
assign z = ~clk | ~reset | ~m; 
assign y = ~clk | ~z | ~x; 
assign x = ~reset | ~agreatb | ~y; 
assign og = ~ogn | ~z; 
assign ogn = ~og | ~y | ~reset; 

//dff for equal
assign m1 = ~x1 | ~z1;
assign z1 = ~clk | ~reset | ~m1; 
assign y1 = ~clk | ~z1 | ~x; 
assign x1 = ~reset | ~aequalb | ~y1; 
assign oe = ~oen | ~z1; 
assign oen = ~oe | ~y1 | ~reset; 

// dff for less
assign m2 = ~x2 | ~z2;
assign z2 = ~clk | ~reset | ~m2; 
assign y2 = ~clk | ~z2 | ~x2; 
assign x2 = ~reset | ~alessb | ~y2; 
assign ol = ~oln | ~z2; 
assign oln = ~ol | ~y2 | ~reset; 

//check with prev value
assign agreatb = g | (og & e);
assign alessb = l | (ol & e); 
assign aequalb = (~alessb & ~agreatb); 
  
endmodule
