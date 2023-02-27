clc;
clear all;
close all;
disp('*******Task 09*********');
t=0:0.01:2;
n=input('please enter the no of sinusiods: ');
f=input('please enter the value of frequency: ');
A=input('please enter the amplitude of signal: ');
p = zeros(1,n);
Resultent=0;
for i=1:n % we can also create separate loop for varying parameter.
p(i)=input('please enter the phase angle: ');
end;
for i=1:n
y = A * cos(2*pi*f*t + p(i));
subplot(n+1,1,i)%in subplot we increase size of n for displaying Resultent plot.
plot(t,y,'r','linewidth', 2);
title('Continues-Time Sinusiod with same frequency,Amplitude but different phase');
xlabel('Time Index');
ylabel('Signal Amplitude');
Resultent=Resultent+y;  %all vectors y are added element by element.
grid on;
end
disp('Resultent Vector is: ');
disp(Resultent);
subplot(n+1,1,n+1);
plot(t,Resultent,'b','Linewidth',2);
title('Resultent Signal )');
xlabel('Time Index');
ylabel('Signal Amplitude');
grid on;

%in this case frequency,amplitude are constant but phase varying so
%resultant Signal's angle will be equal to sum of individual angles and
%megnitude of resultent will decrease.

