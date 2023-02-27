clc; 
clear all; 
close all 
disp('*********Task 04*********');
t=0:0.001:5;
x=(-8/(pi*pi))*exp(i*(2*pi*0.5*t)); 
y=(-8/(9*pi*pi))*exp(i*(2*pi*0.5*11*t)); 
s=x+y;
plot(t,real(s),'linewidth',3); 
title('Triangular Wave with N=11'); 
ylabel('Amplitude'); 
xlabel('Time')
grid on