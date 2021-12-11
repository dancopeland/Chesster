// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice

#ifndef CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__TRAITS_HPP_
#define CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__TRAITS_HPP_

#include "chesster_interfaces/action/detail/move_chesster_arm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_Goal>()
{
  return "chesster_interfaces::action::MoveChessterArm_Goal";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_Goal>()
{
  return "chesster_interfaces/action/MoveChessterArm_Goal";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_Result>()
{
  return "chesster_interfaces::action::MoveChessterArm_Result";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_Result>()
{
  return "chesster_interfaces/action/MoveChessterArm_Result";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_Feedback>()
{
  return "chesster_interfaces::action::MoveChessterArm_Feedback";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_Feedback>()
{
  return "chesster_interfaces/action/MoveChessterArm_Feedback";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "chesster_interfaces/action/detail/move_chesster_arm__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>()
{
  return "chesster_interfaces::action::MoveChessterArm_SendGoal_Request";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>()
{
  return "chesster_interfaces/action/MoveChessterArm_SendGoal_Request";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<chesster_interfaces::action::MoveChessterArm_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<chesster_interfaces::action::MoveChessterArm_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>()
{
  return "chesster_interfaces::action::MoveChessterArm_SendGoal_Response";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>()
{
  return "chesster_interfaces/action/MoveChessterArm_SendGoal_Response";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_SendGoal>()
{
  return "chesster_interfaces::action::MoveChessterArm_SendGoal";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_SendGoal>()
{
  return "chesster_interfaces/action/MoveChessterArm_SendGoal";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>::value &&
    has_fixed_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>::value &&
    has_bounded_size<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<chesster_interfaces::action::MoveChessterArm_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<chesster_interfaces::action::MoveChessterArm_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chesster_interfaces::action::MoveChessterArm_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_GetResult_Request>()
{
  return "chesster_interfaces::action::MoveChessterArm_GetResult_Request";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_GetResult_Request>()
{
  return "chesster_interfaces/action/MoveChessterArm_GetResult_Request";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_GetResult_Response>()
{
  return "chesster_interfaces::action::MoveChessterArm_GetResult_Response";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_GetResult_Response>()
{
  return "chesster_interfaces/action/MoveChessterArm_GetResult_Response";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<chesster_interfaces::action::MoveChessterArm_Result>::value> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<chesster_interfaces::action::MoveChessterArm_Result>::value> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_GetResult>()
{
  return "chesster_interfaces::action::MoveChessterArm_GetResult";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_GetResult>()
{
  return "chesster_interfaces/action/MoveChessterArm_GetResult";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<chesster_interfaces::action::MoveChessterArm_GetResult_Request>::value &&
    has_fixed_size<chesster_interfaces::action::MoveChessterArm_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<chesster_interfaces::action::MoveChessterArm_GetResult_Request>::value &&
    has_bounded_size<chesster_interfaces::action::MoveChessterArm_GetResult_Response>::value
  >
{
};

template<>
struct is_service<chesster_interfaces::action::MoveChessterArm_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<chesster_interfaces::action::MoveChessterArm_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<chesster_interfaces::action::MoveChessterArm_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<chesster_interfaces::action::MoveChessterArm_FeedbackMessage>()
{
  return "chesster_interfaces::action::MoveChessterArm_FeedbackMessage";
}

template<>
inline const char * name<chesster_interfaces::action::MoveChessterArm_FeedbackMessage>()
{
  return "chesster_interfaces/action/MoveChessterArm_FeedbackMessage";
}

template<>
struct has_fixed_size<chesster_interfaces::action::MoveChessterArm_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<chesster_interfaces::action::MoveChessterArm_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<chesster_interfaces::action::MoveChessterArm_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<chesster_interfaces::action::MoveChessterArm_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<chesster_interfaces::action::MoveChessterArm_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<chesster_interfaces::action::MoveChessterArm>
  : std::true_type
{
};

template<>
struct is_action_goal<chesster_interfaces::action::MoveChessterArm_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<chesster_interfaces::action::MoveChessterArm_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<chesster_interfaces::action::MoveChessterArm_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__TRAITS_HPP_
