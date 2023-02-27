function downsampling(original_signal)
disp('******task no 8*********');
n=input('please input the length of signal: ');
for i=1:n;
    original_signal(i)=input(['please enter sample no' num2str(i) ' = ']);
end
disp('the orignal signal is:')
disp(original_signal)
for i=1:n;
    if mod(original_signal(i),2)~=0;
        Down_sample(i)=original_signal(i);
    end
end
disp('the orignal signal after down-sampling is:');
disp(Down_sample);

subplot(2,1,1)
stem(original_signal,'g','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Original signal');
grid on

subplot(2,1,2)
stem(Down_sample,'r','Linewidth',2);
xlabel('x-axis');
ylabel('y-axis');
title('Down-sampling');
grid on