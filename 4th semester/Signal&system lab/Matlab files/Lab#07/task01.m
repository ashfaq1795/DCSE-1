function task01
disp('**********task no 1*********')
n=-10:10;
signal=zeros(1,21);%we can also remove line 4 it still work.
%1=row 21=coloumns.
signal(1:10)=-1;
%here automatically row=1 or we can also declear it i,e signal(1,1:10)...
signal(12:21)=1;
figure(1)
stem(n,signal,'b','linewidth',2);


%2nd method
for i=1:21;
    if i<=10;
        x(i)=-1;
    else
        if i==11;
            x(i)=0;
        else
            if i>11;
                x(i)=1;
            end
        end
    end
end
figure(2)
stem(n,x,'r','linewidth',2);