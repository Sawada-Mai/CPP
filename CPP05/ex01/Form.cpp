

#include <iostream>
#include <ostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int grade_to_sign, int grade_to_execute)
  : name_(name),
    signed_(false),
    grade_to_sign_(grade_to_sign),
    grade_to_execute_(grade_to_execute) {
}

Form::Form(const Form& other)
  : name_(other.name_),
    signed_(other.signed_),
    grade_to_sign_(other.grade_to_sign_),
    grade_to_execute_(other.grade_to_execute_) {
}

Form& Form::operator=(const Form& other) {
  if (this != &other) {
    signed_ = other.signed_;
  }
  return *this;
}

Form::~Form() {
}

// Getter
const std::string& Form::getName() const {
  return name_;
}

int Form::getSignGrade() const {
  return grade_to_sign_;
}

// Sign Action
void Form::beSigned(Bureaucrat& obj) {
  if (obj.getGrade() > grade_to_sign_) {
    throw GradeTooLowException();
  }
  signed_ = true;
}

// Exception
const char* Form::GradeTooHighException::what() const throw() {
  return "Form: Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw() {
  return "Form: Grade is too low.";
}

// std::ostream& operator<<(std::ostream& os, const Form& obj) {
//   os << obj.getName() << ", bureaucrat grade " << obj.getSignGrade() << ".";
//   return os;
// }
