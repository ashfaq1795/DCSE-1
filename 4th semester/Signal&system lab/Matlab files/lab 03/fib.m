function fib(n)
disp('*******task no 13*******');
n=input('please enter the range of fibonacci sequence: ');
first=0;
second=1;
%i=1;
%we can also use for loop........
while(i<=n)
    disp(first);
    next=first+second;
    first=second;
    second=next;
    i=i+1;
end
    
    
    

