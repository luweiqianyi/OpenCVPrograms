#pragma once
#include "ImageShowInterface.h"
class ImageShow1 :
	public ImageShowInterface
{
	// ͨ�� ImageShowInterface �̳�
	virtual void showImage(const char* imagePath) override;
	virtual void showImage(std::string imagePath) override;
};

