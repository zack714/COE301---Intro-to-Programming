aapl = load('aapl.txt');
msft = load('msft.txt');
qcom = load('qcom.txt');
wfc  = load('wfc.txt');
%means of stocks
aMean = sum(aapl(1:end))/length(aapl);
mMean = sum(msft(1:end))/length(msft);
qMean = sum(qcom(1:end))/length(qcom);
wMean = sum(wfc(1:end))/length(wfc);


aDiff = [aapl-aMean];
mDiff = [msft-mMean];
qDiff = [qcom-qMean];
wDiff = [wfc-wMean];

simAM = (aDiff'*mDiff)/(sqrt(aDiff'*aDiff)*sqrt(mDiff'*mDiff))
simAQ = (aDiff'*qDiff)/(sqrt(aDiff'*aDiff)*sqrt(qDiff'*qDiff))
simAW = (aDiff'*wDiff)/(sqrt(aDiff'*aDiff)*sqrt(wDiff'*wDiff))


plot(aapl)

hold on

plot(msft)
plot(qcom)
plot(wfc)
hold off

legend('Apple','Microsoft','Qualcomm','WFC')
