#include <signal.h>
#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

ros::Publisher cmdVelPub;

// class move_goforward
// {
// private:
//     /* data */
// public:
//     move_goforward();
//     shutdown(int sig);
//     ~move_goforward();
// };

// move_goforward::move_goforward()
// {
//     ros::init(argc, argv, "robots_move_goforward");

//     ROS_INFO("To stop turtlebot CTRL + C");


// }

// move_goforward::~move_goforward()
// {
// }


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
    cmdVelPub = node.advertise<geometry_msgs::Twist>("chatter", 100);
    ros::Rate loopRate(10);
    signal(SIGINT, shutdown);
    ROS_INFO("robots_move_goforward cpp start ..");
    geometry_msgs::Twist speed;
    while (ros::ok())
    {
        speed.linear.x = 0.1;
        speed.angular.z = 0;
        cmdVelPub.publish(speed);
        ros::spinOnce();
        loopRate.sleep();
    }
    
    return 0;
}

