function[w]=task05(x,y,z)
%or function[w]=task05
disp('*****task 05******');
x=input('please enter the value of x: ');
y=input('please enter the value of y: ');
z=input('please enter the value of z: ');
if x<y && z<5;
    w=x*y*z;
else 
    disp('sorry for the output x shoud be less than y and z should be less than 5');
end