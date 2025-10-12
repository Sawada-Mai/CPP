// Copyright 2025 msawada

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
 private:
  std::string name_;
  int hit_points_;
  int energy_points_;
  int attack_damage_;
  ClapTrap();

 public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& obj);
  ClapTrap& operator = (const ClapTrap& obj);
  ~ClapTrap();
};

#endif
