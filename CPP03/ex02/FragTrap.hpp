// Copyright 2025 msawada

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 private:
  FragTrap();
 public:
  explicit FragTrap(std::string name);
  FragTrap(const FragTrap& obj);
  FragTrap& operator = (const FragTrap& obj);
  ~FragTrap();

  void highFivesGuys(void);
};

#endif
