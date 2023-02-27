clc
clear all
close all
disp('*******task no 15********');
op=fopen('weekdays.txt','wt');
fprintf(op,'sunday\nMonday\ntuesday\nWednesday\n')
fprintf(op,'thursday\nFriday\nSaturday\n');
fclose(op);

