// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------\n" << std::endl;
    return;
  }
  std::cout << "\n-----" << str << "-----" << std::endl;
}

int main() {
  ClapTrap a("a");
  ScavTrap b("b");
  FragTrap c("c");
  FragTrap d("d");

  d = c;

  PutLine("Attack Action");
  a.attack("a");
  b.attack("b");
  c.attack("c");
  PutLine("");

  PutLine("EP Check");
  std::cout << a.GetName() << " EP=" << a.GetEnergyPoints() << "\n";
  std::cout << b.GetName() << " EP=" << b.GetEnergyPoints() << "\n";
  std::cout << c.GetName() << " EP=" << c.GetEnergyPoints() << "\n";
  std::cout << d.GetName() << " EP=" << d.GetEnergyPoints() << "\n";
  PutLine("");

  PutLine("Special Action");
  b.guardGate();
  c.highFivesGuys();
  PutLine("");

  return 0;
}
