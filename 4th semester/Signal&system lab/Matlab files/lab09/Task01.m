clc
clear all
close all
disp('********Task 01*****');
n=0:0.01:18.99; %Duration or period of signal 0 to 19=20.
xn=cos(2*pi*n/2);
stem(n,xn);
xlabel('x-axis');
ylabel('y-axis');
title('Discrete time signal');
abs_xn_2=abs(xn).^2;
delta_n=0.01;
N=20;
power=sum(abs_xn_2)*delta_n/N