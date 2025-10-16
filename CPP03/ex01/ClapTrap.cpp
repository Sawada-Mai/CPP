// Copyright 2025 msawada

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
  : name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
  std::cout << "ClapTrap " << name_ << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
  : name_(obj.name_), hit_points_(obj.hit_points_), energy_points_(obj.energy_points_), attack_damage_(obj.attack_damage_) {
}

ClapTrap& ClapTrap::operator = (const ClapTrap& obj) {
  if (this != &obj) {
    name_ = obj.name_;
    hit_points_ = obj.hit_points_;
    energy_points_ = obj.energy_points_;
    attack_damage_ = obj.attack_damage_;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name_ << " destructed." << std::endl;
}

// データ設定関数
void ClapTrap::SetName(const std::string& name) {
  name_ = name;
}

void ClapTrap::SetHitPoints(const unsigned int hit_points) {
  hit_points_ = hit_points;
}

void ClapTrap::SetEnergyPoints(const unsigned int energy_points) {
  energy_points_ = energy_points;
}

void ClapTrap::SetAttackDamage(const unsigned int attack_damage) {
  attack_damage_ = attack_damage;
}

const std::string& ClapTrap::GetName() const {
  return name_;
}

const unsigned int& ClapTrap::GetHitPoints() const {
  return hit_points_;
}

const unsigned int& ClapTrap::GetEnergyPoints() const {
  return energy_points_;
}

const unsigned int& ClapTrap::GetAttackDamage() const {
  return attack_damage_;
}

// アクション系関数
void ClapTrap::attack(const std::string& target) {
  if (hit_points_ == 0 || energy_points_ == 0) {
    std::cout << "ClapTrap " << name_ << "can't action." << std::endl; 
    return;
  }
  std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << attack_damage_ << " points of damage!" << std::endl;
  energy_points_--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (amount > hit_points_) {
    hit_points_ = 0;
    std::cout << "ClapTrap " << name_ << " die..." << std::endl;
    return;
  }
  hit_points_ -= amount;
  std::cout << "ClapTrap " << name_ << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hit_points_ == 0 || energy_points_ == 0) {
    std::cout << "Can't repair." << std::endl;
    return;
  }
  hit_points_ += amount;
  energy_points_--;
  std::cout << "ClapTrap " << name_ << " is repaired for " << amount << " hit points!" << std::endl;
}
