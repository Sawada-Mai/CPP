// Copyright 2025 msawada

#include "ex00/Zombie.hpp"

int main(void) {
  Zombie* zombie;

  zombie = newZombie("aaa");
  zombie->announce();
  randomChump("bbb");
  delete zombie;
  }
