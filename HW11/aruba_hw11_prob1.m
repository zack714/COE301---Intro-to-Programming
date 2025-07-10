Fs = 44;
[x,Fs]=audioread('slowguitar.wav');
%sound(x,Fs);
D=round(Fs*40e-2); %delay in number of samples
samples = length(x);
y = x;
%with loops
for v = D+1:samples 
y(v) = x(v) + x(v-D);
end
%sound(y,Fs);

%without loops
z = x;
z(D+1:end) = x(D+1:end)+x(1:(samples-D)); %only the elements with an index
%greater than D need to be changed--the ones less than that will stay the
%same (since z by default equals x)
sound(z,Fs)