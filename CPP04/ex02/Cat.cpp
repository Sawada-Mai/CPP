// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
  : Animal("Cat") {
  brain_ = new Brain();
  std::cout << std::setw(10) << CAT_PREFIX
            << "Default constructor" << std::endl;
}

Cat::Cat(const std::string& type)
  : Animal(type) {
  brain_ = new Brain();
  std::cout << std::setw(10) << CAT_PREFIX << "String constructor" << std::endl;
}

Cat::Cat(const Cat& other)
  : Animal(other), brain_(new Brain(*other.brain_)) {
  std::cout << std::setw(10) << CAT_PREFIX << "Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    Animal::operator=(other);
    *brain_ = *other.brain_;
  }
  std::cout << std::setw(10) << CAT_PREFIX
            << "Copy assignment operator" << std::endl;
  return *this;
}

Cat::~Cat() {
  std::cout << std::setw(10) << CAT_PREFIX << "Destructor" << std::endl;
  delete brain_;
}

void Cat::makeSound() const {
  std::cout << std::setw(10) << CAT_PREFIX << "Meow" << std::endl;
}

void Cat::setBrain(int index, const std::string& str) {
  brain_->SetIdeas(index, str);
}

void Cat::getBrain(int index) const {
  std::cout << std::setw(10) << CAT_PREFIX
            << brain_->GetIdeas(index) << std::endl;
}
