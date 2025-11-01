// Copyright 2025 msawada

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
 private:
  static const int GRADE_TO_SIGN = 25;
  static const int GRADE_TO_EXECUTE = 5;
  static const int GRADE_HIGH = 1;
  static const int GRADE_LOW = 150;

 protected:
  void executeImpl(const std::string& target) const;

 public:
  ShrubberyCreationForm(const std::string& target);
  ShrubberyCreationForm(const ShrubberyCreationForm& other);
  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
  ~ShrubberyCreationForm();
};

#endif
