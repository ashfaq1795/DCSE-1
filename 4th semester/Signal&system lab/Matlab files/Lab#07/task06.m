function task06
disp('********Task no 06*******');
n=1:0.002:4;
x=sin(pi*2*n);

subplot(2,1,1)
plot(n,x,'r','linewidth',2);
xlabel('Time');
ylabel('Amplitude');
title('Original signal');
grid on
axis([0 5 -3 3]);
subplot(2,1,2)
plot(n,2*x,'b','linewidth',2);%Megnituded scaled by 2
xlabel('Time');
ylabel('Amplitude');
title('Megnitude scaled signal');
grid on
axis([0 5 -3 3]);
