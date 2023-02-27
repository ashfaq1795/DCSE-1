function[re im anr and mag]=zprint
A=input('please enter complex no: ');
re=real(A);
im=imag(A);
anr=angle(A);
and=anr*180/pi;
mag=abs(A);