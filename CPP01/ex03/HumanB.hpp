// Copyright 2025 msawada

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "ex03/Weapon.hpp"

class HumanB
{
 private:
  std::string name_;
  Weapon* weapon_;
 public:
  HumanB(const std::string& name);
  ~HumanB();
  void setWeapon(Weapon& weapon);
  void attack();
};


#endif
