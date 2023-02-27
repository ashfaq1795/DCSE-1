clc
clear all
close all
disp('******task 04****')
n=2:0.1:5;
y=5*exp(n*(pi/4*i));
subplot(1,2,1)
stem(n,y,'filled')
title('original signal');
xlabel('Time');
ylabel('Amplitude');
subplot(1,2,2)
stem(-n,y,'filled');
title('flipped signal');
xlabel('Time');
ylabel('Amplitude');
