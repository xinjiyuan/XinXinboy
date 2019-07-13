#include <opencv2/opencv.hpp>

void excample(const cv::Mat & image)
{
    cv::namedWindow("excample_in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("excample_out", cv::WINDOW_AUTOSIZE);

    cv::imshow("excample_in", image);

    cv::Mat out;
    cv::GaussianBlur(image, out, cv::Size(5,5), 3, 3);
    cv::GaussianBlur(out, out, cv::Size(5,5), 3, 3);

    cv::imshow("excample_out", out);
    cv::waitKey(0);
}

int main(int argc, char const *argv[])
{
    cv::Mat img1,img2;

    cv::namedWindow("show1", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("show2", cv::WINDOW_AUTOSIZE);
    img1 = cv::imread(argv[1]);
    cv::imshow("show1", img1);
    cv::pyrDown(img1, img2);
    cv::imshow("show2", img2);

    cv::waitKey(0);

    /* code */
    return 0;
}
