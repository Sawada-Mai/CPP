// Copyright 2025 msawada

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
 private:
  const std::string name_;
  int grade_;
  static const int GRADE_HIGH = 1;
  static const int GRADE_LOW = 150;

  Bureaucrat();

 public:
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& other);
  Bureaucrat& operator=(const Bureaucrat& other);
  ~Bureaucrat();

  const std::string& getName() const;
  int getGrade() const;

  void UpGrade();
  void DownGrade();

  class GradeTooHighException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& obj);

#endif
