#include <signal.h>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

ros::Publisher cmdVelPub;

void shutdown(int sig)
{
    cmdVelPub.publish(geometry_msgs::Twist());//机器人停止运动
    ROS_INFO("robots_move_goforward ended");
    ros::shutdown();
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "robots_move_goforward");
    ros::NodeHandle node;
    cmdVelPub = node.advertise<geometry_msgs::Twist>("/moble_base/commands/velocity", 1);
    ros::Rate loopRate(10);
    signal(SIGINT, shutdown);
    ROS_INFO("robots_move_goforward cpp start ..");
    geometry_msgs::Twist speed;
    while (ros::ok())
    {
        speed.linear.x = 0.1;
        speed.angular.z = 0;
        cmdVelPub.publish(speed);
        loopRate.sleep();
    }
    return 0;
}

