// Copyright 2025 msawada

#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, const std::string& target, int grade_to_sign, int grade_to_execute)
  : name_(name),
    target_(target),
    signed_(false),
    grade_to_sign_(grade_to_sign),
    grade_to_execute_(grade_to_execute) {
}

AForm::AForm(const AForm& other)
  : name_(other.name_),
    target_(other.target_),
    signed_(other.signed_),
    grade_to_sign_(other.grade_to_sign_),
    grade_to_execute_(other.grade_to_execute_) {
}

AForm& AForm::operator=(const AForm& other) {
  if (this != &other) {
    signed_ = other.signed_;
  }
  return *this;
}

AForm::~AForm() {
}

// Getter
const std::string& AForm::getName() const {
  return name_;
}

const std::string& AForm::getTarget() const {
  return target_;
}

int AForm::getSignGrade() const {
  return grade_to_sign_;
}

int AForm::getExecuteGrade() const {
  return grade_to_execute_;
}

// Sign Action
void AForm::beSigned(const Bureaucrat& signer) {
  if (signer.getGrade() > grade_to_sign_) {
    throw GradeTooLowException();
  } else if (signed_ == true) {
    throw AlreadySignedException();
  }
  signed_ = true;
}

// Execute Action
void AForm::execute(const Bureaucrat& executor) const {
  if (executor.getGrade() > grade_to_execute_) {
    throw GradeTooLowException();
  } else if (signed_ == false) {
    throw NotSignedException();
  }
  executeImpl(target_);
}

// Exception
const char* AForm::GradeTooLowException::what() const throw() {
  return "grade is too low.";
}

const char* AForm::AlreadySignedException::what() const throw() {
  return "it's already signed";
}

const char* AForm::NotSignedException::what() const throw() {
  return "it didn't sign";
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
  os << obj.getName() << ", grade_to_sign " << obj.getSignGrade()
     << ", grade_to_sign " << obj.getExecuteGrade() << ".";
  return os;
}

