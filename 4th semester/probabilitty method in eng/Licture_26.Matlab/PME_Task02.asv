clc
clear all
close all
X = rand(10,16 );
% Generate 1000 rows of 16 Bernoulli trials with p = 0.5
Y = sum(X,2)
% Add the results of each row to obtain the number of
% successes in each experiment. Y contains 1000 outcomes.
K = 0:16;
H =hist (Y,K)
S = sum(H,2)
Z = H./S;
% Find the relative frequencies of the outcomes in Y.
bar(K,Z)
% Produce a bar graph of the relative frequencies.
hold on
% Retains the graph for next command.
stem(K,binopdf (K,16,0.5))
% Plot the binomial probabilities along
% with the corresponding relative frequencies.