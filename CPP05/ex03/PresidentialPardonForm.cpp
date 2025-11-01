// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
  : AForm("PresidentialPardonForm", target, GRADE_TO_SIGN, GRADE_TO_EXECUTE) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
  : AForm(other) {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
  if (this != &other) {
    AForm::operator=(other);
  }
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::executeImpl(const std::string& target) const {
  std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
