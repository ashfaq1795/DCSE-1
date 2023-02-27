clc
clear all
close all
disp('**********Task 02***********');
t=0:0.008:8;
ff=0.5;
y=0;
i=1;
for k=1:2:17 %for loop for adding first to 17th odd hormonic.
    fh=k*ff; %frequency changing in each iteration.
x=(4/(k*pi))*sin(2*pi*fh*t);
figure(1)
subplot(4,3,i)
plot(t,x);
title('single hormonic signal');
xlabel('Time-axis');
ylabel(k);
y=y+x;
i=i+1;
end
subplot(4,3,i+1)
plot(t,y,'Linewidth',2);
title('Effect of adding 1 to 17 odd hormonics result in Square signal');
xlabel('Time-axis');
ylabel('y-axis');
%up to this 1 to 17 odd hormonic added to y. Now we want to add 1 to 27 we
%will create another for loop and start it from 19 because 1 to 17 already
%added to y we will add 19 to 27 hormonics more in y then y will give us
%result of 1 to 27.
i=1;
for k=19:2:27
    fh=k*ff; 
x=(4/(k*pi))*sin(2*pi*fh*t);
figure(2)
subplot(2,3,i)
plot(t,x);
title('single hormonic signal');
xlabel('Time-axis');
ylabel(k);
y=y+x;
i=i+1;
end
subplot(2,4,i+1)
plot(t,y,'Linewidth',2);
title('Now Effect of adding first to 27 odd hormonics result in Square signal');
xlabel('Time-axis');
ylabel('y-axis');

