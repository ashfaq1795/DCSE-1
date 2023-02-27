clc
clear all
close all
disp('************** Task 1******************');
 a=[1 2 3;4 5 6;8 9 3];
b=[a(:,1),a(:,1)-a(:,2),a(:,2)-a(:,3)];
disp('given matrix is:');
disp(a);
disp('New Matrix is:');
disp(b);