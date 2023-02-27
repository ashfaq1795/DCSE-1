clc
clear all
close all
disp('********Task 06*********');
X=[1 3 2 1];
H=[1 1 2];
LHS=conv(X,H);
RHS=conv(H,X);

subplot(2,1,1)
stem(LHS,'r','filled');   
xlabel('x-axis');
ylabel('y-axis');
title('LHS=x * h');
grid on
subplot(2,1,2)
stem(RHS,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('RHS=h * x');
grid on