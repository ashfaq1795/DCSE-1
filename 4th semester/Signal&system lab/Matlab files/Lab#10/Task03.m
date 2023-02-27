clc
clear all
close all
disp('**********TASK 03*********');
k=-15:15;
T=1;
T1=1/4;
ak1=sin(k*2*pi*(T1/T))./(k*pi);
ak1(16)=2*T1/T;
subplot(3,1,1);
stem(k,ak1,'filled');
ylabel('ak');
title('FS coefficients for periodic Square wave (T=1, 1=1/4)');

T1=1/8;
ak1=sin(k*2*pi*(T1/T))./(k*pi);
ak1(16)=2*T1/T;
subplot(3,1,2);
stem(k,ak1,'filled');
ylabel('ak');
title('FS coefficients for periodic Square wave (T=1, T1=1/8)');

T1=1/16;
ak1=sin(k*2*pi*(T1/T))./(k*pi);
ak1(16)=2*T1/T;
subplot(3,1,3);
stem(k,ak1,'filled');
xlabel('k');
ylabel('ak');
title('FS coefficients for periodic Square wave (T=1, T1=1/16)');

