from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import ThisLaunchFileDir, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Define paths to various configuration files
    rviz_config_path = PathJoinSubstitution([
        FindPackageShare('four_dof_arm'), 'config', 'rviz_config.rviz'
    ])

    # Define node for arm angle publisher
    arm_angle_publisher_node = Node(
        package='four_dof_arm',
        executable='arm_angle_publisher.py',
        name='arm_angle_publisher',
        output='screen',
        parameters=[{'use_sim_time': True}]
    )

    # Define node for arm controller
    arm_controller_node = Node(
        package='four_dof_arm',
        executable='arm_controller.py',
        name='arm_controller',
        output='screen',
        parameters=[{'use_sim_time': True}]
    )

    # Define node for sensor interface (if used)
    sensor_interface_node = Node(
        package='four_dof_arm',
        executable='sensor_interface.py',
        name='sensor_interface',
        output='screen',
        parameters=[{'use_sim_time': True}]
    )

    # Define node to launch RViz
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_path],
        output='screen'
    )

    # Include any other nodes or processes required for simulation, e.g., Gazebo

    return LaunchDescription([
        arm_angle_publisher_node,
        arm_controller_node,
        sensor_interface_node,
        rviz_node
        # Add other nodes/processes here
    ])
