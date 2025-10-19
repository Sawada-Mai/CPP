// Copyright 2025 msawada

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
 private:
  std::string name_;
  unsigned int hit_points_;
  unsigned int energy_points_;
  unsigned int attack_damage_;
  ClapTrap();

 public:
  explicit ClapTrap(const std::string& name);
  ClapTrap(const ClapTrap& obj);
  ClapTrap& operator = (const ClapTrap& obj);
  ~ClapTrap();

  const std::string& GetName() const;
  const unsigned int& GetHitPoints() const;
  const unsigned int& GetEnergyPoints() const;
  const unsigned int& GetAttackDamage() const;

  void SetName(const std::string& name);
  void SetHitPoints(const unsigned int hit_points);
  void SetEnergyPoints(const unsigned int energy_points);
  void SetAttackDamage(const unsigned int attack_damage);

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
