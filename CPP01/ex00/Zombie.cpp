// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ex00/Zombie.hpp"

Zombie::Zombie(const std::string name)
  :name_(name) {}

Zombie::~Zombie() {
  std::cout << name_ << " delete...\n";
}


void Zombie::announce() {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
