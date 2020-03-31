#pragma once
#include<string>
class ImageShowInterface
{
public:
	virtual void showImage(const char* imagePath) = 0;
	virtual void showImage(std::string imagePath) = 0;
};

