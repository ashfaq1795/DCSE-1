clc
clear all
close all
disp('************** Task 4******************');
a=[-12,34,61,-9;65,78,90,12; 14,78,45,12; 60,25,3,8];
b=[34,67,8,9; 12,-91,12,9; 89,-8,0,2; 16,9,23,67];
c=a+b;
disp('1) sum');
disp('c= ');
disp(c);
d=a-b;
disp('2) subtraction');
disp('d= ');
disp(d);
E=a*b;
disp('3) Multiplication');
disp('E=');
disp(E);
F=a/b;
disp('4) Division');
disp('F=');
disp(F);
G=a.^b;
disp('5) Power');
disp('G=');
disp(G);
h=sin(a);
i=sqrt(b);
disp('6) sin of A matrix and sqrt of B matrix and its multiplication');
disp('h=');
disp(h);
disp('i=');
disp(i);
j=h*i;
disp('j= ');
disp(j);