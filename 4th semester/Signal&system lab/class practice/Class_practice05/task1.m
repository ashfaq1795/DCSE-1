clc
clear all
close all
t=0:0.001:14;
A=5;
w=1;
X=A*exp(2*pi*w*t*i+9)
plot(X);
figure
plot(real(X));
figure
plot(imag(X));