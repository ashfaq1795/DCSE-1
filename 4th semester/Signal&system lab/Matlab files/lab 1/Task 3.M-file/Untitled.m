clc
clear all
close all
result=0;
g=input('CP grade point: ');
h=input('credit hour: ');
result=result+g*h;
g=input('CS-1 grade point: ');
i=input('credit hour: ');
result=result+g*i;
g=input('DE grade point: ');
j=input('credit hour: ');
result=result+g*j;
g=input('EDG grade point: ');
k=input('credit hour: ');
result=result+g*k;
g=input('PAk study grade point: ');
l=input('credit hour: ');
result=result+g*l;
g=input('CPS grade point: ');
m=input('credit hour: ');
result=result+g*m;
g=input('CP lab grade point: ');
n=input('credit hour: ');
result=result+g*n;
g=input('EDG lab grade point: ');
o=input('credit hour: ');
result=result+g*o;
g=input('CS-1 lab grade point: ');
p=input('credit hour: ');
result=result+g*p;
q=h+i+j+k+l+m+n+o+p;
Cgpa=result/q;
disp('CGPA= ');
disp(Cgpa);








