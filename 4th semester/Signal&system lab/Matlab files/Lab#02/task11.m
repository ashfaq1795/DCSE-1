clc
clear all 
close all
disp('In task 11 taking matrix A and b from the user in run time:')
R=input('Enter the size of matrix A and : ');
for i=1:R
    for j=1:R
        A(i,j)=input('Enter the matrix elements: ');
    end
end
disp('Matrix A= ')
disp(A);
for k=1:R
    b(k,1)=input('Now enter the elelments of b matrix: '); 
end
disp('Matrix b= ')
disp(b);
disp('inverse of a matrix A: ')
A=(inv(A))
disp('now using inversion method to find the value of veriables X,Y and Z')
w=A*b;
x=w(1,1)
y=w(2,1)
z=w(3,1)


