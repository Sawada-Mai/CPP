// Copyright 2025 msawada

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade)
  : name_(name) {
  if (grade < GRADE_HIGH) {
    throw Bureaucrat::GradeTooHighException();
  } else if (grade > GRADE_LOW) {
    throw Bureaucrat::GradeTooLowException();
  }
  grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
  : name_(other.name_), grade_(other.grade_) {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
  if (this != &other) {
    grade_ = other.grade_;
  }
  return *this;
}

Bureaucrat::~Bureaucrat() {
}

// Getter
const std::string& Bureaucrat::getName() const {
  return name_;
}

int Bureaucrat::getGrade() const {
  return grade_;
}

// Change of grade
void Bureaucrat::UpGrade() {
  if (grade_ <= GRADE_HIGH) {
    throw Bureaucrat::GradeTooHighException();
  }
  grade_--;
}

void Bureaucrat::DownGrade() {
  if (grade_ >= GRADE_LOW) {
    throw Bureaucrat::GradeTooLowException();
  }
  grade_++;
}

void Bureaucrat::signForm(Form &form) {
  try {
    form.beSigned(*this);
    std::cout << name_ << " signed " << form.getName() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << name_ <<  " couldn't sign " << std::endl;
  }
}

// Exception
const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return "Bureaucrat: Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return "Bureaucrat: Grade is too low.";
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
  return os;
}
