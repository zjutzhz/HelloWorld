#include "test.hpp"
#include <opencv2/opencv.hpp>
 
using namespace std;
using namespace cv;
 
int _tmain(int argc, _TCHAR* argv[])
{
	const char* imagename = "0271.jpg";
 
	//���ļ��ж���ͼ��
	Mat img = imread(imagename);
 
	//�������ͼ��ʧ��
	if(img.empty())
	{
		fprintf(stderr, "Can not load image %s\n", imagename);
		return -1;
	}
 
	//��ʾͼ��
	imshow("image", img);
 
	//�˺����ȴ�������������������ͷ���
	waitKey();
 
	return 0;
}