// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout << std::setw(10) << WRONG_ANIMAL_PREFIX
            << "Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
  : type_(type) {
  std::cout << std::setw(10) << WRONG_ANIMAL_PREFIX
            << "String constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
  *this = other;
  std::cout << std::setw(10) << WRONG_ANIMAL_PREFIX
            << "Copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  std::cout << std::setw(10) << WRONG_ANIMAL_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << std::setw(10) << WRONG_ANIMAL_PREFIX
            << "Destructor" << std::endl;
}

const std::string& WrongAnimal::getType() const {
  return type_;
}

void WrongAnimal::makeSound() const {
  std::cout << std::setw(10) << WRONG_ANIMAL_PREFIX
            << "Wrong Aaaaaaaa" << std::endl;
}
