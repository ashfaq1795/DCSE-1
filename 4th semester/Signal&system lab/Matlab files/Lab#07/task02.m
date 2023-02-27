function task02
disp('**********task no 2*********')
n=-10:10;
signal1(11:21)=1; %it automatically assign signal(1:10)=0
signal2(12:21)=1;
signal=signal1-signal2;
figure(1)
subplot(3,1,1)
stem(n,signal1,'filled');
title('signal 1');
subplot(3,1,2)
stem(n,signal2,'filled');
title('signal 2')
subplot(3,1,3);
stem(n,signal,'filled');
title('Unite Sample')


%2nd method
for i=1:21
     if i>=11;%it automatically assign x(1:10)=0
        x(i)=1;
     end
end
%instead of for loop we can also write here x(11:21)=1;
x2(12:21)=1;%it automatically assign x2(1:11)=0
k=x-x2;
figure(2)
subplot(3,1,1)
stem(n,x,'filled');
title('signal 1');
subplot(3,1,2)
stem(n,x2,'filled');
title('signal 2')
subplot(3,1,3);
stem(n,k,'filled');
title('Unite sample')
