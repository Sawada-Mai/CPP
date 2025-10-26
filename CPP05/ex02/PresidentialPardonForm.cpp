// Copyright 2025 msawada

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& name)
  : AForm(name, target, GRADE_TO_SIGN, GRADE_TO_EXECUTE) {
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

void PresidentialPardonForm::executeImpl(const Bureaucrat& executor) const {
}
