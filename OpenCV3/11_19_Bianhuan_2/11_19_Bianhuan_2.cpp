#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cv::Mat img_rgb, img_gry, img_cny;

    cv::namedWindow("Gray", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Canny", cv::WINDOW_AUTOSIZE);

    img_rgb = cv::imread(argv[1]);
    cv::cvtColor(img_rgb, img_gry, cv::COLOR_BGR2GRAY);
    cv::imshow("Gray", img_gry);
    //(example1)
    // cv::imshow("Gray", img_gry);

    // cv::Canny(img_gry, img_cny, 10, 100, 3, true);
    // cv::imshow("Canny", img_cny);
    //(excample2)
    cv::Mat img_pyr,img_pyr2;
    cv::pyrDown(img_gry, img_pyr);
    cv::pyrDown(img_pyr, img_pyr2);
    cv::Canny(img_pyr2, img_cny, 10, 100, 3, true);
    cv::imshow("Canny", img_cny);

    int x=16;
    int y=32;
    cv::Vec3b intensity = img_rgb.at< cv::Vec3b >(x,y)[0];
    uchar blue = intensity[0];
    uchar green = intensity[1];
    uchar red = intensity[2];
    cout << "At (x,y) = ("<< x << "," << y << "): (blue, green, red) = (" << (unsigned int)blue << "," << (unsigned int)green << "," << (unsigned int)red << endl;
    cout << "Gray pixel there is: " << (unsigned int)img_gry.at<uchar>(y, x) << endl;
    x /= 4; y /= 4;
    cout << "Pyramid2 pixel there is: " << (unsigned int)img_pyr2.at<uchar>(y, x) << endl;
    img_cny.at<uchar>(y,x) = 128;

    cv::waitKey(0);
    /* code */
    return 0;
}
