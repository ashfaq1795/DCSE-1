clc
clear all
close all
disp('*****task 02*******');
x = [-3,0,0,2,6,8]; 
y = [-5,-2,0,3,4,10];
disp('the elements in vector x which are greater than elements in vector y at corresponding position are: ')
for i=1:1:6;
if x(i)>y(i)
disp(x(i));
end
end
