// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void PrintPrefix(std::string name) {
  std::cout << "ScavTrap: " << name;
}

ScavTrap::ScavTrap(std::string name)
  : ClapTrap(name) {
  SetHitPoints(100);
  SetEnergyPoints(50);
  SetAttackDamage(20);
  PrintPrefix(GetName());
  std::cout << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
  : ClapTrap(obj) {
  PrintPrefix(GetName());
  std::cout << " copied." << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& obj) {
  if (this != &obj) {
    ClapTrap::operator=(obj);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  PrintPrefix(GetName());
  std::cout << " destructed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (GetHitPoints() == 0 || GetEnergyPoints() == 0) {
    PrintPrefix(GetName());
    std::cout << " can't action." << std::endl;
    return;
  }
  SetEnergyPoints(GetEnergyPoints() - 1);
  PrintPrefix(GetName());
  std::cout << " attacks " << target << ", causing "
            << GetAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  PrintPrefix(GetName());
  std::cout << " is now in Gate keeper mode." << std::endl;
}
