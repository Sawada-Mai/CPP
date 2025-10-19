// Copyright 2025 msawada

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

#define ANIMAL_PREFIX "Animal: "

class Animal {
 protected:
  std::string type_;

 public:
  Animal();
  explicit Animal(const std::string& type);
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);
  virtual ~Animal();

  const std::string& getType() const;
  virtual void makeSound() const;
};

#endif
