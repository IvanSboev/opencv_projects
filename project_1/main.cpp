#include "objdetect.hpp"
#include "highgui.hpp"
#include "imgproc.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;
using namespace cv;
int main()
{
 Mat image;
 image = imread("lena.jpg", cv :: IMREAD_COLOR);
 namedWindow("window1", 1); imshow("window1", image);

// Load Face cascade (.xml file)
 CascadeClassifier face_cascade;
 face_cascade.load("haarcascade_frontalface_alt2.xml");

// Detect faces
 std::vector<Rect> faces;
 face_cascade.detectMultiScale(image, faces, 1.1, 2, 0 | cv::CASCADE_SCALE_IMAGE, Size(30, 30));

// Draw circles on the detected faces
 for (int i = 0; i < faces.size(); i++)
 {
 Point center(faces[i].x + faces[i].width*0.5, faces[i].y + faces[i].height*0.5);
 ellipse(image, center, Size(faces[i].width*0.5, faces[i].height*0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
 }
 imshow("Detected Face", image);

waitKey(0);
 return 0;
}
