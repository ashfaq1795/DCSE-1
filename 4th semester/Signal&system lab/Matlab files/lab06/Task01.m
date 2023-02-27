function[Y,x]=Task01
disp('*******Task 01********');
disp('A Vector of size 1x10 having each ith element=cose(i*pi/4)');
i=1:10;
Y=cos(i*pi/4);

plot(i,Y,'r','Linewidth',2);
xlabel('X-axis');
ylabel('Y-axis');

%2nd Method
for i=1:10
    x(i)=cos(i*pi/4);
    %if we write x=cos(i*pi/4) then it will not give correct result.
end

