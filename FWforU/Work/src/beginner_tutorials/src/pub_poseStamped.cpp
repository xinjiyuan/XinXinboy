#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"

#include <cmath>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "pub_poseStamped");
    ros::NodeHandle nb;
    ros::Publisher Ppub = nb.advertise<geometry_msgs::PoseStamped>("somemessage", 10);
    ros::Rate loop_rate(10);

    double positionX, positionY, positionZ;
    double orientationX, orientationY, orientationZ, orientationW;

    double fixedOrientation = 0.1;
    orientationX = fixedOrientation;
    orientationY = fixedOrientation;
    orientationZ = fixedOrientation;
    orientationW = sqrt(1.0-3.0*fixedOrientation*fixedOrientation);

    double count = 0.0;

    while (ros::ok())
    {
        positionX = count;
        positionY = count;
        positionZ = count;

        geometry_msgs::PoseStamped msg;

        ros::Time currentTime = ros::Time::now();
        msg.header.stamp = currentTime;

        msg.pose.orientation.x = orientationX;
        msg.pose.orientation.y = orientationY;
        msg.pose.orientation.z = orientationZ;
        msg.pose.orientation.w = orientationW;

        ROS_INFO("publish the robot's position, nowtime and orientation");
        ROS_INFO("the position(x,y,z) is %f, %f, %f", msg.pose.position.x, msg.pose.position.y, msg.pose.position.y);
        ROS_INFO("the orientation(x,y,z,w) is %f, %f, %f, %f", msg.pose.orientation.x, msg.pose.orientation.y, msg.pose.orientation.z, msg.pose.orientation.w);
        ROS_INFO("the time is %f", msg.header.stamp.sec + 1e-9*msg.header.stamp.nsec);

        std::cout << "\n \n" << std::endl;

        Ppub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();

        count++;

    }
    

    return 0;
}