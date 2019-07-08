#include "ros/ros.h"
#include "octomap_msgs/Octomap.h"

void Callback(const octomap_msgs::Octomap::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("/octomap/custom", 1000, Callback);

  ros::spin();

  return 0;
}
