#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"

void chatterCallback(const geometry_msgs::PoseStamped::ConstPtr& msg)
{
    ROS_INFO("heard the pose messages");
    ROS_INFO("the position(x,y,z) is %f, %f, %f", msg->pose.position.x, msg->pose.position.y, msg->pose.position.z);
    ROS_INFO("the orientation(x,y,z,w) is %f, %f, %f, %f", msg->pose.orientation.x, msg->pose.orientation.y, msg->pose.orientation.z, msg->pose.orientation.w);
    ROS_INFO("the time is %f", msg->header.stamp.sec + 1e-9*msg->header.stamp.nsec);

    std::cout << "\n \n" << std::endl;
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "sub_poseStamped");

    ros::NodeHandle n;
    ros::Subscriber Psub = n.subscribe("somemessage", 10, chatterCallback);

    ros::spin();
    
    return 0;
}