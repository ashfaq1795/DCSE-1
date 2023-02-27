clc
clear all
close all
disp('********task no 08**********');
n=1:1/10:10;
for a=0:1/10:1;
%for 0<=a<=1
x1=5*exp(i*n*(pi/4));
x2=a*exp(n); %this is not complex number
x3=x1.*x2;
end
figure(1);
subplot(2, 1, 1);
stem(n,real(x3),'g','linewidth',2);
xlabel('x-axis')'
ylabel('y-axis');
title('Real part');
subplot(2, 1, 2);
stem(n,imag(x3),'m','linewidth',2);
xlabel('x-axis')'
ylabel('y-axis');
title('Imaginory Part');


for a=2:1/10:10;
%for a>1
x1=5*exp(i*n*(pi/4));
x2=a*exp(n);
x3=x1.*x2;
end
figure(2);
subplot(2, 1, 1);
stem(n,real(x3),'g','linewidth',2);
xlabel('x-axis')'
ylabel('y-axis');
title('Real part');
grid on
subplot(2, 1, 2);
stem(n,imag(x3),'m','linewidth',2);
xlabel('x-axis')'
ylabel('y-axis');
title('Imaginory Part');
grid on
