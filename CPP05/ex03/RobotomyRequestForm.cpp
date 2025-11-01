// Copyright 2025 msawada

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
  : AForm("RobotomyRequestForm", target, GRADE_TO_SIGN, GRADE_TO_EXECUTE) {
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

void RobotomyRequestForm::executeImpl(const std::string& target) const {
  std::cout << "brrrr........" << std::endl;

  std::srand(std::time(0));
  if (std::rand() % 2)
    std::cout << target << " robotomized successfully!" << std::endl;
  else
    std::cout << target << " failed." << std::endl;
}
