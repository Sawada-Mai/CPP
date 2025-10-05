// Copyright 2025 msawada

#include "ex03/Weapon.hpp"

Weapon::Weapon(const std::string& type)
  : type_(type) {}

Weapon::~Weapon() {
}

void Weapon::setType(const std::string& type) {
  type_ = type;
}

const std::string& Weapon::getType() const {
  return type_;
}
