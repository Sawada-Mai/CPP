// Copyright 2025 msawada

#include <iostream>
#include <fstream>
#include <string>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
  : AForm("ShrubberyCreationForm", target, GRADE_TO_SIGN, GRADE_TO_EXECUTE) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
  : AForm(other) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
  if (this != &other) {
    AForm::operator=(other);
  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::executeImpl(const std::string& target) const {
  std::string output_name = std::string(target)+ "_shrubbery";
  std::ofstream ofs(output_name.c_str());
  if (!ofs) {
    std::cerr << "Error: output_file can not open." << std::endl;
    return;
  }
  ofs <<
  "   /\\     \n"
  "  /  \\    \n"
  " /    \\   \n"
  "/      \\  \n"
  "---------  \n"
  "   | |     \n"
  "    -      \n";
  ofs.close();
  std::cout << target << "_shrubbery file created." << std::endl;
}
