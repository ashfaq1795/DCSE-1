clc
clear all
close all
t=0:0.002:5;
y=exp(2*t+3);
p=plot(t,y,'b','Linewidth',2);
legend('e^ (2t+3)');
saveas(p,'Output_task1.fig');