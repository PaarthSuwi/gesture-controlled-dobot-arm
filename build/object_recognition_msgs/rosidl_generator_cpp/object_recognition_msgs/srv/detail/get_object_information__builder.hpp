// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__SRV__DETAIL__GET_OBJECT_INFORMATION__BUILDER_HPP_
#define OBJECT_RECOGNITION_MSGS__SRV__DETAIL__GET_OBJECT_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "object_recognition_msgs/srv/detail/get_object_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace object_recognition_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjectInformation_Request_type
{
public:
  Init_GetObjectInformation_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_recognition_msgs::srv::GetObjectInformation_Request type(::object_recognition_msgs::srv::GetObjectInformation_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_recognition_msgs::srv::GetObjectInformation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_recognition_msgs::srv::GetObjectInformation_Request>()
{
  return object_recognition_msgs::srv::builder::Init_GetObjectInformation_Request_type();
}

}  // namespace object_recognition_msgs


namespace object_recognition_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjectInformation_Response_information
{
public:
  Init_GetObjectInformation_Response_information()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::object_recognition_msgs::srv::GetObjectInformation_Response information(::object_recognition_msgs::srv::GetObjectInformation_Response::_information_type arg)
  {
    msg_.information = std::move(arg);
    return std::move(msg_);
  }

private:
  ::object_recognition_msgs::srv::GetObjectInformation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::object_recognition_msgs::srv::GetObjectInformation_Response>()
{
  return object_recognition_msgs::srv::builder::Init_GetObjectInformation_Response_information();
}

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__SRV__DETAIL__GET_OBJECT_INFORMATION__BUILDER_HPP_
