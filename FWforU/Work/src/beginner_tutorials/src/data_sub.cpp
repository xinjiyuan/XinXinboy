#include <iostream>
#include "ros/ros.h"
#include "opencv2/highgui/highgui.hpp"
#include "cv_bridge/cv_bridge.h"
#include "image_transport/image_transport.h"
#include "sensor_msgs/Image.h"
// #include "sensor_msgs/CameraInfo.h"

cv::Mat colorImg;

void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{
    try
    {
        cv_bridge::CvImagePtr cv_ptr;
        cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        colorImg = cv_ptr->image;
        cv::imshow("view", colorImg);
        cv::waitKey(1);
    }
    catch (cv_bridge::Exception e)
    {
        ROS_ERROR("Could not convert from '%s' to 'bgr8'. ", msg->encoding.c_str);
        /* code for Catch */
    }
    
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "image_listener");
    ros::NodeHandle nh;
    cv::namedWindow("view", CV_WINDOW_NORMAL);
    cv::startWindowThread();
    image_transport::ImageTransport it(nh);
    image_transport::Subscriber sub = it.subscribe("/camera/rgb/image_raw", 1, imageCallback);
    ros::spin();
    cv::destroyWindow("view");
    return 0;
}