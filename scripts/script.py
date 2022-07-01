import rospy


def main():
  rospy.init_node("catkin_package_template_node")
  print(f'Node URI: {rospy.get_node_uri()}')


if __name__ == '__main__':
  main()
