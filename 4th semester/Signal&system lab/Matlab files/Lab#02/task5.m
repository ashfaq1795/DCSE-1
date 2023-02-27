clc
clear all
close all
disp('************** Task 5******************');
A=[3 7 -4 12;9 10 2 7;-56 13 8 11;15 5 4 1]
disp('1) 4x3 array B from 4x4 array A by deleting ist coloumn');
B=A;
B(:,1)=[]
disp('2) 3x4 array C from 4x4 array A by deleting ist row');
C=A;
C(1,:)=[]
disp('3) 2x3 array C from 4x4 array A by delting last two rows and ist column');
C=A;
C(3:4,:)=[];
C(:,1)=[]

