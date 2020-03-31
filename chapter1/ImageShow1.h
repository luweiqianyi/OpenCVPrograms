#pragma once
#include "ImageShowInterface.h"
class ImageShow1 :
	public ImageShowInterface
{
	// Í¨¹ý ImageShowInterface ¼Ì³Ð
	virtual void showImage(const char* imagePath) override;
	virtual void showImage(std::string imagePath) override;
};

