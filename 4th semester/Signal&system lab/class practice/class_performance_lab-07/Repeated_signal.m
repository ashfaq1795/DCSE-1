clc
clear all
close all
%signal replication.
x=input('please input the signal: ');
y=[x x x x x];

subplot(2,1,1)
stem(x,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
axis([0 length(x)*length(x) 0 10]);
title('original signal');
subplot(2,1,2)
stem(y,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Replicated Signal');
axis([0 length(x)*length(x) 0 10]);
