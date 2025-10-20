// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
  : Animal("Cat") {
  std::cout << std::setw(10) << CAT_PREFIX
            << "Default constructor" << std::endl;
}

Cat::Cat(const std::string& type)
  : Animal(type) {
  std::cout << std::setw(10) << CAT_PREFIX << "String constructor" << std::endl;
}

Cat::Cat(const Cat& other)
  : Animal(other) {
  std::cout << std::setw(10) << CAT_PREFIX << "Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    Animal::operator=(other);
  }
  std::cout << std::setw(10) << CAT_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

Cat::~Cat() {
  std::cout << std::setw(10) << CAT_PREFIX << "Destructor" << std::endl;
}

void Cat::makeSound() const {
  std::cout << std::setw(10) << CAT_PREFIX << "Meow" << std::endl;
}
