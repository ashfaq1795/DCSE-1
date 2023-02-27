clc
clear all 
close all
disp('*********task no 3*****');
n=0:0.002:4;
x=sin(2*pi*1*n);
%the size of n and x is same.
subplot(2,1,1)
plot(n,x);
axis([-1 5 -1 1]);
title('Original signal');
subplot(2,1,2)
plot(n+1,x);
title('Delay Signal');
axis([-1 5 -1 1]);