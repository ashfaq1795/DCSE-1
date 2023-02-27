clc
clear all 
close all
disp('we will make the matrix from the system of equations')
A=[1,2,3;4,5,6;7,8,0]
b=[1;2;1]
disp('inverse of a matrix A: ')
A=(inv(A))
disp('now using inversion method to find the value of veriables')
w=A*b;
x=w(1,1)
y=w(2,1)
z=w(3,1)


