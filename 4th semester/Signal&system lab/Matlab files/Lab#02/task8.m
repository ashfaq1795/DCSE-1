clc
clear all
close all
disp('************** Task 8******************');
A=[3 23 34 12 34 5 56 23; 12 34 34 32 23 23 45 1;67 23 2 4 4 5 6 456;
67 67 45 67 78 7 8 5;6 35 5 3 5 56 7 8]
disp('1)update the last coloumn of Matrix A using End Command');
B=A;
B(:,end)=[1 2 3 4 5]
disp('2)Delete the last coloumn of Matrix A using End Command');
B(:,end)=[]
disp('3)update the last row of Matrix A using End Command');
A(end,:)=[1 2 3 4 5 6 7 8]
disp('4)Delete the last row of Matrix A using End Command');
A(end,:)=[]

