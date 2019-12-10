#include "core.hpp"
#include "imgproc.hpp"
#include "highgui.hpp"
#include "iostream"

using namespace cv;
using namespace std;

int main()
{
 Mat src1;
 src1 = imread("lena.jpg", cv :: IMREAD_COLOR);
 namedWindow("Original image", cv::WindowFlags::WINDOW_AUTOSIZE);
 imshow("Original image", src1);

Mat gray, edge, draw;
 cvtColor(src1, gray, cv :: COLOR_BGR2GRAY);

Canny(gray, edge, 50, 150, 3);

edge.convertTo(draw, CV_8U);
 namedWindow("image", cv::WindowFlags::WINDOW_AUTOSIZE);
 imshow("image", draw);

waitKey(0);
 return 0;
}
