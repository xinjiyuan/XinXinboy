#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#define M_PI 3.14159265358979323846

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "robot_turn");
    ros::NodeHandle ph;
    ros::Publisher vel_pub = ph.advertise<geometry_msgs::Twist>("/cmd_vel_mux/input/navi", 3);
    ros::Rate rate(60.0);

    geometry_msgs::Twist speed;
    speed = geometry_msgs::Twist();
    speed.linear.x = 0;
    speed.angular.z = M_PI/3;

    while (ros::ok())
    {
        // ROS_INFO("robot turn arround");
        vel_pub.publish(speed);
        ros::spinOnce();
        rate.sleep();
        /* code for loop body */
    }
    
    return 0;
}