// Copyright 2025 msawada

#include <string>
#include "ex00/Zombie.hpp"

Zombie* newZombie(std::string name) {
  Zombie* zombie;

  zombie = new Zombie(name);
  return zombie;
}
