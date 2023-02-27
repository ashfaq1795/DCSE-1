clc;
clear all;
close all;
disp('********Task 01*********');
disp('The Outcomes of rand Matrix is: ');
x=rand(1,8)
for i=1:8;
    if x(i)>0.5 %proability of success.
        x(i)=1;
    else
        x(i)=0;
    end
end
disp('Now The Outcomes of Bernoulli Trails with Success Probaility 0.5 :');
disp('x :')
disp(x);

    