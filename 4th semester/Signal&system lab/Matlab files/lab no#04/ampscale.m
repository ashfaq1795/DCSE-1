function ampscale(signal,threshold)
disp('*******task no 7*******');
g=0;
l=0;
disp('the descrite time signal is :');
disp(signal);
for i=1:length(signal);
    if signal(i)>threshold
        signal1(i)=signal(i)-threshold;
        g=g+1;
    end
    if signal(i)<(-threshold)
        signal1(i)=signal(i)+threshold;
        l=l+1;
    end
        if signal(i)>=(-threshold) && signal(i)<threshold;
        signal1(i)=signal(i);
        end
end
disp('the amplitude scaled signal is :');
disp(signal1);
disp('total no of amplitude samples greater than -ive of threshold are: ');
disp(g);
disp('total no of amplitude samples less than threshold are: ');
disp(l);
stem(signal1,'r', 'Linewidth',2)
title('graph');
grid on
    