// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& other) {
  *this = other;
}

Intern& Intern::operator=(const Intern& other) {
  if (this != &other) {
  }
  return *this;
}

Intern::~Intern() {
}

static AForm* MakeShrubbery(const std::string& target) {
  return new ShrubberyCreationForm(target);
}

static AForm* MakeRobotomy(const std::string& target) {
  return new RobotomyRequestForm(target);
}

static AForm* MakePresidential(const std::string& target) {
  return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) {
  std::string form_name[3] = {"shrubbery creation",
                              "robotomy request",
                              "presidential pardon"
                             };
  AForm* (*creators[4])(const std::string&) = {&MakeShrubbery,
                                               &MakeRobotomy,
                                               &MakePresidential
                                              };
  for (size_t i = 0; i < 3; i++) {
    if (name == form_name[i]) {
      std::cout << "Intern creates " << name << std::endl;
      return creators[i](target);
    }
  }
  std::cerr <<  "Error: form name " << name << " doesn't exist." << std::endl;
  return NULL;
}
