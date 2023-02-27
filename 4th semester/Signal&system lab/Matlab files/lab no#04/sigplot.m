function[sum product]= sigplot
disp('****** Task no 01********');
x1=[2 5 8 4 3]      
x2=[4 3 2 1 7] 
disp('sum and product of two vectors using vector addition and multiplication');
sum= x1+x2
product=x1.*x2
disp('Now sum and product using for loop ');
for i=1:5;
    sum(i)=x1(i)+x2(i);
    product(i)=x1(i).*x2(i);
end
figure (1)
plot(x1,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('first vector');
grid on
figure (2)
plot(x2,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('2nd vector');
grid on

figure (3)
plot(sum,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Sum vector');
grid on

figure (4)
plot(product,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('product');
grid on

figure (5)
plot(x1,'r --','Linewidth',2);
hold on
plot(x2,'g --','Linewidth',2);
hold on
plot(sum,'b --','Linewidth',2);
hold on
plot(product,'y --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('overlapping');
grid on

figure (6)
subplot(4,1,1)
plot(x1,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('first vector');
grid on

subplot(4,1,2)
plot(x2,'b --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('2nd vector');
grid on

subplot(4,1,3)
plot(sum,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Sum vector');
grid on

subplot(4,1,4)
plot(product,'r --','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('product');
grid on







    
