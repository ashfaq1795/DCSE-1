clc
clear all
close all
t=-5:0.002:5;
y=sin(3*t);
p=plot(t,y,'b','Linewidth',2);
legend('sin(3t)');
saveas(p,'Output_task2.jpg');