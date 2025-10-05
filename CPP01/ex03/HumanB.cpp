// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ex03/HumanB.hpp"
#include "ex03/Weapon.hpp"

HumanB::HumanB(const std::string& name)
  : name_(name), weapon_(NULL) {}

HumanB::~HumanB() {
}


void HumanB::setWeapon(Weapon& weapon) {
  weapon_ = &weapon;
}

void HumanB::attack() {
  if (weapon_) {
    std::cout << name_ << " attacks with their "
              << weapon_->getType() << std::endl;
  } else {
    std::cout << name_ << " has no weapon" << std::endl;
  }
}
