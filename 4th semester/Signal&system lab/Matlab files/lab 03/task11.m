function[sum]=task11
n=input('please enter the size of vector: ');
i=1;
while(i<=n)
    A(i)=input('please enter the vector A element: ');
    B(i)=input('please enter the vector B element: ');
    sum(i)=A(i)+B(i);
    i=i+1;
end
disp('A= ');
disp(A);
disp('B= ');
disp(B);
disp('sum of vector A and B is : ');