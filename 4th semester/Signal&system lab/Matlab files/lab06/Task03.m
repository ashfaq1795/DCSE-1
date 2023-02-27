clc;
clear all;
close all;
disp('*******Task 03*********');
x=0:2*pi;
Y=exp(-x).*sin(8*x);

subplot(2,1,1);
plot(x,Y,'r','Linewidth',2);
xlabel('X-axis');
ylabel('Y-axis');
title('Continues-Time Signal');
subplot(2,1,2);
stem(x,Y,'r','filled');
xlabel('X-axis');
ylabel('Y-axis');
title('Discrete-Time Signal');