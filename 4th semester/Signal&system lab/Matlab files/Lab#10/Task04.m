clc
clear all
close all
disp('***********TASK 04**********');
t=-1.5:.005:1.5;
T=1;
T1=1/4;
w=2*pi/T;
M=100;
k=-M:M;
ak=sin(k*2*pi*(T1/T))./(k*pi);
ak(M+1)=2*T1/T;
x=zeros(1,length(t));
for k=-M:M
    x=x+ak(k+M+1)*exp(j*k*w*t);
end
figure
plot(t,x,'Linewidth',2);
grid on;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=100');

M=10;
k=-M:M;
ak=sin(k*2*pi*(T1/T))./(k*pi);
ak(M+1)=2*T1/T;
x=zeros(1,length(t));
for k=-M:M
    x=x+ak(k+M+1)*exp(j*k*w*t);
end
figure
plot(t,x,'Linewidth',2);
grid on;
xlabel('t');
ylabel('x(t)');
title('Reconstruction from Fourier Series, M=10');
