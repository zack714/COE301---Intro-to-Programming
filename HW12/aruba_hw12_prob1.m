load hw12prob1.mat;
len = length(x);
disp(len)
A = [ones(len,1) x(1:end) sin(x(1:end))];
a0=0;
a1=0;
a2=0;
a = [a0 a1 a2];
rhs = [y(1:end)];
a = A \ rhs;
disp(a(3));

plot(x, y, '.','markersize',10);
hold on;
xplot = linspace(0,22,100);
yplot = a(1)+a(2)*xplot+a(3)*sin(xplot);
plot(xplot, yplot, 'linewidth',2);