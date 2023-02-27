clc
clear all
close all
a=input('enter the value of a: ');
b=input('enter the value of b: ');
disp('******************************');
disp('Expression 1')
disp('******************************');
l.h.s=sin(a+b);
r.h.s=sin(a)*cos(b)+cos(a)*sin(b);
disp('l.h.s= ');
disp(l.h.s);
disp('r.h.s= ');
disp(r.h.s);
disp('******************************');
disp('Expression 2')
disp('******************************');
l.h.s=sin(a)+sin(b);
r.h.s=2*sin((a+b)/2)*cos((a-b)/2);
disp('l.h.s= ');
disp(l.h.s);
disp('r.h.s= ');
disp(r.h.s);
disp('******************************');
disp('Expression 3')
disp('******************************');
l.h.s=sin(a)*sin(b);
r.h.s=1/2*[cos(a-b)-cos(a+b)];
disp('l.h.s= ');
disp(l.h.s);
disp('r.h.s= ');
disp(r.h.s);
disp('******************************');
disp('Expression 4')
disp('******************************');
l.h.s=tan(a-b);
r.h.s=[tan(a)-tan(b)]/[1+tan(a)*tan(b)];
disp('l.h.s= ');
disp(l.h.s);
disp('r.h.s= ');
disp(r.h.s);
disp('******************************');
disp('Expression 5')
disp('******************************');
l.h.s=cos(a)-cos(b);
r.h.s=-2*sin((a+b)/2)*sin((a-b)/2);
disp('l.h.s= ');
disp(l.h.s);
disp('r.h.s= ');
disp(r.h.s);
disp('******************************');