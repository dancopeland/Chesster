// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from chesster_interfaces:action/MoveChessterArm.idl
// generated code does not contain a copyright notice

#ifndef CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__STRUCT_HPP_
#define CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_Goal __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_Goal __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_Goal_
{
  using Type = MoveChessterArm_Goal_<ContainerAllocator>;

  explicit MoveChessterArm_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  explicit MoveChessterArm_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  // field types and members
  using _request_type =
    bool;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const bool & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_Goal
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_Goal
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_Goal_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_Goal_

// alias to use template instance with default allocator
using MoveChessterArm_Goal =
  chesster_interfaces::action::MoveChessterArm_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces


#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_Result __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_Result __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_Result_
{
  using Type = MoveChessterArm_Result_<ContainerAllocator>;

  explicit MoveChessterArm_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->final_servo_0_angle = 0l;
      this->final_servo_1_angle = 0l;
      this->final_servo_2_angle = 0l;
      this->final_servo_3_angle = 0l;
      this->final_servo_4_angle = 0l;
      this->final_servo_5_angle = 0l;
    }
  }

  explicit MoveChessterArm_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
      this->final_servo_0_angle = 0l;
      this->final_servo_1_angle = 0l;
      this->final_servo_2_angle = 0l;
      this->final_servo_3_angle = 0l;
      this->final_servo_4_angle = 0l;
      this->final_servo_5_angle = 0l;
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _result_type result;
  using _final_servo_0_angle_type =
    int32_t;
  _final_servo_0_angle_type final_servo_0_angle;
  using _final_servo_1_angle_type =
    int32_t;
  _final_servo_1_angle_type final_servo_1_angle;
  using _final_servo_2_angle_type =
    int32_t;
  _final_servo_2_angle_type final_servo_2_angle;
  using _final_servo_3_angle_type =
    int32_t;
  _final_servo_3_angle_type final_servo_3_angle;
  using _final_servo_4_angle_type =
    int32_t;
  _final_servo_4_angle_type final_servo_4_angle;
  using _final_servo_5_angle_type =
    int32_t;
  _final_servo_5_angle_type final_servo_5_angle;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__final_servo_0_angle(
    const int32_t & _arg)
  {
    this->final_servo_0_angle = _arg;
    return *this;
  }
  Type & set__final_servo_1_angle(
    const int32_t & _arg)
  {
    this->final_servo_1_angle = _arg;
    return *this;
  }
  Type & set__final_servo_2_angle(
    const int32_t & _arg)
  {
    this->final_servo_2_angle = _arg;
    return *this;
  }
  Type & set__final_servo_3_angle(
    const int32_t & _arg)
  {
    this->final_servo_3_angle = _arg;
    return *this;
  }
  Type & set__final_servo_4_angle(
    const int32_t & _arg)
  {
    this->final_servo_4_angle = _arg;
    return *this;
  }
  Type & set__final_servo_5_angle(
    const int32_t & _arg)
  {
    this->final_servo_5_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_Result
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_Result
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->final_servo_0_angle != other.final_servo_0_angle) {
      return false;
    }
    if (this->final_servo_1_angle != other.final_servo_1_angle) {
      return false;
    }
    if (this->final_servo_2_angle != other.final_servo_2_angle) {
      return false;
    }
    if (this->final_servo_3_angle != other.final_servo_3_angle) {
      return false;
    }
    if (this->final_servo_4_angle != other.final_servo_4_angle) {
      return false;
    }
    if (this->final_servo_5_angle != other.final_servo_5_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_Result_

// alias to use template instance with default allocator
using MoveChessterArm_Result =
  chesster_interfaces::action::MoveChessterArm_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces


#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_Feedback __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_Feedback_
{
  using Type = MoveChessterArm_Feedback_<ContainerAllocator>;

  explicit MoveChessterArm_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->servo_0_angle = 0l;
      this->servo_1_angle = 0l;
      this->servo_2_angle = 0l;
      this->servo_3_angle = 0l;
      this->servo_4_angle = 0l;
      this->servo_5_angle = 0l;
    }
  }

  explicit MoveChessterArm_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->servo_0_angle = 0l;
      this->servo_1_angle = 0l;
      this->servo_2_angle = 0l;
      this->servo_3_angle = 0l;
      this->servo_4_angle = 0l;
      this->servo_5_angle = 0l;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;
  using _servo_0_angle_type =
    int32_t;
  _servo_0_angle_type servo_0_angle;
  using _servo_1_angle_type =
    int32_t;
  _servo_1_angle_type servo_1_angle;
  using _servo_2_angle_type =
    int32_t;
  _servo_2_angle_type servo_2_angle;
  using _servo_3_angle_type =
    int32_t;
  _servo_3_angle_type servo_3_angle;
  using _servo_4_angle_type =
    int32_t;
  _servo_4_angle_type servo_4_angle;
  using _servo_5_angle_type =
    int32_t;
  _servo_5_angle_type servo_5_angle;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__servo_0_angle(
    const int32_t & _arg)
  {
    this->servo_0_angle = _arg;
    return *this;
  }
  Type & set__servo_1_angle(
    const int32_t & _arg)
  {
    this->servo_1_angle = _arg;
    return *this;
  }
  Type & set__servo_2_angle(
    const int32_t & _arg)
  {
    this->servo_2_angle = _arg;
    return *this;
  }
  Type & set__servo_3_angle(
    const int32_t & _arg)
  {
    this->servo_3_angle = _arg;
    return *this;
  }
  Type & set__servo_4_angle(
    const int32_t & _arg)
  {
    this->servo_4_angle = _arg;
    return *this;
  }
  Type & set__servo_5_angle(
    const int32_t & _arg)
  {
    this->servo_5_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_Feedback
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_Feedback
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->servo_0_angle != other.servo_0_angle) {
      return false;
    }
    if (this->servo_1_angle != other.servo_1_angle) {
      return false;
    }
    if (this->servo_2_angle != other.servo_2_angle) {
      return false;
    }
    if (this->servo_3_angle != other.servo_3_angle) {
      return false;
    }
    if (this->servo_4_angle != other.servo_4_angle) {
      return false;
    }
    if (this->servo_5_angle != other.servo_5_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_Feedback_

// alias to use template instance with default allocator
using MoveChessterArm_Feedback =
  chesster_interfaces::action::MoveChessterArm_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "chesster_interfaces/action/detail/move_chesster_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Request __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_SendGoal_Request_
{
  using Type = MoveChessterArm_SendGoal_Request_<ContainerAllocator>;

  explicit MoveChessterArm_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MoveChessterArm_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const chesster_interfaces::action::MoveChessterArm_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Request
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Request
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_SendGoal_Request_

// alias to use template instance with default allocator
using MoveChessterArm_SendGoal_Request =
  chesster_interfaces::action::MoveChessterArm_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Response __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_SendGoal_Response_
{
  using Type = MoveChessterArm_SendGoal_Response_<ContainerAllocator>;

  explicit MoveChessterArm_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MoveChessterArm_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Response
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_SendGoal_Response
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_SendGoal_Response_

// alias to use template instance with default allocator
using MoveChessterArm_SendGoal_Response =
  chesster_interfaces::action::MoveChessterArm_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces

namespace chesster_interfaces
{

namespace action
{

struct MoveChessterArm_SendGoal
{
  using Request = chesster_interfaces::action::MoveChessterArm_SendGoal_Request;
  using Response = chesster_interfaces::action::MoveChessterArm_SendGoal_Response;
};

}  // namespace action

}  // namespace chesster_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Request __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_GetResult_Request_
{
  using Type = MoveChessterArm_GetResult_Request_<ContainerAllocator>;

  explicit MoveChessterArm_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MoveChessterArm_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Request
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Request
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_GetResult_Request_

// alias to use template instance with default allocator
using MoveChessterArm_GetResult_Request =
  chesster_interfaces::action::MoveChessterArm_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Response __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_GetResult_Response_
{
  using Type = MoveChessterArm_GetResult_Response_<ContainerAllocator>;

  explicit MoveChessterArm_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MoveChessterArm_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const chesster_interfaces::action::MoveChessterArm_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Response
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_GetResult_Response
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_GetResult_Response_

// alias to use template instance with default allocator
using MoveChessterArm_GetResult_Response =
  chesster_interfaces::action::MoveChessterArm_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces

namespace chesster_interfaces
{

namespace action
{

struct MoveChessterArm_GetResult
{
  using Request = chesster_interfaces::action::MoveChessterArm_GetResult_Request;
  using Response = chesster_interfaces::action::MoveChessterArm_GetResult_Response;
};

}  // namespace action

}  // namespace chesster_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "chesster_interfaces/action/detail/move_chesster_arm__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__chesster_interfaces__action__MoveChessterArm_FeedbackMessage __declspec(deprecated)
#endif

namespace chesster_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MoveChessterArm_FeedbackMessage_
{
  using Type = MoveChessterArm_FeedbackMessage_<ContainerAllocator>;

  explicit MoveChessterArm_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MoveChessterArm_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const chesster_interfaces::action::MoveChessterArm_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_FeedbackMessage
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__chesster_interfaces__action__MoveChessterArm_FeedbackMessage
    std::shared_ptr<chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveChessterArm_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveChessterArm_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveChessterArm_FeedbackMessage_

// alias to use template instance with default allocator
using MoveChessterArm_FeedbackMessage =
  chesster_interfaces::action::MoveChessterArm_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace chesster_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace chesster_interfaces
{

namespace action
{

struct MoveChessterArm
{
  /// The goal message defined in the action definition.
  using Goal = chesster_interfaces::action::MoveChessterArm_Goal;
  /// The result message defined in the action definition.
  using Result = chesster_interfaces::action::MoveChessterArm_Result;
  /// The feedback message defined in the action definition.
  using Feedback = chesster_interfaces::action::MoveChessterArm_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = chesster_interfaces::action::MoveChessterArm_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = chesster_interfaces::action::MoveChessterArm_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = chesster_interfaces::action::MoveChessterArm_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MoveChessterArm MoveChessterArm;

}  // namespace action

}  // namespace chesster_interfaces

#endif  // CHESSTER_INTERFACES__ACTION__DETAIL__MOVE_CHESSTER_ARM__STRUCT_HPP_
