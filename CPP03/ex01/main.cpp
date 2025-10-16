// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------\n" << std::endl;
    return;
  }
  std::cout << "\n-----" << str << "-----" << std::endl;
}

int main() {
  ScavTrap a("a");
  ScavTrap b("b");
  ScavTrap c(a);
  ScavTrap d("d");

  d = a;

  PutLine("Attack Action");
  a.attack("b");
  PutLine("");

  PutLine("EP Check");
  std::cout << a.GetName() << " EP=" << a.GetEnergyPoints() << "\n";
  std::cout << b.GetName() << " EP=" << b.GetEnergyPoints() << "\n";
  std::cout << c.GetName() << " EP=" << c.GetEnergyPoints() << "\n";
  std::cout << d.GetName() << " EP=" << d.GetEnergyPoints() << "\n";
  PutLine("");


  return 0;
}
