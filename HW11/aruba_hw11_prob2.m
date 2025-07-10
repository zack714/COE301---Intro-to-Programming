img = imread('butterfly.gif');
%.gif files are read in as unsigned 8-bit integers. Convert to double
img=double(img)/255; %convert the range from [0,255] to [0,1]
imshow(img); %display the image
imlen = length(img);
disp(imlen)
%%
%create a brigher version of the image
bright = img;
bright(1:end) = bright(1:end)+0.5;
imshow(bright);
%%
%create a darker version of the image
dark = img;
dark(1:end) = dark(1:end)-0.4;
imshow(dark);
%%
%create a high constrast version of the image
hcon = img;
hcon(hcon<0.5) =  hcon(hcon<0.5)-0.3;
hcon(hcon>0.5) = hcon(hcon>0.5)+0.3;
%imshow(img);
imshow(hcon);
%%
%create a low constrast version of the image
lcon = img;
lcon(lcon<0.5) =  lcon(lcon<0.5)+0.3;
hcon(lcon>0.5) = lcon(lcon>0.5)-0.3;
%imshow(img);
imshow(lcon);


