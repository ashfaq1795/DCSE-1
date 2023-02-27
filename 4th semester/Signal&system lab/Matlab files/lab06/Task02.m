clc
clear all
close all
disp('******Task 02******');
x=-1:0.006:1;
A=3;
for n=1:8;
    y=sin(n*pi*x)%here in each iteration y is a vector x no of values.
    %if we write like y(i)=sin(n*pi*x) then y is an single element in each
    %loop iteration.and it will give error here b/c in each iteration x is
    %not a single value but it is a set of value -1:0.006:1
    %so the error will be like size of y and x is not same. 
    subplot(8,1,n)
    plot(x,y,'linewidth',2);
    %we can also directly write here sin(n*pi*x)instead of y.
    grid;
    ylabel(n);
    xlabel(n);
    axis([x(1) x(end) -A A])
end