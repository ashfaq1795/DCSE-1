clc
clear all
close all
disp('*******task 09*******');
k = 1; b = -2; x = -1; y = -2;
while k <= 6;
disp('*******new iteration*********'); 
disp(k);
disp(b);
disp(x);
disp(y);
y = x^2 -3;
if y < b
b = y;
end
x = x + 1;
k = k + 1;
end
