clc
clear all
close all
disp('******task 04******');

for a=1:1:10;
    if a<3;
        b(a)=(a.^2);
    else
        if a>=3 && a<7;
            c(a)=(a+3);
        else
            if a>7;
             d(a)=(a);
            end
        end
    end
end
disp('value of c in the range a<3: ');
disp('C= ');
disp(b);
disp('value of c in the range 3<=a<7: ');
disp('C= ');
disp(c);
disp('value of c in the range a>7: ');
disp('C= ');
disp(d);

