// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice

#ifndef CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__BUILDER_HPP_
#define CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__BUILDER_HPP_

#include "chesster_interfaces/action/detail/move_chesster_arm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_Goal_request
{
public:
  Init_MoveChessterArm_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesster_interfaces::action::MoveChessterArm_Goal request(::chesster_interfaces::action::MoveChessterArm_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_Goal>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_Goal_request();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_Result_final_servo_5_angle
{
public:
  explicit Init_MoveChessterArm_Result_final_servo_5_angle(::chesster_interfaces::action::MoveChessterArm_Result & msg)
  : msg_(msg)
  {}
  ::chesster_interfaces::action::MoveChessterArm_Result final_servo_5_angle(::chesster_interfaces::action::MoveChessterArm_Result::_final_servo_5_angle_type arg)
  {
    msg_.final_servo_5_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

class Init_MoveChessterArm_Result_final_servo_4_angle
{
public:
  explicit Init_MoveChessterArm_Result_final_servo_4_angle(::chesster_interfaces::action::MoveChessterArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Result_final_servo_5_angle final_servo_4_angle(::chesster_interfaces::action::MoveChessterArm_Result::_final_servo_4_angle_type arg)
  {
    msg_.final_servo_4_angle = std::move(arg);
    return Init_MoveChessterArm_Result_final_servo_5_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

class Init_MoveChessterArm_Result_final_servo_3_angle
{
public:
  explicit Init_MoveChessterArm_Result_final_servo_3_angle(::chesster_interfaces::action::MoveChessterArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Result_final_servo_4_angle final_servo_3_angle(::chesster_interfaces::action::MoveChessterArm_Result::_final_servo_3_angle_type arg)
  {
    msg_.final_servo_3_angle = std::move(arg);
    return Init_MoveChessterArm_Result_final_servo_4_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

class Init_MoveChessterArm_Result_final_servo_2_angle
{
public:
  explicit Init_MoveChessterArm_Result_final_servo_2_angle(::chesster_interfaces::action::MoveChessterArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Result_final_servo_3_angle final_servo_2_angle(::chesster_interfaces::action::MoveChessterArm_Result::_final_servo_2_angle_type arg)
  {
    msg_.final_servo_2_angle = std::move(arg);
    return Init_MoveChessterArm_Result_final_servo_3_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

class Init_MoveChessterArm_Result_final_servo_1_angle
{
public:
  explicit Init_MoveChessterArm_Result_final_servo_1_angle(::chesster_interfaces::action::MoveChessterArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Result_final_servo_2_angle final_servo_1_angle(::chesster_interfaces::action::MoveChessterArm_Result::_final_servo_1_angle_type arg)
  {
    msg_.final_servo_1_angle = std::move(arg);
    return Init_MoveChessterArm_Result_final_servo_2_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

class Init_MoveChessterArm_Result_final_servo_0_angle
{
public:
  explicit Init_MoveChessterArm_Result_final_servo_0_angle(::chesster_interfaces::action::MoveChessterArm_Result & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Result_final_servo_1_angle final_servo_0_angle(::chesster_interfaces::action::MoveChessterArm_Result::_final_servo_0_angle_type arg)
  {
    msg_.final_servo_0_angle = std::move(arg);
    return Init_MoveChessterArm_Result_final_servo_1_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

class Init_MoveChessterArm_Result_result
{
public:
  Init_MoveChessterArm_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveChessterArm_Result_final_servo_0_angle result(::chesster_interfaces::action::MoveChessterArm_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_MoveChessterArm_Result_final_servo_0_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_Result>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_Result_result();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_Feedback_servo_5_angle
{
public:
  explicit Init_MoveChessterArm_Feedback_servo_5_angle(::chesster_interfaces::action::MoveChessterArm_Feedback & msg)
  : msg_(msg)
  {}
  ::chesster_interfaces::action::MoveChessterArm_Feedback servo_5_angle(::chesster_interfaces::action::MoveChessterArm_Feedback::_servo_5_angle_type arg)
  {
    msg_.servo_5_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

class Init_MoveChessterArm_Feedback_servo_4_angle
{
public:
  explicit Init_MoveChessterArm_Feedback_servo_4_angle(::chesster_interfaces::action::MoveChessterArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Feedback_servo_5_angle servo_4_angle(::chesster_interfaces::action::MoveChessterArm_Feedback::_servo_4_angle_type arg)
  {
    msg_.servo_4_angle = std::move(arg);
    return Init_MoveChessterArm_Feedback_servo_5_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

class Init_MoveChessterArm_Feedback_servo_3_angle
{
public:
  explicit Init_MoveChessterArm_Feedback_servo_3_angle(::chesster_interfaces::action::MoveChessterArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Feedback_servo_4_angle servo_3_angle(::chesster_interfaces::action::MoveChessterArm_Feedback::_servo_3_angle_type arg)
  {
    msg_.servo_3_angle = std::move(arg);
    return Init_MoveChessterArm_Feedback_servo_4_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

class Init_MoveChessterArm_Feedback_servo_2_angle
{
public:
  explicit Init_MoveChessterArm_Feedback_servo_2_angle(::chesster_interfaces::action::MoveChessterArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Feedback_servo_3_angle servo_2_angle(::chesster_interfaces::action::MoveChessterArm_Feedback::_servo_2_angle_type arg)
  {
    msg_.servo_2_angle = std::move(arg);
    return Init_MoveChessterArm_Feedback_servo_3_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

class Init_MoveChessterArm_Feedback_servo_1_angle
{
public:
  explicit Init_MoveChessterArm_Feedback_servo_1_angle(::chesster_interfaces::action::MoveChessterArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Feedback_servo_2_angle servo_1_angle(::chesster_interfaces::action::MoveChessterArm_Feedback::_servo_1_angle_type arg)
  {
    msg_.servo_1_angle = std::move(arg);
    return Init_MoveChessterArm_Feedback_servo_2_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

class Init_MoveChessterArm_Feedback_servo_0_angle
{
public:
  explicit Init_MoveChessterArm_Feedback_servo_0_angle(::chesster_interfaces::action::MoveChessterArm_Feedback & msg)
  : msg_(msg)
  {}
  Init_MoveChessterArm_Feedback_servo_1_angle servo_0_angle(::chesster_interfaces::action::MoveChessterArm_Feedback::_servo_0_angle_type arg)
  {
    msg_.servo_0_angle = std::move(arg);
    return Init_MoveChessterArm_Feedback_servo_1_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

class Init_MoveChessterArm_Feedback_status
{
public:
  Init_MoveChessterArm_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveChessterArm_Feedback_servo_0_angle status(::chesster_interfaces::action::MoveChessterArm_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveChessterArm_Feedback_servo_0_angle(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_Feedback>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_Feedback_status();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_SendGoal_Request_goal
{
public:
  explicit Init_MoveChessterArm_SendGoal_Request_goal(::chesster_interfaces::action::MoveChessterArm_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::chesster_interfaces::action::MoveChessterArm_SendGoal_Request goal(::chesster_interfaces::action::MoveChessterArm_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_SendGoal_Request msg_;
};

class Init_MoveChessterArm_SendGoal_Request_goal_id
{
public:
  Init_MoveChessterArm_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveChessterArm_SendGoal_Request_goal goal_id(::chesster_interfaces::action::MoveChessterArm_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveChessterArm_SendGoal_Request_goal(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_SendGoal_Request>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_SendGoal_Request_goal_id();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_SendGoal_Response_stamp
{
public:
  explicit Init_MoveChessterArm_SendGoal_Response_stamp(::chesster_interfaces::action::MoveChessterArm_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::chesster_interfaces::action::MoveChessterArm_SendGoal_Response stamp(::chesster_interfaces::action::MoveChessterArm_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_SendGoal_Response msg_;
};

class Init_MoveChessterArm_SendGoal_Response_accepted
{
public:
  Init_MoveChessterArm_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveChessterArm_SendGoal_Response_stamp accepted(::chesster_interfaces::action::MoveChessterArm_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveChessterArm_SendGoal_Response_stamp(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_SendGoal_Response>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_SendGoal_Response_accepted();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_GetResult_Request_goal_id
{
public:
  Init_MoveChessterArm_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::chesster_interfaces::action::MoveChessterArm_GetResult_Request goal_id(::chesster_interfaces::action::MoveChessterArm_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_GetResult_Request>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_GetResult_Request_goal_id();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_GetResult_Response_result
{
public:
  explicit Init_MoveChessterArm_GetResult_Response_result(::chesster_interfaces::action::MoveChessterArm_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::chesster_interfaces::action::MoveChessterArm_GetResult_Response result(::chesster_interfaces::action::MoveChessterArm_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_GetResult_Response msg_;
};

class Init_MoveChessterArm_GetResult_Response_status
{
public:
  Init_MoveChessterArm_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveChessterArm_GetResult_Response_result status(::chesster_interfaces::action::MoveChessterArm_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveChessterArm_GetResult_Response_result(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_GetResult_Response>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_GetResult_Response_status();
}

}  // namespace chesster_interfaces


namespace chesster_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveChessterArm_FeedbackMessage_feedback
{
public:
  explicit Init_MoveChessterArm_FeedbackMessage_feedback(::chesster_interfaces::action::MoveChessterArm_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::chesster_interfaces::action::MoveChessterArm_FeedbackMessage feedback(::chesster_interfaces::action::MoveChessterArm_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_FeedbackMessage msg_;
};

class Init_MoveChessterArm_FeedbackMessage_goal_id
{
public:
  Init_MoveChessterArm_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveChessterArm_FeedbackMessage_feedback goal_id(::chesster_interfaces::action::MoveChessterArm_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveChessterArm_FeedbackMessage_feedback(msg_);
  }

private:
  ::chesster_interfaces::action::MoveChessterArm_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::chesster_interfaces::action::MoveChessterArm_FeedbackMessage>()
{
  return chesster_interfaces::action::builder::Init_MoveChessterArm_FeedbackMessage_goal_id();
}

}  // namespace chesster_interfaces

#endif  // CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__BUILDER_HPP_
