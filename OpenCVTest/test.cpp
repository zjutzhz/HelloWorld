#include "test.hpp"
#include <opencv2/opencv.hpp>
 
using namespace std;
using namespace cv;
 
int _tmain(int argc, _TCHAR* argv[])
{
	const char* imagename = "0271.jpg";
 
	//从文件中读入图像
	Mat img = imread(imagename);
 
	//如果读入图像失败
	if(img.empty())
	{
		fprintf(stderr, "Can not load image %s\n", imagename);
		return -1;
	}
 
	//显示图像
	imshow("image", img);
 
	//此函数等待按键，按键盘任意键就返回
	waitKey();
 
	return 0;
}