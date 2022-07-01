#include "catkin_package_template/package_lib.hpp"

namespace catkin_package_template {

ros::NodeHandle init(int& argc, char** argv, const std::string& name) {
  ros::init(argc, argv, name);
  return ros::NodeHandle();
}

} // namespace catkin_package_template