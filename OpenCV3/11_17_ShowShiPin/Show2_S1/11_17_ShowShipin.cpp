#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main(int argc, char const *argv[])
{
    cv::namedWindow("Show2",cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open(argv[1]);
    cv::Mat frame;
    for(;;)
    {
        cap >> frame;
        if(frame.empty()) break;
        cv::imshow("Show2",frame);
        if(cv::waitKey(33) >= 0) break;
    }
    /* code */
    return 0;
}
