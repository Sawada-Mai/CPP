// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
  : Animal("Dog") {
  std::cout << std::setw(10) << DOG_PREFIX
            << "Default constructor" << std::endl;
}

Dog::Dog(const std::string& type)
  : Animal(type) {
  std::cout << std::setw(10) << DOG_PREFIX << "String constructor" << std::endl;
}

Dog::Dog(const Dog& other)
  : Animal(other) {
  std::cout << std::setw(10) << DOG_PREFIX << "Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  std::cout << std::setw(10) << DOG_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

Dog::~Dog() {
  std::cout << std::setw(10) << DOG_PREFIX << "Destructor" << std::endl;
}

void Dog::makeSound() const {
  std::cout << std::setw(10) << DOG_PREFIX << "Woof" << std::endl;
}
