clc
clear all
close all
disp('**********TASK 06**********');
t=-5:0.005:5;
T=1;
T1=1/4;
w=2*pi/T;
M=10;
x=zeros(1,length(t));
for k=-M:M
    if (abs(k)<3)
        ak=j*k;
x=x+ak*exp(j*k*w*t);
    else
        ak=0;
        x=x+ak*exp(j*k*w*t);
    end
end
figure
plot(t,x,'Linewidth',3);
grid on;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=10');


