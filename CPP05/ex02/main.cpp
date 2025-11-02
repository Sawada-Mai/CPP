// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
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

int main() {
  try {
    Bureaucrat alice("Alice", 1);
    Bureaucrat bob("Bob", 150);

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robot("Bender");
    PresidentialPardonForm pardon("Ford Prefect");

    PutLine("Signing Forms");
    alice.signForm(shrub);
    alice.signForm(robot);
    alice.signForm(pardon);

    PutLine("Executing Forms (by Alice)");
    alice.executeForm(shrub);
    alice.executeForm(robot);
    alice.executeForm(pardon);

    PutLine("Executing with Low-Grade Bureaucrat (Bob)")
    bob.executeForm(shrub);
  }
  catch (std::exception &e) {
    std::cerr << "Exception caught in main: " << e.what() << std::endl;
  }
  return 0;
}
