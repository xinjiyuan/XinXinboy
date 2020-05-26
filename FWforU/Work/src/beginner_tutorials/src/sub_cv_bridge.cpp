#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

static const std::string OPENCV_WINDOW = "Image window";

class ImageConverter
{
    ros::NodeHandle nh_;
    image_transport::ImageTransport it_;
    image_transport::Subscriber image_sub_;
    image_transport::Publisher image_pub_;
public:
    ImageConverter(): it_(nh_)
    {
        image_sub_ = it_.subscribe("camera/image", 1, &ImageConverter::imageCb, this);
        /*
        * /camera/rgb/image_raw
        * /camera/image_raw
        * camera/image
        */
        image_pub_ = it_.advertise("/image_converter/output_video", 1);
        cv::namedWindow(OPENCV_WINDOW);
    }
    virtual ~ImageConverter()
    {
        cv::destroyWindow(OPENCV_WINDOW);
    }

    void imageCb(const sensor_msgs::ImageConstPtr& msg)
    {
        cv_bridge::CvImagePtr cv_ptr;
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        }
        catch (cv_bridge::Exception& e)
        {
            ROS_ERROR("cv_bridge exception: %s", e.what());
            return;
            /* code for Catch */
        }

        if(cv_ptr->image.rows > 60 && cv_ptr->image.cols > 60)
            cv::circle(cv_ptr->image, cv::Point(50, 50), 10, CV_RGB(255,0,0));
        
        cv::imshow(OPENCV_WINDOW, cv_ptr->image);
        cv::waitKey(3);

        image_pub_.publish(cv_ptr->toImageMsg());
        
    }

};

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "image_converter");
    ImageConverter ic;
    ros::spin();
    return 0;
}