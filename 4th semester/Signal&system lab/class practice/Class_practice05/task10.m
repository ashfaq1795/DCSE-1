clc
clear all
close all
a=3;
p=-0.4;
w=2*p*(1250);
t=0:0.1:19;
EC=a*exp(w*t*i+p);
figure
plot(EC);
figure
subplot(2,1,1)
plot(real(EC));
title('Real');

subplot(2,1,2);
plot(imag(EC));
title('imaginary');