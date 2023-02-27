function task04
disp('********* Task 04*********');
x=-15:15;
y1 = (2*x.^2);
y2 = (4*x.^3);
figure (1)
plot(x,y1,'b--o',x,y2,'c*')
title('plot range -15:15')
grid on
x=-50:50;
y1 = (2*x.^2);
y2 = (4*x.^3);
figure(2)
plot(x,y1,'b--o',x,y2,'c*')
title('plot range -50:50')
grid on
