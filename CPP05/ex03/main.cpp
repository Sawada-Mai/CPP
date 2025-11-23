// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "=======================\n" << std::endl;
    return;
  }
  std::cout << "\n=========" << str << "=========" << std::endl;
}

int main(void) {
  Intern someRandomIntern;
  AForm* rrf;

  PutLine("Shrubbery Creation");
  rrf = someRandomIntern.makeForm("robotomy request", "TARGET");
  if (rrf)
    std::cout << "Form created: " << rrf->getName() << "\nTarget: " << rrf->getTarget() << std::endl;
  delete rrf;

  PutLine("Robotomy Request");
  rrf = someRandomIntern.makeForm("robotomy request", "TARGET");
  if (rrf)
    std::cout << "Form created: " << rrf->getName() << "\nTarget: " << rrf->getTarget() << std::endl;
  delete rrf;

  PutLine("Presidential Pardon");
  rrf = someRandomIntern.makeForm("robotomy request", "TARGET");
  if (rrf)
    std::cout << "Form created: " << rrf->getName() << "\nTarget: " << rrf->getTarget() << std::endl;
  delete rrf;

  PutLine("Wrong Form");
  rrf = someRandomIntern.makeForm("Wrong form", "TARGET");
  if (rrf)
    std::cout << "Form created: " << rrf->getName() << "\nTarget: " << rrf->getTarget() << std::endl;
  delete rrf;

  return 0;
}
