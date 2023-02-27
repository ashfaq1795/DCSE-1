clc
clear all
close all
%here we will show some part of the graph but overall grapg will not
%effect.
s=[2 7 -5 8 7 0 9];
z=[3 7 9 3 0 4 6];
time =-3:3;
timex=-2:4;

subplot(3,1,1);
plot(time,s)
xlabel('time t1');
ylabel('velocity v1');
title('Covid 19');
grid on
axis([-1 1 -5 5])

subplot(3,1,2);
plot(timex,z);
xlabel('time t2');
ylabel('velocity v2');
title('Covid 20');
grid 
%axis([0 0 0 0])

subplot(3,1,3);
stem(timex,z);
xlabel('time t3');
ylabel('velocity v3');
title('Covid 21');
grid
axis([-1.5 1.5 5 10])

