// Copyright 2025 msawada

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& name)
  : AForm(name, target, GRADE_TO_SIGN, GRADE_TO_EXECUTE) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
  : AForm(other) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
  if (this != &other) {
  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::executeImpl() const {
  std::srand(std::time(0));
}
