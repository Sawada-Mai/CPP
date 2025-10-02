// Copyright 2025 msawada

#include <string>
#include "ex01/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie* horde;

  horde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    horde[i].set_name(name);
  }
  return horde;
}
