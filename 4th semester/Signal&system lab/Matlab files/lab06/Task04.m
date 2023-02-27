clc
clear all
close all
disp('*******Task 04*********');

M=10; %samples/sec
t=-3:1/M:3;
A=2;
f=1;
x=A * sin(2*pi*f*t + pi/2);
y=A * cos(2*pi*f*t + 0);
subplot(2,1,1)
plot(t,x,'r','linewidth', 2)
title('Continues-Time Sine Wave with A=2,f=1,phase=pi/2)')
xlabel('Time Index')
ylabel('Signal Amplitude')
axis([t(1) t(end) -A A]) 
grid
subplot(2,1,2)
plot(t,x,'r','Linewidth',2)
title('Continues-Time Cosine Wave with A=2,f=1,phase=0)')
xlabel('Time Index')
ylabel('Signal Amplitude')
axis([t(1) t(end) -A A]) 
grid
%As we know that there is 90 degree phase difference between sine and
%cosine i,e sin lead 90 degree while cosine lagging. As here we here we
%manually remove this differece by delaying the sin wave by an angle
%pi/2.so the graphs of both function in this case will be same.