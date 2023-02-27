clc
clear all
close all
disp('*********TASK 01*********');
k = -50:50;
T1 = 0.25;%duty cycle
t=-2:0.1:2;
T=1; %time period
%cofficients ak's of fourier series
ak = sin(k*2*pi*(T1/T))./(k*pi);
ak(51)=2*T1/T; %this for k=0.
%Negative cofficients bk=a-k's of fourier series
bk =fliplr(ak); 
%or  bk=sin((-k)*2*pi*(T1/T))./((-k)*pi);
%bk(51)=2*T1/T;  %this for k=0.
xt1=zeros(1,length(t));
xta=zeros(1,length(t));
for k=-50:50;
xt1 = xt1 + ak(k+51)*exp(j*k*2*pi/T *t);
xta = xta + exp(j*k*2*pi/T *t);
end

xt2=zeros(1,length(t));
xtb=zeros(1,length(t));
for k=-50:50;
xt2 = xt2 + ak(k+51)*exp(j*k*2*pi/T *(-t));%reversed signal with cofficients
xtb=xtb+exp(j*k*2*pi/T *(-t));%reversed signal without cofficients
end
figure(1);
subplot(3,1,1);
plot(ak,'b','Linewidth',2);
xlabel('t');
ylabel('ak"s');
title('Cofficients ak’s of fourier series');
subplot(3,1,2);
plot(t,xta,'r','Linewidth',2);
xlabel('t');
ylabel('x(t)');
title('Original signal without cofficints of fourier series');
subplot(3,1,3);
plot(t,xt1,'g','Linewidth',2)
xlabel('t');
ylabel('x(t)');
title('Original signal with ak’s');

figure(2)
subplot(3,1,1)
plot(bk,'b','Linewidth',2)
xlabel('t');
ylabel('x(t)');
title('Cofficients a-k’s of fourier series');
subplot(3,1,2)
plot(t,xtb,'r','Linewidth',2);
xlabel('t');
ylabel('x(t)');
title('Reversed signal without cofficients of fourier series');
subplot(3,1,3);
plot(t,xt2,'g','Linewidth',2)
xlabel('t');
ylabel('(a-k"s');
title('Reversed signal with a-k’s');
xt=zeros(1,length(t));


