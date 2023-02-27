clc
clear all
close all
disp('*******Task 06*********');
t=-2:0.01:2;
n=input('please enter the no of sinusiods: ');
f=input('please enter the value of frequency: ');
A=input('please enter the amplitude of signal: ');
p=input('please enter the phase angle: ');

Resultent=0;
for i=1:n
y=A * cos(2*pi*f*t + p);    
subplot(n+1,1,i)%in subplot we increase size of n for displaying Resultent plot.
plot(t,y,'r','linewidth', 2);
title('Continues-Time Sinusiod with same frequency,Amplitude,phase');
xlabel('Time Index');
ylabel('Signal Amplitude')
Resultent=Resultent+y; %all vectors y are added element by element.
grid on
end
disp('Resultent Vector is: ');
disp(Resultent);
subplot(n+1,1,n+1)
plot(t,Resultent,'b','Linewidth',2);
title('Resultent Signal )');
xlabel('Time Index');
ylabel('Signal Amplitude');
grid on

%in this task all the perameters are same so only the amplitude of all
%single sinusiods are adding.

