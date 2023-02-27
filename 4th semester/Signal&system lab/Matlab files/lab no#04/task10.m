clc
clear all
close all
disp('*******task 10******');
[x,y] = meshgrid([-2:.2:2]);
Z = x.*exp(-x.^2-y.^2);
figure
% surface plot, with gradient(Z) determining color distribution
surf(x,y,Z,gradient(Z))
% display color scale, can adjust location similarly to legend
colorbar