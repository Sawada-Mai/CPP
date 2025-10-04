// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ex01/Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
}


void Zombie::set_name(std::string name) {
  name_ = name;
}

void Zombie::announce() {
  std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
