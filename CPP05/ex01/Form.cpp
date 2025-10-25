#include "Form.hpp"

Form::Form() {

}

Form::Form(const Form& other) {
  *this = other;
}

Form& Form::operator=(const Form& other) {
  if (this != &other) {
  }
  return *this;
}

Form::~Form() {

}



// Exception
const char* Form::GradeTooHighException::what() const throw() {
  return "Form: Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw() {
  return "Form: Grade is too low.";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
  return os;
}
