// Copyright 2025 msawada

#include <string>
#include "ex00/Zombie.hpp"

void randomChump(std::string name) {
  Zombie zombie(name);

  zombie.announce();
  return;
}
