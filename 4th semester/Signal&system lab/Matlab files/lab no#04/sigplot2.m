function sigplot2 
disp('********task 03********');
for i=1:5;
    x1(i)=input('please enter the element of x1 ');
    x2(i)=input('please enter the element of x2 ');
end
disp('vector x1= ');
disp(x1);
disp('vector x2= ');
disp(x2);
disp('the elements at the following indexs in x1 are smaller than the element at same position in x2') 
for i=1:5;
    if x1(i)<x2(i)
        disp(i);
    end
end
figure (1)
stem(x1,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('first vector');
grid on
figure (2)
stem(x2,'g --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('2nd vector');
grid on
figure (3)
stem(x1,'r --','Linewidth',2);
hold on
stem(x2,'g --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('overlapping');
hold on
grid on

figure (4)
subplot(2,1,1)
stem(x1,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('first vector');
grid on

subplot(2,1,2)
stem(x2,'g --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('2nd vector');
grid on