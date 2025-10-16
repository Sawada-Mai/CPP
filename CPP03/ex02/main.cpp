// Copyright 2025 msawada

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

static void line(const char* title) {
  std::cout << "\n=== " << title << " ===" << std::endl;
}

int main() {
  line("Constructors");
  ClapTrap c("clappy");
  ScavTrap s("scavy");
  FragTrap f("fraggy");

  line("Initial stats");
  std::cout << "[ClapTrap] " << c.GetName()
            << " HP=" << c.GetHitPoints()
            << " EP=" << c.GetEnergyPoints()
            << " AD=" << c.GetAttackDamage() << std::endl;
  std::cout << "[ScavTrap] " << s.GetName()
            << " HP=" << s.GetHitPoints()
            << " EP=" << s.GetEnergyPoints()
            << " AD=" << s.GetAttackDamage() << std::endl;
  std::cout << "[FragTrap] " << f.GetName()
            << " HP=" << f.GetHitPoints()
            << " EP=" << f.GetEnergyPoints()
            << " AD=" << f.GetAttackDamage() << std::endl;

  line("Attack override check");
  c.attack("dummy");
  s.attack("dummy"); // メッセージがClapTrapと異なること
  f.attack("dummy"); // メッセージがClapTrapと異なること

  line("EP consumption & HP change");
  f.takeDamage(25);
  f.beRepaired(10);
  std::cout << "[FragTrap after dmg/repair] HP=" << f.GetHitPoints()
            << " EP=" << f.GetEnergyPoints() << std::endl;

  line("Special abilities");
  s.guardGate();      // ScavTrap固有
  f.highFivesGuys();  // FragTrap固有

  line("Copy & Assignment");
  FragTrap f2 = f;             // コピーコンストラクタ
  FragTrap f3("temp");
  f3 = f;                       // 代入演算子
  std::cout << "[FragTrap f2] " << f2.GetName()
            << " HP=" << f2.GetHitPoints()
            << " EP=" << f2.GetEnergyPoints()
            << " AD=" << f2.GetAttackDamage() << std::endl;
  std::cout << "[FragTrap f3] " << f3.GetName()
            << " HP=" << f3.GetHitPoints()
            << " EP=" << f3.GetEnergyPoints()
            << " AD=" << f3.GetAttackDamage() << std::endl;

  line("Energy drain loop (optional)");
  // EPが0になったら攻撃できないことの確認
  for (int i = 0; i < 110; ++i) {
    f.attack("dummy");
  }
  std::cout << "[FragTrap after drain] EP=" << f.GetEnergyPoints() << std::endl;

  line("Destructors (observe order at program end)");
  return 0;
}