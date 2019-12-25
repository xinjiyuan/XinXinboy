#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts2.h"

bool add(beginner_tutorials::AddTwoInts2::Request &req, 
        beginner_tutorials::AddTwoInts2::Response &res)
{
    res.sum = req.a + req.b;
    ROS_INFO("request: x=%ld, y=%ld", (long int)req.a, (long int)req.b);
    ROS_INFO("sending back response: [%ld]", (long int)res.sum);
    return true;
}

int main(int argc, char *argv[])
{
    /* code for main function */
    ros::init(argc, argv, "add_two_ints_server");
    ros::NodeHandle n;

    ros::ServiceServer service = n.advertiseService("add_two_ints", add);
    ROS_INFO("Ready to add two ints.");
    ros::spin();
    return 0;
}