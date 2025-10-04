// Copyright 2025 msawada

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
 std::string type_;
public:
 Weapon();
 ~Weapon();
 void SetType(std::string* weapon);
 const std::string& GetType() const;
};


#endif
