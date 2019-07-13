#include <opencv2/opencv.hpp>


int main(int argc, char const *argv[])
{
    cv::Mat img = cv::imread(argv[1],-1);
    //cv::imread("upper_image_002.png");
    if(img.empty()) return -1;
    cv::namedWindow("show1", cv::WINDOW_AUTOSIZE);
    cv::imshow("show1",img);
    cv::waitKey(0);
    cv::destroyWindow("show1");
    /* code */
    return 0;
}
