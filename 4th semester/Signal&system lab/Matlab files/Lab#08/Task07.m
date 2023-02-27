clc
clear all
close all
disp('********Task 07*******');
h=[2 1 2 4 3];
%(h is the summation of five unite impulse signals having d/f position of 1) 
x=[1 4 3 2];
y=conv(h,x);

subplot(2,1,1)
stem(x,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Input Signal');
grid on
subplot(2,1,2)
stem(y,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('OUTput Signal');