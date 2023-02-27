function[ret]= sort
dis('*******task 16********');
for i=1:1:8;
    ret(i)=input('please enter array elements: ');
end
disp('ret= ');
disp(ret);
disp('Now array in sorted form: ');
for i=1:1:7;
    for j=i+1:8
    if ret(j)<ret(i)
        temp=ret(j);
        ret(j)=ret(i);
        ret(i)=temp;
        
    end
    end
end




