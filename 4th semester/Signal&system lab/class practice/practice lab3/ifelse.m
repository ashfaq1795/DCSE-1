clc
clear all
close all
a=[1 2 0 -6 5 8]
b=[3 4 2 1 7 8]
%these if relational operator compare element by element 
%size of both arrays must be equall
%we can use square brackets or small brackets for logic operators.
if [a>b]
    disp('Ashfaq');
else
    if (a==b)
        disp('Ahmad');
    else
        if (a<b)
        disp('syed');
        else 
            disp('some elements in a are greater some in b are greater')
        end
    end
end

