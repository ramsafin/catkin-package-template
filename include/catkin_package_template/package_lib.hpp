#pragma once

#include <string>

#include <ros/ros.h>

namespace catkin_package_template {

ros::NodeHandle init(int& argc, char** argv, const std::string& name);

} // namespace catkin_package_template