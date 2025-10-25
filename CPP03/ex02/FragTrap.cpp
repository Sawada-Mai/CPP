// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

static void PrintPrefix(std::string name) {
  std::cout << "FragTrap: " << name;
}

FragTrap::FragTrap(std::string name)
  : ClapTrap(name) {
  SetHitPoints(100);
  SetEnergyPoints(100);
  SetAttackDamage(30);
  PrintPrefix(GetName());
  std::cout << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
  : ClapTrap(obj) {
  PrintPrefix(GetName());
  std::cout << " copied." << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& obj) {
  if (this != &obj) {
    ClapTrap::operator=(obj);
  }
  return *this;
}

FragTrap::~FragTrap() {
  PrintPrefix(GetName());
  std::cout << " destructed." << std::endl;
}

void FragTrap::attack(const std::string& target) {
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

void FragTrap::highFivesGuys() {
  PrintPrefix(GetName());
  std::cout << " wants to high five everyone! " << std::endl;
}
