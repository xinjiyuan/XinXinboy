#include "ros/ros.h"
#include "std_msgs/Int8.h"

class subInt8
{
public:
    subInt8(){};
    void chatterCallBack(const std_msgs::Int8::ConstPtr& msg)
    {
        ROS_INFO("i get: [%d]", msg->data);
    }

private:
    
};

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "sub_int8_class");
    ros::NodeHandle n;
    subInt8 s8;

    ros::Subscriber sub = n.subscribe("chatter", 1000, &subInt8::chatterCallBack, &s8);

    ros::spin();

    return 0;
}

