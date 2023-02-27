clc
clear all
close all
disp('*****Task 03******');

t=0:0.01:5;
sum=0;
i=1
for n=1:2:9 %frequency changing 
xn=(sin(2*pi*n*t)/n);
sum=sum+xn;
figure(1)
subplot(3,2,i)
plot(t,xn);
title('single hormonic signal');
xlabel('Time-axis');
ylabel(n);
sum=sum+xn;
i=i+1;

end
figure(2)
plot(t,sum)
plot(t,sum,'Linewidth',2);
title('Effect of adding 1 to 9 odd hormonics result in Square signal');
xlabel('Time-axis');
ylabel('y-axis');

  
  