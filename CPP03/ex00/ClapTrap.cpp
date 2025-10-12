// Copyright 2025 msawada

#include "ex00/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
  : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {}

ClapTrap::ClapTrap(const ClapTrap& obj)
  : name_(obj.name_) {
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj) {
  if (this != &obj) {
    name_ = obj.name_;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
}
