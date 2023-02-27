clc
clear all
close all
t=-2:0.002:2;
w=4;
xt=cos(w*t);
for i=1:length(t);
if(xt(i)<0)
    xt1(i)=0;
else
    xt1(i)=xt(i);
end
end
subplot(2,1,1);
plot(t,xt)
title('Input Sinusiodal');
subplot(2,1,2);
plot(t,xt1)
title('Half Wave Rectifier');

