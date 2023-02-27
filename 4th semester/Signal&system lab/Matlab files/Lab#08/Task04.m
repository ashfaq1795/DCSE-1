 clc
clear all
close all
disp('******Task No04********');
x =[2 4 6 4 2];
h =[3 -1 2 1];
y=conv(h,x);

subplot(2,1,1)
stem(x,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Input Signal Signal');
grid on
subplot(2,1,2)
stem(y,'b','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Output Signal after Convolution');
grid on