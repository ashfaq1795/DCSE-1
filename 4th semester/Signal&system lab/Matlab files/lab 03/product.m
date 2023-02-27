function product
disp('******task 03******');
b=12;
disp('All the values of c in the range 1<=a<=8 and b=12');
for a=1:1:8;
    c=4*a*b;
    disp(c);
end

disp('All the values of c in the range 8<a<=16 and b=12');
for a=9:1:16;
    c=a*b;
    disp(c);
end

%we can also do it using if else statments.
disp('*********2nd method******');
disp('All the values of c in the range 1<=a<=8 and b=12');
for a=1:1:16
if a>=1 &&a<=8;
    disp(4*a*b);
else
    disp('All the values of c in the range 8<a<=16 and b=12');
   % if a>8 && a<=16;
        disp(a*b)
   % end  
end
end