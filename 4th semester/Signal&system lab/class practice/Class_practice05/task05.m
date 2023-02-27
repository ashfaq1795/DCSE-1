clc
clear all 
close all
n=0:1/10:10;
k=5;
a=pi/2;
x=(k * exp(a*n*i));
% plot the real part
subplot(2,1,1)
stem(n, real(x), 'filled')
6
title('Real part of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid
% plot the imaginary
subplot(2,1,2)
stem(n, imag(x), 'filled')
title('Imaginary part of complex exp')
xlabel('sample #')
ylabel('signal amplitude')
grid

%y=cong(X);
