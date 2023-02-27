clc
clear all
close all
disp('********Task 09*******');

x1=[2 -3 3 4 -2];
x2=[4 2 3 -1 -2];
x3=[3 5 -3 4];
a=conv(x2,x3);
LHS_1=conv(x1,a);
b=conv(x1,x2);
RHS_1=conv(b,x3);
LHS_2=conv(x1,x2);
RHS_2=conv(x2,x1);

figure(1)
subplot(2,1,1)
stem(LHS_1,'filled');
xlabel('X-axis');
ylabel('Y-axis');
title('LHS=x1 * (x2 * x3)');
grid on
subplot(2,1,2)
stem(RHS_1,'filled');
xlabel('X-axis');
ylabel('Y-axis');
title('RHS=(x1 * x2) * x3');
grid on

figure(2)
subplot(2,1,1)
stem(LHS_2,'filled');
xlabel('X-axis');
ylabel('Y-axis');
title('LHS=(x1*x2)');
grid on
subplot(2,1,2)
stem(RHS_2,'filled');
xlabel('X-axis');
ylabel('Y-axis');
title('RHS=(x2*x1)');
grid on



