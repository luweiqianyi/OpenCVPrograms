//#include"./stdafx.h"
#include <iostream>
#include "MyLogUtil.h"

void MyLogUtilTest();


// ��������ʼ
int main()
{
	// TO LEARN: https://docs.opencv.org/master/db/deb/tutorial_display_image.html
	return 0;
}


void MyLogUtilTest()
{
	MyLogUtil util("cv2.log", My_severity_level::info);
	util.printLog("You have done error things!", My_severity_level::fatal);
}