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
  SetEnergyPoints(50);
  SetAttackDamage(20);
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

void highFivesGuys(void) {
}
