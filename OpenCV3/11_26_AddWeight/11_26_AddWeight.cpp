#include <opencv2/opencv.hpp>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    //example1:
    // cv::Mat pic1, pic2;
    // pic1 = cv::imread(argv[1],-1);
    // pic2 = cv::imread(argv[2],-1);
    // cv::Mat OutPic;
    // cv::addWeighted(pic1, 0.5, pic2, 0.5, 0, OutPic, -1);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example2:
    // cv::Mat src1 = cv::imread(argv[1], 1);
    // cv::Mat src2 = cv::imread(argv[2], 1);

    // if(argc == 9 && !src1.empty() && !src2.empty())
    // {
    //     int x = atoi(argv[3]);
    //     int y = atoi(argv[4]);
    //     int w = atoi(argv[5]);
    //     int h = atoi(argv[6]);
    //     double alpha = (double)atof(argv[7]);
    //     double beta = (double)atof(argv[8]);
    //     cv::Mat roi1(src1, cv::Rect(x,y,w,h));
    //     cv::Mat roi2(src2, cv::Rect(0,0,w,h));
    //     cv::addWeighted(roi1, alpha, roi2, beta, 0.0, roi1);

    //     cv::namedWindow("Add", 1);
    //     cv::imshow("Alpha", src2);
    //     cv::waitKey(0);
    // }
    //example3
    // cv::Mat pic1, pic2;
    // pic1 = cv::imread(argv[1],-1);
    // pic2 = cv::imread(argv[2],-1);
    // cv::Mat OutPic;
    // OutPic = pic1 + pic2;
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example4
    // cv::Mat pic1, pic2;
    // pic1 = cv::imread(argv[1],-1);
    // pic2 = cv::imread(argv[2],-1);
    // cv::Mat OutPic;
    // cv::bitwise_and(pic1, pic2, OutPic);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example5
    // cv::Mat pic1, pic2;
    // pic1 = cv::imread(argv[1],-1);
    // pic2 = cv::imread(argv[2],-1);
    // cv::Mat OutPic;
    // cv::bitwise_or(pic1, pic2, OutPic); //OutPic = pic1 | pic2
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example6:
    // cv::Mat pic1, pic2;
    // pic1 = cv::imread(argv[1],-1);
    // cv::Mat OutPic;
    // cv::bitwise_not(pic1, OutPic);//OutPic = !pic1;
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example7:
    // cv::Mat pic1, pic2;
    // pic1 = cv::imread("First.jpg");
    // pic2 = cv::imread("Second.jpg");
    // cv::Mat OutPic;
    // cv::compare(pic1,pic2,OutPic,cv::CMP_EQ);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example8:
    // cv::Mat pic1 = cv::imread("First.jpg");
    // cv::Mat OutPic1,OutPic2;
    // cv::convertScaleAbs(pic1, OutPic1, 1, 0);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic1);
    // cv::convertScaleAbs(pic1, OutPic2, 6, 100);
    // cv::namedWindow("Addx", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Addx", OutPic1);
    // cv::waitKey(0);
    //example9:
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat OutPic;
    // cv::cvtColor(pic1, OutPic, cv::COLOR_BGR2HLS, 0);
    // cv::namedWindow("Before", cv::WINDOW_AUTOSIZE);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::imshow("Before", pic1);
    // cv::waitKey(0);
    //example10:
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat pic2 = cv::imread("upper_image_002.png");
    // cv::Mat OutPic;
    // cv::divide(pic1,pic2, OutPic, 1, -1);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example11:
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat OutPic;
    // cv::flip(pic1, OutPic, -1);
    // cv::namedWindow("Before", cv::WINDOW_AUTOSIZE);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::imshow("Before", pic1);
    // cv::waitKey(0);
    //example12: fale
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat pic2 = cv::imread("upper_image_002.png");
    // cv::Mat pic3 = cv::imread("01.png");
    // cv::Mat OutPic;
    // cv::gemm(pic1, pic2, 3, pic3, 0, OutPic, 0);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example13: fale
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat pic2 = cv::imread("upper_image_002.png");
    // cv::Mat OutPic;
    // cv::idct(pic1, OutPic, 1);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example14: fale
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat OutPic;
    // cv::invert(pic1, OutPic, cv::DECOMP_SVD);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example15: 
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat OutPic;
    // uchar lutData[256 * 3];
	// int j = 0;
	// for (int i = 0; i<256; i++)
	// {
	// 	if (i <= 100)
	// 	{
	// 		lutData[i * 3] = 0;
	// 		lutData[i * 3 + 1] = 50;
	// 		lutData[i * 3 + 2] = 50;
	// 	}
	// 	if (i > 100 && i <= 200)
	// 	{
	// 		lutData[i * 3] = 100;
	// 		lutData[i * 3 + 1] = 10;
	// 		lutData[i * 3 + 2] = 200;
	// 	}
	// 	if (i > 200)
	// 	{
	// 		lutData[i * 3] = 255;
	// 		lutData[i * 3 + 1] = 200;
	// 		lutData[i * 3 + 2] = 100;
	// 	}
	// }
    // cv::Mat lut(1,256,CV_8UC3, lutData);
    // cv::LUT(pic1, lut, OutPic);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example16: 有待研究
    // cv::Mat pic1 = cv::imread("01.png");
    // cv::Mat pic2 = cv::imread("upper_image_002.png");
    // cv::Mat OutPic;
    // cv::max(pic1, pic2, OutPic);
    // cv::namedWindow("Add", cv::WINDOW_AUTOSIZE);
    // cv::imshow("Add", OutPic);
    // cv::waitKey(0);
    //example17: 
    // cv::Mat pic = cv::imread("01.png");
    // cv::Scalar nean = cv::mean(pic);
    // cout << "mean: " << nean[0] << endl;
    //example18:
    cv::Mat pic = cv::imread("01.png");
    cv::Mat g, color;
    cv::cvtColor(pic, g, CV_RGB2GRAY);
    cout << "channel: " << g.channels() << endl;
    cv::Mat Mean, MeanSD;
    double m,sd;
    m = cv::mean(g)[0];
    cout << "Mean: " << m << endl;
    cv::meanStdDev(g,Mean,MeanSD);
    m = Mean.at<double>(0,0);
    sd = MeanSD.at<double>(0,0);
    cout << "Mean: " << m << "MeanSD: " << sd << endl;
    cout << pic.cols << "  " << pic.rows << endl;
    cout << g.at<int>(0,0) << endl;
    /* code */
    return 0;
}
