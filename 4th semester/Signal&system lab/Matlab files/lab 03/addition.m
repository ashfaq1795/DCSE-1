function addition
disp('*****task 07*******');
a=[5 12 3;9 6 5;2 2 1]
b=[2 1 9;10 5 6;3 4 2]
disp('sum of matrix a and b is :')
for i=1:1:3;
    for j=1:1:3;
      c(i,j)=a(i,j)+b(i,j);
    end
end 
disp(c);