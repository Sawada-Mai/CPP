// Copyright 2025 msawada

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
 private:
  static const int GRADE_TO_SIGN = 72;
  static const int GRADE_TO_EXECUTE = 45;
  static const int GRADE_HIGH = 1;
  static const int GRADE_LOW = 150;

 protected:
  void executeImpl(const std::string& target) const;

 public:
  RobotomyRequestForm(const std::string& target);
  RobotomyRequestForm(const RobotomyRequestForm& other);
  RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
  ~RobotomyRequestForm();
};

#endif
