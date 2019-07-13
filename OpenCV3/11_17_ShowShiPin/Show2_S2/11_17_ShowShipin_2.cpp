#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <fstream>

using namespace std;

int g_slider_position = 0;
int g_run = 1, g_dontest = 0;
cv::VideoCapture g_cap;

void onTrackbarSlide(int pos, void *) //避免调整进度条位置的时候触发单步模式
{
    g_cap.set(cv::CAP_PROP_POS_FRAMES, pos); //使进度条移动到应该的位置

    if(!g_dontest)
    {
        g_run = 1;
    }
    g_dontest = 0;
}

int main(int argc, char const *argv[])
{
    cv::namedWindow("Show3",cv::WINDOW_AUTOSIZE);
    g_cap.open(argv[1]);
    int freams = (int) g_cap.get(cv::CAP_PROP_FRAME_COUNT);
    int tmpw = (int) g_cap.get(cv::CAP_PROP_FRAME_WIDTH);
    int tmph = (int) g_cap.get(cv::CAP_PROP_FRAME_HEIGHT);
    cout << "Video has" << freams << "freams of dimensions(" << tmpw
        << "," << tmph << "). " << endl;
    
    cv::createTrackbar("Position","Show3",&g_slider_position,freams,onTrackbarSlide);

    cv::Mat fream;
    for(;;)
    {
        if(g_run != 0)
        {
            g_cap >> fream;
            if(fream.empty()) break;
            int current_pos = (int) g_cap.get(cv::CAP_PROP_POS_FRAMES); //获取当前帧
            g_dontest = 1;

            cv::setTrackbarPos("Position","Show3",current_pos);
            cv::imshow("Show3",fream);

            g_run -= 1;
        }
        char c = (char) cv::waitKey(0);
        if(c == 's')
        {
            g_run = 1;
            cout << "Single step, run = " << g_run << endl;
        }
        if(c == 'r')
        {
            g_run = -1;
            cout << "Run Mode, run = " << g_run << endl;
        }
        if(c == 27)
            break;
    }
    /* code */
    return 0;
}

