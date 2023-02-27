clc
clear all
close all
n=-50:50; 
%unite Sample...
z=zeros(1,101);
for i=-50:50;
 if(i==0)
     z(50+i)=1;
 end
end

figure(1)
stem(n,z);
axis([-40 40 -1 1]); 



%2nd method
n=-25:25;
for i=1:51;%index will alway positive not negative and zero.
    if i<=25
        x(i)=0;
    else
    if i==26;
        x(i)=1;
    else
    if i>26;
        x(i)=0;
    end
    end
    end
end
figure(2)
stem(n,x,'r','linewidth',2);
 axis([-25 25 -1 1]);       
 
 
 
%3rd Method
x=zeros(51);
x(26)=1;
figure(3)
stem(n,x,'g','linewidth',2);
 axis([-25 25 -1 1]); 
 
% 4th method
y=-10:10;
x=[zeros(1,10) 1 zeros(1,10)];
figure (4)
stem(y,x,'y','linewidth',2);
axis([-15 15 -1 1]); 
 
 
 
 
 