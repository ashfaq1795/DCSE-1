clc
clear all
close all
disp('**************Task 01***********');
t=-3:0.01:3;
x0=1;
x1=(1/4)*exp(j*(-1)*2*pi*t)+(1/5)*exp(j*(1)*2*pi*t);
y1=x0+x1;
x2=(1/2)*exp(j*(-2)*2*pi*t)+(1/8)*exp(j*(2)*2*pi*t);
y2=y1+x2;
x3=(1/3)*exp(j*(-3)*2*pi*t)+(1/2)*exp(j*(3)*2*pi*t);
x = x0 + x1 + x2 + x3;
figure;
subplot(3,2,1);
plot(t,x1);
axis([-3 3 -2 2]);
title('x1(t)');
subplot(3,2,2);
plot(t,y1); 
axis([-3 3 -0.2 2]);
title('x0(t)+x1(t)');
subplot(3,2,3);
plot(t,x2);
axis([-3 3 -2 2]);
title('x2(t)');
subplot(3,2,4);
plot(t,y2);
axis([-3 3 -1 3]);
title('x0(t)+x1(t)+x2(t)');
subplot(3,2,5);
plot(t,x3);
xlabel('t'); axis([-3 3 -1 1]); 
title('x3(t)');
subplot(3,2,6);
plot(t,x);
xlabel('t'); axis([-3 3 -1 4]);
title('x(t)=x0(t)+x1(t)+x2(t)+x3(t)')
figure
subplot(2,1,1);
plot(imag(x));
title('imagnary part of X(t)');
subplot(2,1,2);
plot(real(x));
title('Real part of X(t)');
%we observed that if the cofficient are symmetric then the imaginary part
%will be zero here we consider cofficient non_symmetric so it has imaginary
%part also.




