#pragma once
#include "ImageOperationsInterface.h"
class ImageOperation1 :
	public ImageOperationsInterface
{
public:
	
	virtual void readImage(const char* imgPath) override;
	
	virtual void showImage(const char* imagePath) override;

};

