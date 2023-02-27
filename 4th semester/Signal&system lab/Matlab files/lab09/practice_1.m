clc
clear all
close all
t=-1:0.005:0.995; %delta t.
xt=cos(2*pi*t/2);
plot(t,xt);
xlabel('time, t');
ylabel('Amplitude, A');
title('Continuous Time Cosine');
abs_xt_2=abs(xt).^2;
t=2;
delta_t=0.005;
power=sum(abs_xt_2)*delta_t/t
