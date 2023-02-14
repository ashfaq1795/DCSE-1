clc
clear all
close all

a1=1000*(-159.2j)/(1000-159.2j);
a2=6.28j+a1;
Vr1=a1/a2*(2+0j);
M1=abs(Vr1);
theta1=angle(Vr1);
deg1=theta1*(180/pi);


x1=1000*62.8j/(1000+62.8j);
x2=-15.92j+x1;
Vr2=x1/x2*(2+0j);
M2=abs(Vr2);
theta2=angle(Vr2);
deg2=theta2*(180/pi);

Vr=Vr1+Vr2;
M3=abs(Vr);
theta3=angle(Vr);
deg3=theta3*(180/pi);

t=0:0.000001:.003;
f1=1000;
f2=5000;
w1=2*pi*f1;
w2=2*pi*f2;
Vr1=M1*sin(w1*t+deg1);
Vr2=M2*sin(w2*t+deg2);
Vr=Vr1+Vr2;
subplot(311)
plot(t,Vr1)
grid on
title('source one only')

subplot(312)
plot(t,Vr2)
grid on
title('source two only')

subplot(313)
plot(t,Vr)
grid on
title('both sources')
disp(M1);
disp(deg1);
disp(M2);
disp(deg2);
disp(M3);
disp(deg3);
