function complex
%we can display all complex and congugate-complex numbes by passing output
%arguments x and y.
disp('*********task no 05********');
n=0:1/10:10;
k=5;
a=pi/2;
x=k*exp(n*a*i);
y=conj(x);

subplot(4,1,1)
stem(n,real(x),'r','linewidth',2);
xlabel('x-axis of real part');
ylabel('y-axis of real part');
title('Real part of Complex number');
grid on;

subplot(4,1,2)
stem(n,imag(x),'g','linewidth',2);
%('b','linewidth',2)=filled (same thing)
xlabel('x-axis of imagnary part');
ylabel('y-axis of imagnary part');
title('imagnary part of Complex number');
grid on;

subplot(4,1,3)
stem(n,real(y),'r','linewidth',2);
xlabel('x-axis of real part');
ylabel('y-axis of real part');
title('real part of Conjugate-Complex number');
grid on;

subplot(4,1,4)
stem(n,imag(y),'g','linewidth',2);
%('b','linewidth',2)=filled (same thing)
xlabel('x-axis of imagnary part');
ylabel('y-axis of imagnary part');
title('imagnary part of congugate-Complex number');
grid on;
