clc
clear all
close all
disp('******task 06*********');
x1=[2 0 0 0 0 0 0 0 ];
x2=[0 5 0 0 0 0 0 0 ];
x3=[0 0 8 0 0 0 0 0 ];
x4=[0 0 0 4 0 0 0 0 ];
x5=[0 0 0 0 3 0 0 0];
y1=[0 0 0 0 1 0 0 0];
y2=[0 0 0 0 0 4 0 0];
y3=[0 0 0 0 0 0 3 0];
y4=[0 0 0 0 0 0 0 2];

first_sig=x1+x2+x3+x4+x5;
disp('first signal= ');
disp(first_sig);
second_sig=y1+y2+y3+y4;
disp('second signal= ');
disp(second_sig);
sum_sig=(first_sig+second_sig);
disp('sum signal= ');
disp(sum_sig);

subplot(3,1,1)
plot(first_sig,'g--+','Linewidth',2)
xlabel('x-axis');
ylabel('y-axis');
title('first signal');
grid on

subplot(3,1,2);
plot(second_sig,'b--*','Linewidth',2)
xlabel('x-axis');
ylabel('y-axis');
title('second signal');
grid on

subplot(3,1,3);
plot(sum_sig,'r--*','Linewidth',2)
xlabel('x-axis');
ylabel('y-axis');
title('sum of 1st and 2nd');
grid on


