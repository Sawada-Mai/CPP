// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------\n" << std::endl;
    return;
  }
  std::cout << "\n-----" << str << "-----" << std::endl;
}

int main() {
  ClapTrap a("Jon");
  ClapTrap b(a);
  ClapTrap c("Bob");

  c = b;

  PutLine("Attack action");
  a.attack("targetA");
  b.attack("targetB");
  c.attack("targetC");
  PutLine("");

  PutLine("Damage action");
  a.takeDamage(5);
  b.takeDamage(5);
  c.takeDamage(5);
  PutLine("");

  PutLine("Repaired action");
  a.beRepaired(3);
  b.beRepaired(3);
  c.beRepaired(3);
  PutLine("");

  return 0;
}
