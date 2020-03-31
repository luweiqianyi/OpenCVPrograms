//#include"./stdafx.h"
#include "ImageShow1.h"
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/core/cvstd.hpp>

void ImageShow1::showImage(const char* imagePath)
{
	/*cv::String imageName(imagePath);
	cv::Mat image;
	image = cv::imread(cv::samples::findFile(imageName), cv::ImreadModes::IMREAD_COLOR);
	if (image.empty()) {
		return;
	}*/
}

void ImageShow1::showImage(std::string imagePath)
{
}
