   clc
clear all
close all
disp('******Task No 05******');
x1= [3 1 1];
x2= [4 2 1]; 
x3=[3 2 1 2 3];
a=conv(x1,x2); 
LHS=conv(a,x3);
b=conv(x2,x3);
RHS=conv(x1,b);

subplot(2,1,1)
stem(LHS,'r','filled');   
xlabel('x-axis');
ylabel('y-axis');
title('LHS=(x1[n] * x2[n]) * x3[n]');
grid on
subplot(2,1,2)
stem(RHS,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('RHS=x1[n] * (x2[n] * x3[n])');
grid on