clc
clear all
close all
%unite step sequence....
%we can also coded it in different manner like unite impulse.
x= -10:10;
y=[zeros(1,10) ones(1,11)];
%another Method.
%y(11:21)=1; //in this case Matlab automatically assign zeros from 1 to 10.
%the size of x and y must be equal...
stem(x,y,'filled');
xlabel('sample #'); ylabel('signal amplitude'); 
title('Unit step');
axis([-10 10 -1 2]);

