module Assignment5(
input  wire a,
input  wire b,
input wire c,
output wire redled,
output wire greenled,
output wire blueled
);

reg out1,out2;
always @(*)
begin
out1=a&(b|c);
out2=!(!(a&b)&!(a&c));
if(out1==1)
begin
redled=1;
end
else
begin
redled=0;
end
if(out2==1)
begin
greenled=1;
end
else
begin
greenled=0;
end
if(out1==out2)
begin
blueled=1;
end
else
begin
blueled=0;
end
end
endmodule
