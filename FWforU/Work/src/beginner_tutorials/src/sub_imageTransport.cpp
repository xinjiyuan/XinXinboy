#include "ros/ros.h"
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include <sstream>
#include <string>

int i = 1;

void imageCallback(const sensor_msgs::ImageConstPtr& msg)
{
    try
    {
        std::stringstream ss;
        std::string number;
        ss << i;
        ss >> number;
        cv::Mat img = cv_bridge::toCvShare(msg, "bgr8")->image;
        cv::imshow("view", img);
        // cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
        std::string img_name = "/home/wenjun/ros_image/rgb/" + number + ".png";
        i++;
        cv::imwrite(img_name, img);
        // cv::imwrite("/home/wenjun/ros_image/rgb/test.png", img);
        cv::waitKey(30);
    }
    catch (cv_bridge::Exception e)
    {
        ROS_ERROR("Could not convert from '%s' to 'bgr8'. ", msg->encoding.c_str());
        /* code for Catch */
    }
    
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "image_listener");
    ros::NodeHandle nh;
    cv::namedWindow("view");
    cv::startWindowThread();
    image_transport::ImageTransport it(nh);
    image_transport::Subscriber sub = it.subscribe("/camera/rgb/image_raw", 1, imageCallback);
    /*
    * /camera/rgb/image_raw
    * camera/image
    * /image_converter/output_video
    */
    ros::spin();
    
    cv::destroyWindow("view");
    return 0;
}