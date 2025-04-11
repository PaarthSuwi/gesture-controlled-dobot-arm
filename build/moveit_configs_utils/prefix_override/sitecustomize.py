import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/suwi/ros2_4dof_arm/install/moveit_configs_utils'
