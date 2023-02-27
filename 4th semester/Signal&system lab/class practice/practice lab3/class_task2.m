clc
clear all 
close all
%hilbert matrix using for loooop...

x=input('please enter the size of matrix: ');
y=zeros(x);
for i=1:1:x
    for j=1:1:x
        y(i,j)=1/(i+j-1);
    end
end
disp('hilbert matrix is :');
disp(y);


%hilbert martix using while loop...
a=input('please enter size of matrix: ');
b=zeros(a);
r=1;
while (r<=a)
    c=1;
    while (c<=a)
        b(r,c)=1/(r+c-1);
        c=c+1;
    end
    r=r+1;
end
disp('hilberrt matrix is: ');
disp(b);

        
