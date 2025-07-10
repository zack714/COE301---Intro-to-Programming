function y = billCalculator(x)
N = length(x);
y = zeros(N,1);
for v = 1:N
if(x(v)<100)
    y(v) = x(v)*0.45 + 12;
elseif(x(v)>100 && x(v)<250)
    excess = x(v) -100;
    y(v) = 0.45*100 + excess*0.85 + 12;
elseif(x(v)>250)
    excess2 = x(v)-250;
    y(v) = 0.45*100 + 0.85*150 + 1.45*excess2+12;
end
end