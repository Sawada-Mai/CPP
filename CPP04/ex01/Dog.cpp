// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
  : Animal("Dog") {
  brain_ = new Brain();
  std::cout << std::setw(10) << DOG_PREFIX
            << "Default constructor" << std::endl;
}

Dog::Dog(const std::string& type)
  : Animal(type) {
  brain_ = new Brain();
  std::cout << std::setw(10) << DOG_PREFIX << "String constructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
  brain_ = new Brain(*other.brain_);
  std::cout << std::setw(10) << DOG_PREFIX << "Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other) {
    Animal::operator=(other);
    delete brain_;
    brain_ = new Brain(*other.brain_);
  }
  std::cout << std::setw(10) << DOG_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

Dog::~Dog() {
  std::cout << std::setw(10) << DOG_PREFIX << "Destructor" << std::endl;
  delete brain_;
}

void Dog::makeSound() const {
  std::cout << std::setw(10) << DOG_PREFIX << "Woof" << std::endl;
}

void Dog::getBrain(int index) const {
  std::cout << brain_->GetIdeas(index) << std::endl;
}

void Dog::setBrain(int index, const std::string& str) {
  brain_->SetIdeas(index, str);
}
