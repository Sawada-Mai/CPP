// Copyright 2025 msawada

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

#define DOG_PREFIX "Dog: "

class Dog : public Animal{
 public:
  Dog();
  explicit Dog(const std::string& type);
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  ~Dog();

  void makeSound() const;
};

#endif
