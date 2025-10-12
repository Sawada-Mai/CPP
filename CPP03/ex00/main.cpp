// Copyright 2025 msawada

#include <ClapTrap.hpp>

int main() {
  ClapTrap a("Jon");
  a.attack("targetA");
  a.takeDamage(5);
  a.beRepaired(3);
  a.takeDamage(10);
  a.attack("targetB");
  return 0;
}
