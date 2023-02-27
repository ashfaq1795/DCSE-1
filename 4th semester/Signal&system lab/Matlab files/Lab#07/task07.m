clc
clear all
close all
disp('*****Task No 07******');
n=-2:1/1000:2;
x1=sin(2*pi*2*n); 
x2=interp(x1,3); %up-sampling
%INCASE of x1 if one cycle cover 100 sample then one cycle will cover 
%100 *3 incase of x2 this is called positive time scaling or up sampling.
%for up time scaling command is inpterp(interpolate)
%for down time scaling command is decimate.
subplot(2,1,1)
plot(x1,'b');
xlabel('x-axis');
ylabel('y-axis');
title('original signal');
axis([0 4000 -1 1])

subplot(2,1,2)
plot(x2,'b');
xlabel('x-axis');
ylabel('y-axis');
title('interpolate signal by factor 2');
axis([0 12000 -1 1])