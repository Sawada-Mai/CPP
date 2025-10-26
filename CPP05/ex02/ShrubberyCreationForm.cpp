// Copyright 2025 msawada

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& name, const std::string& target)
  : AForm(name, target, GRADE_TO_SIGN, GRADE_TO_EXECUTE) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
  : AForm(other) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
  if (this != &other) {
  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::executeImpl() const {
  std::string output_name = std::string(getTarget())+ "_shrubbery";
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
}
