function plotcircle
disp('*********task no 05*******');
x=input('please enter point x ');
y=input('please enter point y ');
r=input('please enter redius r');
theta=0:1/100:2*pi;
xaxis=(r*cos(theta))+x;
yaxis=r*sin(theta)+y;
plot(xaxis,yaxis,'red','Linewidth',2)
xlabel('x-axis');
ylabel('y-axis');
title('Circle')
gtext('central point');
grid on

