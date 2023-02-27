clc
clear all
close all
disp('******Task No 01******');
n=-10:0.4:10;
x1=[zeros(1,25) ones(1,26)];%Unite Step Sequence
%x2=[-2 3 4 5 -7 3 -2 -9 4 0 -5 -1 -3 5 3 2 -7 8 -2 9 -3];
%in general we can also take x2 like above but sample space will be like -10:10.
x2=sin(2*pi*2*n); 
x3=x1.*x2; %length of x1 and x2 must be same.
%any signal like x2 multiplying with Unite Step signal like x1 will alway
%give Causal signal.
subplot(3,1,1)
stem(n,x1,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Unite step signal');
subplot(3,1,2)
stem(n,x2,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('General signal');
subplot(3,1,3)
stem(n,x3,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Causal Signal');

    