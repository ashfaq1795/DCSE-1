clc
clear all
close all
%incase of hold on we cannot lable x-axis and y-axis separatly
%incase of figure we feel deficulty to compare to graph b/c of d/f windows.
% now we will plot all figures on singal but we will avoid from overlapping
% by subplot command
%also change the font of the graph
s=[2 7 -5 8 7 0 9];
z=[3 7 9 3 0 4 6];
time =-3:3;
timex=-2:4;

subplot(3,1,1);
plot(time,s,'r --','Linewidth',3)
xlabel('time t1');
ylabel('velocity v1');
title('Covid 19');
grid on

subplot(3,1,2);
plot(timex,z,'*');
xlabel('time t2');
ylabel('velocity v2');
title('Covid 20');
grid 

subplot(3,1,3);
stem(timex,z,'m --','Linewidth',3);
xlabel('time t3');
ylabel('velocity v3');
title('Covid 21');
grid
