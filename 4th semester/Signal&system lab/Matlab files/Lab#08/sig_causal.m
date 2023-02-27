function sig_causal
disp('******Task No 03******');
n=-10:10;
Signal=[-2 3 4 5 -7 3 -2 -9 4 0 8 9 -7 5 3 2 -7 8 -2 9 -3];
p_vector=[zeros(1,10) 1 2 4 6 8 10 12 14 16 18 20]; 
%Position vector is a vector whose starting point is origon.
Causal_sig=Signal.*p_vector;

subplot(3,1,1)
stem(n,Signal,'r','filled');
xlabel('x-axis');
ylabel('y-axis');
title('Discrete Signal');
grid on
subplot(3,1,2)
plot(n,p_vector,'r','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Position Vector');
%axis([0 10 0 20]);
subplot(3,1,3)
stem(n,Causal_sig,'r','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Causal Signal');