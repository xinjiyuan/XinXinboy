#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cv::namedWindow("Shexiang", cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap(0);
    // if(argc==1)
    //     cap.open(0);
    // else
    //     cap.open(argv[1]);
    if(!cap.isOpened())
    {
        cerr << "Couldn't open capture. " << endl;
        return -1;
    }
    cv::Mat frame,a;
    bool stop = false;
    while(!stop)
    {
        cap >> frame;
        cv::cvtColor(frame, a, CV_BGR2GRAY);
        //cv::GaussianBlur(a,a,cv::Size(7, 7),1.5,1.5); //模糊化处理
        cv::imshow("1", a);
        if(cv::waitKey(30) >= 0)
            stop = true;
    }
    /* code */
    return 0;
}
