function[signal,B,product]= sigplot3
disp('******task 02********');
disp('please enter signal s elements: ');
for i=1:5;
    signal(i)=input('enter element: ');
end
B=input('please enter the value of beta: ');
for i=1:5;
    product(i)=signal(i)*B;
end

figure (1)
stem(signal,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Original signal');
grid on
figure (2)
stem(product,'g --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('scaled version');
grid on
figure (3)
stem(signal,'r --','Linewidth',2);
hold on
stem(product,'g --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('overlapping');
hold on
grid on

figure (4)
subplot(1,2,1)
stem(signal,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Original signal');
grid on

subplot(1,2,2)
stem(product,'g --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('product');
grid on