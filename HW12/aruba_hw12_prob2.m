tmax = 30;
t = linspace(0,tmax,5001);
dt = t(2)-t(1);

k = 4;
b=1;
m=1;
x = [0.5;10];
f = zeros(size(t));
f(t<4)=1;
A = [1 dt; -k/m*dt 1-b/m*dt];

xsave = zeros(2,length(t));
for n=1:length(t)
% Save the solution
xsave(:,n) = x;
% Advance time by 1 step
x = A*x + [0; f(n)/m*dt];
end
plot(t, xsave,'linewidth',2);
legend('position (m)','velocity (m/s)');
xlabel('time');

