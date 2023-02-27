function [s,p,d]=spectmat(m1,m2,m3)
s=m1+m2+m3;
p=m1.*m2.*m3;
d=m1-m2-m3;
disp(s);
disp(p)
disp(d);
