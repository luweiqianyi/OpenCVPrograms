#pragma once
class ImageOperationsInterface
{
public:
	virtual void readImage(const char* imgPath) = 0;
	virtual void showImage(const char* imagePath) = 0;
};

