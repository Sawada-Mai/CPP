// Copyright 2025 msawada

// Copyright 2025 msawada

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 private:
  /* data */
 public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& obj);
  ScavTrap& operator = (const ScavTrap& obj);
  ~ScavTrap();

  void attack(const std::string& target);
  void guardGate();
};

#endif
