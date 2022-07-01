#include <iostream>

#include <ros/ros.h>
#include <ros/package.h>

#include "catkin_package_template/package_lib.hpp"

using namespace catkin_package_template;

int main(int argc, char **argv) {
  ros::NodeHandle nh = init(argc, argv, "catkin_package_template_cpp");
  const auto package_path = ros::package::getPath("catkin_package_template");

  std::cout << "Node path: " << package_path << std::endl;

  return 0;
}