clc
clear all
close all
disp('**********TASK 05**********');
t=-2:.005:2;
T=1;
T1=1/4;
w=2*pi/T;
M=60;
x=zeros(1,length(t));
for k=-M:M
    if (mod(k,2)==0)
        ak=1;
x=x+ak*exp(j*k*w*t);
    else
        ak=2
        x=x+ak*exp(j*k*w*t);
    end
end
figure
plot(t,x,'Linewidth',2);
grid on;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=60');
M=10;
x=zeros(1,length(t));
for k=-M:M
    if (mod(k,2)==0)
        ak=1;
x=x+ak*exp(j*k*w*t);
    else
        ak=2
        x=x+ak*exp(j*k*w*t);
    end
end
figure
plot(t,x,'Linewidth',2);
grid on;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=10');


