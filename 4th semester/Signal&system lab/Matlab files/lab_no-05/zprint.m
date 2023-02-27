function zprint % we can also write input and output arguments here.
disp('*********Task no 01********');
Z=input('please enter complex no:');
R=real(Z);
disp('Real part of complex no is: ');
disp('R=');
disp(R);
I=imag(Z);
disp('imagnary part of complex no is: ');
disp('I=');
disp(I);
M=abs(Z);
disp('Megnitude of complex no is: ');
disp('M=');
disp(M)
A=angle(Z);
disp('Angle of complex no in radian is: ');
disp('A=');
disp(A)
A2=A*180/pi;
disp('Angle of complex no in Degree is: ');
disp('A=');
disp(A2);
