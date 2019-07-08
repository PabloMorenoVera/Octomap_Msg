#include "ros/ros.h"
#include "octomap_msgs/Octomap.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;
  ros::Publisher octo_pub = n.advertise<octomap_msgs::Octomap>("/octomap/custom", 1000);
  ros::Rate loop_rate(10);

  int count = 0;
  while (ros::ok())
  {
    octomap_msgs::Octomap msg;

    // Hay que crear un Octomap para meterlo en la variable
    msg.octomap = ;
    msg.data = "Octomap";

    ROS_INFO("%s", msg.data);

    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }
  return 0;
}
