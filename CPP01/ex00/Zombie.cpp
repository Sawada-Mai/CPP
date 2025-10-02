// Copyright 2025 msawada

#include <string>
#include <iostream>
#include "ex00/Zombie.hpp"

Zombie::Zombie(const std::string name) {
  name_ = name;
}

Zombie::~Zombie() {
}


void Zombie::announce() {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
