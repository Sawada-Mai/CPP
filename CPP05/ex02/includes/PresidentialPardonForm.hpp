// Copyright 2025 msawada

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
 private:
  static const int GRADE_TO_SIGN = 145;
  static const int GRADE_TO_EXECUTE = 137;
  static const int GRADE_HIGH = 1;
  static const int GRADE_LOW = 150;

 protected:
  void executeImpl(const std::string& target) const;

 public:
  PresidentialPardonForm(const std::string& target);
  PresidentialPardonForm(const PresidentialPardonForm& other);
  PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
  ~PresidentialPardonForm();
};

#endif
