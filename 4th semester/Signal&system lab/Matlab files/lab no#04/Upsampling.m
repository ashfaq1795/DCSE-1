function Upsampling(original_signal)
disp('******task no 09*********');
n=input('please input the length of signal: ');
for i=1:n;
    original_signal(i)=input(['please enter sample no' num2str(i) ' = ']);
end
disp('the orignal signal is:')
disp(original_signal)
i=1;
for j=1:2*n;
    if mod(j,2)==0;
        up_sample(j)=0;
    else
        up_sample(j)=original_signal(i);
        i=i+1;
    end
    
end

disp('the orignal signal after down-sampling is:');
disp(up_sample);

subplot(2,1,1)
stem(original_signal,'g','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Original signal');
grid on

subplot(2,1,2)
stem(up_sample,'r','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Down-sampling');
grid on