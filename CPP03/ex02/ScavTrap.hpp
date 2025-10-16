// Copyright 2025 msawada

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
  ScavTrap();
 public:
  explicit ScavTrap(std::string name);
  ScavTrap(const ScavTrap& obj);
  ScavTrap& operator = (const ScavTrap& obj);
  ~ScavTrap();

  void attack(const std::string& target);
  void guardGate();
};

#endif
