// Copyright 2025 msawada

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
 private:
  const std::string name_;
  const std::string target_;
  bool signed_;
  const int grade_to_sign_;
  const int grade_to_execute_;
  static const int GRADE_HIGH = 1;
  static const int GRADE_LOW = 150;
  AForm();

 protected:
  virtual void executeImpl(const std::string& target) const = 0;

 public:
  AForm(const std::string& name, const std::string& target, int grade_to_sign, int grade_to_execute);
  AForm(const AForm& other);
  AForm& operator=(const AForm& other);
  virtual ~AForm();

  const std::string& getName() const;
  const std::string& getTarget() const;
  int getSignGrade() const;
  int getExecuteGrade() const;

  void beSigned(const Bureaucrat& signer);
  void execute(const Bureaucrat& executor) const;

  class GradeTooLowException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
  class AlreadySignedException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
  class NotSignedException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
};

std::ostream& operator<<(std::ostream& os, AForm const& obj);

#endif
