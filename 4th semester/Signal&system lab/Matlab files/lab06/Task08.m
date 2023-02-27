clc
clear all
close all
disp('*******Task 08*********');
t=-2:0.01:2;
n=input('please enter the no of sinusiods: ');
p=input('please enter the phase angle: ');
A=input('please enter the amplitude of signal: ');
Resultent=0;

for i=1:n
f=input('please enter the value of frequency: ');
y=A * cos(2*pi*f*t + p);    
subplot(n+1,1,i)%in subplot we increase size of n for displaying Resultent plot.
plot(t,y,'r','linewidth', 2)
title('Continues-Time Sinusiod with same Amplitude,phase but different frequency');
xlabel('Time Index');
ylabel('Signal Amplitude');
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
%in case of different frequencies the effect of that individual signal will
%be more in resulttant signal which has greater frequency. i,e the
%resultent signal will matching more with greater frequency individual
%signal. the resultent signal will not be sinusoid but periodic.
%the amplitude ofresultent signal will be less than sum of all individual signals. 

