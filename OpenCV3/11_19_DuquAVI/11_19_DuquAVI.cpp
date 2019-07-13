#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cv::namedWindow("eee", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("aaa", cv::WINDOW_AUTOSIZE);

    cv::VideoCapture capture(argv[1]);
    double fps = capture.get(cv::CAP_PROP_FPS);
    cv::Size size(
        (int)capture.get(cv::CAP_PROP_FRAME_WIDTH),
        (int)capture.get(cv::CAP_PROP_FRAME_HEIGHT));

    cv::VideoWriter writer;
    writer.open(argv[2], CV_FOURCC('M','J','P','G'), fps, size);
//argv[2]是文件名，.avi格式
    cv::Mat logpolar_frame, bgr_frame;
    for(;;)
    {
        capture >> bgr_frame;
        if(bgr_frame.empty()) break;

        cv::imshow("eee", bgr_frame);

        cv::logPolar(
            bgr_frame,
            logpolar_frame,
            cv::Point2f(
                bgr_frame.cols/2,
                bgr_frame.rows/2
            ),
            40,
            cv::WARP_FILL_OUTLIERS
        );

        cv::imshow("aaa", logpolar_frame);
        writer << logpolar_frame;
        char c = cv::waitKey(10);
        if(c == 27) break;
    }
    capture.release();

    /* code */
    return 0;
}
