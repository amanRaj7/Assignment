% Image Processing: Simple Operation on image
%% Load Image
clc, clearvars, close all;
image = imread("flower.jpg");
size(image)
%% operation on image
clc, clearvars -except image, close all;

% Channel Sepration
r_channel = image(:,:,1);
g_channel = image(:,:,2);
b_channel = image(:,:,3);
extractImage(:,:,1) = b_channel;
extractImage(:,:,2) = r_channel;
extractImage(:,:,3) = g_channel;

% Transpose image
rTranspose = r_channel';
gTranspose = g_channel';
bTranspose = b_channel';
transposeImage(:,:,1) = rTranspose;
transposeImage(:,:,2) = gTranspose;
transposeImage(:,:,3) = bTranspose;

% Vertical flipping
for i = 1:676
    flipImage(i,:,:) = image(676-i+1,:,:);
end

% Negation
rNegatation = 255-r_channel;
gNegatation = 255-g_channel;
bNegatation = 255-b_channel;
negImage(:,:,1) = rNegatation;
negImage(:,:,2) = gNegatation;
negImage(:,:,3) = bNegatation;

% Thresholding
grayImage = rgb2gray(image);
for i = 1:676
    for j = 1:990
        if(image(i,j)>=100)
            threshImage(i,j) = 0;
        else
            threshImage(i,j) = 255;
        end
    end
end

% Keep only necessary data
clearvars -except r_channel g_channel b_channel transposeImage flipImage negImage grayImage threshImage image extractImage;
%% Plot the image
figure(1);
subplot(2,2,1); imshow(r_channel); title("Red Channel");
subplot(2,2,2); imshow(g_channel); title("Greeen Channel");
subplot(2,2,3); imshow(b_channel); title("Blue Channel");
subplot(2,2,4); imshow(extractImage); title("Reorder Image");

figure(2);
imshow(transposeImage); title("Transposed Image");

figure(3);
imshow(flipImage); title("Vertically Flipped Image");

figure(4);
imshow(negImage); title("Negated Image");

figure(5);
subplot(1,2,1); imshow(grayImage); title("Grayscale Image");
subplot(1,2,2); imshow(threshImage); title("Thresholded Image");