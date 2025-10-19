// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
  : WrongAnimal("WrongCat") {
  std::cout << std::setw(10) << WRONG_CAT_PREFIX
            << "Default constructor" << std::endl;
  brain_ = new Brain();
}

WrongCat::WrongCat(const std::string& type)
  : WrongAnimal(type) {
  std::cout << std::setw(10) << WRONG_CAT_PREFIX
            << "String constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
  *this = other;
  std::cout << std::setw(10) << WRONG_CAT_PREFIX
            << "Copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  if (this != &other) {
    WrongAnimal::operator=(other);
  }
  std::cout << std::setw(10) << WRONG_CAT_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << std::setw(10) << WRONG_CAT_PREFIX << "Destructor" << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << std::setw(10) << WRONG_CAT_PREFIX << "Wrong Meow" << std::endl;
}
