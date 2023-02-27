clc
clear all
close all
%multiple plotting on different command
% And labeling output window
s=[2 7 -5 8 7 0 9];
z=[2 7 9 3 0 4 6];
time =-3:3;
timex=-2:4;
figure (1) %it will plot each graph on separate window
plot(time,s)
xlabel('time t1');
ylabel('velocity v');
title('Covid 19');
grid on  %it will draw grides like squares on output window.
figure (2)
plot(timex,z);
xlabel('time t2');
ylabel('velocity v');
title('Covid 19');
grid % grid or grid on same meaning,
figure (3)
stem(timex,z);
xlabel('time t3');
ylabel('velocity v');
title('Covid 19');
grid
