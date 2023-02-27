function Exponential
disp('**********Task no 07*********');
n=0:1/10:10;
a=0.7;
Z=a*exp(n);

figure (1)
plot(n,real(Z),'r','linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Real part of Z for a=0.7');
hold on
grid on;

stem(n,real(Z),'g','linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
hold on;
grid on;

%Same program repeat for a=1.3
figure(2)
a=1.3;
Z=a*exp(n);
plot(n,real(Z),'r','linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Real part of Z  for a=1.3');
hold on
grid on;

stem(n,real(Z),'g','linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
hold on;
grid on;