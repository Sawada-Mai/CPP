// Copyright 2025 msawada

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "ex03/Weapon.hpp"

class HumanA
{
 private:
  std::string name_;
  Weapon& weapon_;
 public:
  HumanA(const std::string& name, Weapon& weapon);
  ~HumanA();
  void attack();
};


#endif
