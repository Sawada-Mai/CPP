// Copyright 2025 msawada

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
 private:
  const std::string name_;
  bool signed_;
  const int grade_to_sign_;
  const int grade_to_execute_;
  static const int GRADE_HIGH = 1;
  static const int GRADE_LOW = 150;
  Form();

 public:
  Form(const std::string& name, int grade_to_sign, int grade_to_execute);
  Form(const Form& other);
  Form& operator=(const Form& other);
  ~Form();

  const std::string& getName() const;
  int getSignGrade() const;

  void beSigned(Bureaucrat& obj);

  class GradeTooHighException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
};

// std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj);

#endif
