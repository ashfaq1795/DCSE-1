clc
clear all
close all
disp('********Task 08*******');
x=[1 4 3 2];
h1=[1 3 2 1];
h2=[1 1 2];
y1=conv(h1,x);
y2=conv(h2,y1);

subplot(3,1,1)
stem(x,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Input Signal');
grid on
subplot(3,1,2)
stem(y1,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('OUtput signal when the input signal passes the first system');
grid on
subplot(3,1,3)
stem(y2,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('OUTput Signal when the input signal passes the 2nd system');