n=3
x = linspace(0,2*pi,n)
y = sin(x)

plot(x,y)
title('n vs sin(x)')
xlabel('x')
ylabel('sin(x)')
hold on
n = 7
x = linspace(0,2*pi,n)
plot(x,sin(x))
n=21
x = linspace(0,2*pi,n)
plot(x,sin(x))
hold off
legend('n=3','n=7','n=21')

%%
t = linspace(0,2*pi,21)
y = sin(t)+cos(5*t)+0.5*sin(10*t)+0.8*cos(20*t)
plot(t,y)
hold on
t = linspace(0,2*pi,201)
y = sin(t)+cos(5*t)+0.5*sin(10*t)+0.8*cos(20*t)
plot(t,y)
hold off
legend('n=21','n=201')
%The apexes of the response when n=201 just touch the bottom
%of the response when n=21.