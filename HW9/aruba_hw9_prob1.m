a = [1 2 3 4]
b = [5; 6; 7]
c = [a b'] % (')  transpose operator switches the rows and columns of a vector
d = [a'; b] 
disp('What is the default data type for all variables?')
disp(class(a(1))) % class gets the type of a variable, and disp is analgous to cout or printf

%%
clear
z = zeros(1,5) %returns a 1 by 5 matrix of zeros
one = ones(5,1)
inc = [2:2:100] %start at 2, increment by 2, and stop at 100 with the (:) operator.
dec = [100:-5:5] %similar to inc
f = -1
g = 5
x = rand(1,100)*(g-f)+f %create a row vector with 100 elements, that's scaled by the difference between the upper and lower bounds, and shifted by the left bound.
%%
x = linspace(-1,1,101)
y=x.^2
z=x.^3

figure
hold on
plot(x,x)
plot(x,y)
plot(x,z)
hold off
legend('y=x','y=x^2','y=x^3')
