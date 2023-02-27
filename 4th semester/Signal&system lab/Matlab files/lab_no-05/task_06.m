clc
clear all
close all
disp('*******task no 6******');
n=-10:1/10:10;
Z=exp(-0.2+0.5*n*j);

subplot(4,1,1)
stem(n,real(Z),'r','linewidth',1.5);
xlabel('x-axis');
ylabel('y-axis');
title('Real part of Z');
grid on;

subplot(4,1,2)
stem(n,imag(Z),'g','linewidth',1.5);
xlabel('x-axis');
ylabel('y-axis');
title('imagnary part of Z');
grid on;

subplot(4,1,3)
stem(n,abs(Z),'v','linewidth',1.5);
xlabel('x-axis');
ylabel('y-axis');
title('Megnitude of Z');
grid on;

subplot(4,1,4)
%we have to convert angle from radian to degree.
A=angle(Z);
A=(A*180/pi);
stem(n,A,'m','linewidth',1.5);
xlabel('x-axis');
ylabel('y-axis');
title('angle of Z');
grid on;
