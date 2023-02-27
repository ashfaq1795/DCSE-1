function task09
disp('**********Task no 09*******');
n=-10:1:10;
for a = 0:0.1:1
x1 = a.^ abs(n);
end
for a =1:0.1:4
    x2 = a.^abs(n);
end
subplot(2, 1, 1);
stem(n,x1,'g','linewidth',2);
xlabel('x-axis')'
ylabel('y-axis');
title('Descrete signal for x-range(0<=x<=1)');
grid on
subplot(2, 1, 2);
stem(n,x2,'m','linewidth',2);
xlabel('x-axis')'
ylabel('y-axis');
title('Descrete signal for x-range (a>1)');
grid on
