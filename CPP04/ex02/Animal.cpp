// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal() {
  std::cout << std::setw(10) << ANIMAL_PREFIX
            << "Default constructor" << std::endl;
}

Animal::Animal(const std::string& type)
  : type_(type) {
  std::cout << std::setw(10) << ANIMAL_PREFIX
            << "String constructor" << std::endl;
}

Animal::Animal(const Animal& other)
  : type_(other.type_) {
  std::cout << std::setw(10) << ANIMAL_PREFIX
            << "Copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    type_ = other.type_;
  }
  std::cout << std::setw(10) << ANIMAL_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

Animal::~Animal() {
  std::cout << std::setw(10) << ANIMAL_PREFIX << "Destructor" << std::endl;
}

const std::string& Animal::getType() const {
  return type_;
}

void Animal::makeSound() const {
  std::cout << std::setw(10) << ANIMAL_PREFIX << "Aaaaaaaa" << std::endl;
}
