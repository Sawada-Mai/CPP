// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
 : ClapTrap(name) {
  SetHitPoints(100);
  SetEnergyPoints(50);
  SetAttackDamage(20);
  std::cout << "ScavTrap " << GetName() << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
  : ClapTrap(obj) {
  std::cout << "ScavTrap " << GetName() << " copied." << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& obj) {
  if (this != &obj) {
    ClapTrap::operator=(obj);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << GetName() << " destructed." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (GetHitPoints() == 0 || GetEnergyPoints() == 0) {
    std::cout << "ScavTrap " << GetName() << " can't action." << std::endl; 
    return;
  }
  SetEnergyPoints(GetEnergyPoints() - 1);
  std::cout << "ScavTrap " << GetName() << " attacks " << target << ", causing " << GetAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << GetName() << " is now in Gate keeper mode." << std::endl;
}
