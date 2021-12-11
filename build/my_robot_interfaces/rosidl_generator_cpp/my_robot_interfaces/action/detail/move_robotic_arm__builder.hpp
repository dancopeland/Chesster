// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:action/MoveRoboticArm.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__ACTION__DETAIL__MOVE_ROBOTIC_ARM__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__ACTION__DETAIL__MOVE_ROBOTIC_ARM__BUILDER_HPP_

#include "my_robot_interfaces/action/detail/move_robotic_arm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_Goal_request
{
public:
  Init_MoveRoboticArm_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_Goal request(::my_robot_interfaces::action::MoveRoboticArm_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_Goal>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_Goal_request();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_Result_final_servo_5_angle
{
public:
  explicit Init_MoveRoboticArm_Result_final_servo_5_angle(::my_robot_interfaces::action::MoveRoboticArm_Result & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_Result final_servo_5_angle(::my_robot_interfaces::action::MoveRoboticArm_Result::_final_servo_5_angle_type arg)
  {
    msg_.final_servo_5_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

class Init_MoveRoboticArm_Result_final_servo_4_angle
{
public:
  explicit Init_MoveRoboticArm_Result_final_servo_4_angle(::my_robot_interfaces::action::MoveRoboticArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Result_final_servo_5_angle final_servo_4_angle(::my_robot_interfaces::action::MoveRoboticArm_Result::_final_servo_4_angle_type arg)
  {
    msg_.final_servo_4_angle = std::move(arg);
    return Init_MoveRoboticArm_Result_final_servo_5_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

class Init_MoveRoboticArm_Result_final_servo_3_angle
{
public:
  explicit Init_MoveRoboticArm_Result_final_servo_3_angle(::my_robot_interfaces::action::MoveRoboticArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Result_final_servo_4_angle final_servo_3_angle(::my_robot_interfaces::action::MoveRoboticArm_Result::_final_servo_3_angle_type arg)
  {
    msg_.final_servo_3_angle = std::move(arg);
    return Init_MoveRoboticArm_Result_final_servo_4_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

class Init_MoveRoboticArm_Result_final_servo_2_angle
{
public:
  explicit Init_MoveRoboticArm_Result_final_servo_2_angle(::my_robot_interfaces::action::MoveRoboticArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Result_final_servo_3_angle final_servo_2_angle(::my_robot_interfaces::action::MoveRoboticArm_Result::_final_servo_2_angle_type arg)
  {
    msg_.final_servo_2_angle = std::move(arg);
    return Init_MoveRoboticArm_Result_final_servo_3_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

class Init_MoveRoboticArm_Result_final_servo_1_angle
{
public:
  explicit Init_MoveRoboticArm_Result_final_servo_1_angle(::my_robot_interfaces::action::MoveRoboticArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Result_final_servo_2_angle final_servo_1_angle(::my_robot_interfaces::action::MoveRoboticArm_Result::_final_servo_1_angle_type arg)
  {
    msg_.final_servo_1_angle = std::move(arg);
    return Init_MoveRoboticArm_Result_final_servo_2_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

class Init_MoveRoboticArm_Result_final_servo_0_angle
{
public:
  explicit Init_MoveRoboticArm_Result_final_servo_0_angle(::my_robot_interfaces::action::MoveRoboticArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Result_final_servo_1_angle final_servo_0_angle(::my_robot_interfaces::action::MoveRoboticArm_Result::_final_servo_0_angle_type arg)
  {
    msg_.final_servo_0_angle = std::move(arg);
    return Init_MoveRoboticArm_Result_final_servo_1_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

class Init_MoveRoboticArm_Result_result
{
public:
  Init_MoveRoboticArm_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRoboticArm_Result_final_servo_0_angle result(::my_robot_interfaces::action::MoveRoboticArm_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MoveRoboticArm_Result_final_servo_0_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_Result>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_Result_result();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_Feedback_servo_5_angle
{
public:
  explicit Init_MoveRoboticArm_Feedback_servo_5_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback servo_5_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_servo_5_angle_type arg)
  {
    msg_.servo_5_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

class Init_MoveRoboticArm_Feedback_servo_4_angle
{
public:
  explicit Init_MoveRoboticArm_Feedback_servo_4_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Feedback_servo_5_angle servo_4_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_servo_4_angle_type arg)
  {
    msg_.servo_4_angle = std::move(arg);
    return Init_MoveRoboticArm_Feedback_servo_5_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

class Init_MoveRoboticArm_Feedback_servo_3_angle
{
public:
  explicit Init_MoveRoboticArm_Feedback_servo_3_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Feedback_servo_4_angle servo_3_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_servo_3_angle_type arg)
  {
    msg_.servo_3_angle = std::move(arg);
    return Init_MoveRoboticArm_Feedback_servo_4_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

class Init_MoveRoboticArm_Feedback_servo_2_angle
{
public:
  explicit Init_MoveRoboticArm_Feedback_servo_2_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Feedback_servo_3_angle servo_2_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_servo_2_angle_type arg)
  {
    msg_.servo_2_angle = std::move(arg);
    return Init_MoveRoboticArm_Feedback_servo_3_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

class Init_MoveRoboticArm_Feedback_servo_1_angle
{
public:
  explicit Init_MoveRoboticArm_Feedback_servo_1_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Feedback_servo_2_angle servo_1_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_servo_1_angle_type arg)
  {
    msg_.servo_1_angle = std::move(arg);
    return Init_MoveRoboticArm_Feedback_servo_2_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

class Init_MoveRoboticArm_Feedback_servo_0_angle
{
public:
  explicit Init_MoveRoboticArm_Feedback_servo_0_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveRoboticArm_Feedback_servo_1_angle servo_0_angle(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_servo_0_angle_type arg)
  {
    msg_.servo_0_angle = std::move(arg);
    return Init_MoveRoboticArm_Feedback_servo_1_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

class Init_MoveRoboticArm_Feedback_status
{
public:
  Init_MoveRoboticArm_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRoboticArm_Feedback_servo_0_angle status(::my_robot_interfaces::action::MoveRoboticArm_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRoboticArm_Feedback_servo_0_angle(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_Feedback>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_Feedback_status();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_SendGoal_Request_goal
{
public:
  explicit Init_MoveRoboticArm_SendGoal_Request_goal(::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request goal(::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request msg_;
};

class Init_MoveRoboticArm_SendGoal_Request_goal_id
{
public:
  Init_MoveRoboticArm_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRoboticArm_SendGoal_Request_goal goal_id(::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRoboticArm_SendGoal_Request_goal(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Request>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_SendGoal_Request_goal_id();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_SendGoal_Response_stamp
{
public:
  explicit Init_MoveRoboticArm_SendGoal_Response_stamp(::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response stamp(::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response msg_;
};

class Init_MoveRoboticArm_SendGoal_Response_accepted
{
public:
  Init_MoveRoboticArm_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRoboticArm_SendGoal_Response_stamp accepted(::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveRoboticArm_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_SendGoal_Response>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_SendGoal_Response_accepted();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_GetResult_Request_goal_id
{
public:
  Init_MoveRoboticArm_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_GetResult_Request goal_id(::my_robot_interfaces::action::MoveRoboticArm_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_GetResult_Request>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_GetResult_Request_goal_id();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_GetResult_Response_result
{
public:
  explicit Init_MoveRoboticArm_GetResult_Response_result(::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response result(::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response msg_;
};

class Init_MoveRoboticArm_GetResult_Response_status
{
public:
  Init_MoveRoboticArm_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRoboticArm_GetResult_Response_result status(::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveRoboticArm_GetResult_Response_result(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_GetResult_Response>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_GetResult_Response_status();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveRoboticArm_FeedbackMessage_feedback
{
public:
  explicit Init_MoveRoboticArm_FeedbackMessage_feedback(::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage feedback(::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage msg_;
};

class Init_MoveRoboticArm_FeedbackMessage_goal_id
{
public:
  Init_MoveRoboticArm_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveRoboticArm_FeedbackMessage_feedback goal_id(::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveRoboticArm_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::action::MoveRoboticArm_FeedbackMessage>()
{
  return my_robot_interfaces::action::builder::Init_MoveRoboticArm_FeedbackMessage_goal_id();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__ACTION__DETAIL__MOVE_ROBOTIC_ARM__BUILDER_HPP_
