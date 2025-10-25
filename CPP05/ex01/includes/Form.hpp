#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
 private:

 public:
  Form();
  Form(const Form& other);
  Form& operator=(const Form& other);
  ~Form();

  void beSigned(Bureaucrat obj);

  class GradeTooHighException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
  class GradeTooLowException : public std::exception {
   public :
    virtual const char* what() const throw();
  };
};

#endif
