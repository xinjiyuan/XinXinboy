#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "change_speed");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/cmd_vel_mux/input/navi", 10);
    ros::Rate rate(10.0);

    geometry_msgs::Twist speed;
    speed = geometry_msgs::Twist();

    speed.linear.x = 0;
    speed.linear.z = 0;

    float a = 0.02;
    int count = 0;

    while (ros::ok())
    {
        while (speed.linear.x < 0.2)
        {
            ROS_INFO("speed up");
            speed.linear.x += a;
            pub.publish(speed);
            rate.sleep();
        }

        ROS_INFO("forward");
        pub.publish(speed);
        count++;
        rate.sleep();

        if (count > 9)
        {
            while (speed.linear.x > 0)
            {
                ROS_INFO("slow down");
                speed.linear.x -= a;
                pub.publish(speed);
                rate.sleep();
            }
            ROS_INFO("stop");
            count = 0;
            // ros::spinOnce();
        }
    }
    
    
    return 0;
}