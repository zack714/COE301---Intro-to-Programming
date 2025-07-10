img=imread('butterfly.gif');
newImg = zeros(size(img));
n=15;
mid=(n-1)/2;
for i=1+mid:512-mid
    for j=1+mid:512-mid
        avg = mean(img(i-mid:i+mid,j-mid:j+mid),"all");
        newImg(i,j) = avg;
    end
end
imshow(newImg,[]);
%%
img=imread('butterfly.gif');
theta = deg2rad(90);
%A rotates the image in the (-1,0) direction so to counteract that we shift
%it in the (1,512) (based on i's and j's) direction
%in short, A is trying to shift the image to the left so we counter by
%shifting the image to the right
A = [cos(theta), sin(theta);-sin(theta), cos(theta)]; b = [0;513];
% Warp the image
imgout = 255*ones(size(img));
for ii=1:size(imgout,1)
for jj=1:size(imgout,2);
tmp = round(A*[ii;jj]+b);
imgout(tmp(1),tmp(2)) = img(ii,jj);
end
end
imshow(imgout,[]);
