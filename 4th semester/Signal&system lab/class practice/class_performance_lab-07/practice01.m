function task01
disp('**********task no 1*********')
n=-10:10;
signal=zeros(21)

signal(1:10)=-1;
signal(12:21)=1;
stem(n,signal)