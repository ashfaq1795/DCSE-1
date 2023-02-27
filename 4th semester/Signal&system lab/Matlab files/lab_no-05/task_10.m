clc
clear all
close all
disp('*********task no 10*********');
a=3;
pai=-0.4;
w=2*pai*1250;
t=1:1/10:4; 
x=a*exp(pai+(w*t*j));

subplot(2,1,1)
plot(t,real(x),'r','linewidth',2);
xlabel('time-t');
ylabel('real-part of Z');
title('Complex Number');
grid on;

subplot(2,1,2)
plot(t,imag(x),'g','linewidth',2);
xlabel('time-t');
ylabel('imagnary-part of Z');
title('Complex Number');
grid on;
