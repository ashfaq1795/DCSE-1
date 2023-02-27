clc
clear all
close all
%simple plotting 
s=[2 7 -5 8 7 0 9]; %sample space
time =-3:3;
% by default it will start from 1 upto sample space.
%length of time extances  must be equal to sample space. 
%t creat continus graph...
plot(s);
hold on %it overlap all command in a singal window
plot(time,s);
hold on
stem(s); %it creat descrite graph...
stem(time,s);
