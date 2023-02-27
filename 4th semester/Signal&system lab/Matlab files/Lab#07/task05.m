clc
clear all
close all
disp('*******Task no 05*********');
n=-10:10;
sig_1=2*[zeros(1,10) 1 zeros(1,10)]
sig_2=5*[zeros(1,11) 1 zeros(1,9)]
sig_3=8*[zeros(1,12) 1 zeros(1,8)]
sig_4=4*[zeros(1,13) 1 zeros(1,7)]
sig_5=3*[zeros(1,14) 1 zeros(1,6)]
x=sig_1+sig_2+sig_3+sig_4+sig_5

subplot(2,1,1)
stem(n,x,'r','linewidth',2);
xlabel('time');
ylabel('amplitude');
title('Original Signal');
subplot(2,1,2)
stem(-n,x,'r','linewidth',2);
xlabel('time');
ylabel('amplitude');
title('Flipped Signal');
