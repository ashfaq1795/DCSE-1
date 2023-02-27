clc
clear all
close all
disp('**************Task 02***********');
t=-3:0.01:3;
x0=1;
x2=exp(j*pi/4)*exp(j*(-2)*2*pi*t)+exp(j*pi/4)*exp(j*(2)*2*pi*t);
y1=x0+x2;
x4=2*exp(j*pi/3)*exp(j*(-4)*2*pi*t)+2*exp(j*pi/3)*exp(j*(4)*2*pi*t);
x = x0  + x2 + x4;

figure;
subplot(2,2,1);
plot(t,x2,'Linewidth',2);
title('x2(t)');
grid;

subplot(2,2,2); 
plot(t,y1,'Linewidth',2); 
title('x0(t)+x2(t)');
grid; 

subplot(2,2,3);
plot(t,x4,'Linewidth',2);
title('x4(t)');
grid

subplot(2,2,4);
plot(t,x,'Linewidth',2);
xlabel('t');
title('x(t)=x0(t)+x2(t)+x4(t)')
grid;



