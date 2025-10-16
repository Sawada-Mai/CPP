// Copyright 2025 msawada

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
 private:
  std::string name_;
  unsigned int hit_points_;
  unsigned int energy_points_;
  unsigned int attack_damage_;
  ClapTrap();

 public:
  ClapTrap(const std::string& name);
  ClapTrap(const ClapTrap& obj);
  ClapTrap& operator = (const ClapTrap& obj);
  ~ClapTrap();

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
