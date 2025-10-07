// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ex05/Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}


void Harl::debug() {
  std::cout << "debugやねん" << std::endl;
}

void Harl::info() {
  std::cout << "infoやねん" << std::endl;
}

void Harl::warning() {
  std::cout << "warningやねん" << std::endl;
}

void Harl::error() {
  std::cout << "errorやねん" << std::endl;
}

void Harl::complain(std::string level) {
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*funcs[4])() = {&Harl::debug, &Harl::info,
                              &Harl::warning, &Harl::error};
  for (size_t i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*funcs[i])();
      return;
    }
  }
  std::cerr << "Not found" << std::endl;
  return;
}
