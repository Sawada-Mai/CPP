// Copyright 2025 msawada

#include <iostream>
#include "ex03/HumanA.hpp"
#include "ex03/Weapon.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon)
 : name_(name), weapon_(weapon) {}

HumanA::~HumanA()
{
}


void HumanA::attack() {
  std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}
