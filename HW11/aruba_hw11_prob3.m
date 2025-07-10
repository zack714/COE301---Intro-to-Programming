u = load('dat_hw11_prob3.mat');
fields = fieldnames(u);
list = u.x;
%disp(list)

y = billCalculator(list);
z = billCalculator2(list);
maxBill = max(y);
minBill = min(y);
meanBill = mean(y);
varBill = var(y);
disp('Max: ')
disp(maxBill)
disp('Min: ')
disp(minBill)
disp('Mean:')
disp(meanBill)
disp('variance: ')
disp(varBill)
%disp('BC with loops:')
%disp(y)
%disp("BC without loops: ")
%disp(z)
