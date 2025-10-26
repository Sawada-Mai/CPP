// Copyright 2025 msawada

#include "Brain.hpp"

#include <iomanip>
#include <iostream>
#include <string>

Brain::Brain() {
  std::cout << std::setw(10) << BRAIN_PREFIX
            << "Default constructor" << std::endl;
}

Brain::Brain(const Brain& other) {
  for (int i = 0; i < 100; i++) {
    ideas_[i] = other.ideas_[i];
  }
  std::cout << std::setw(10) << BRAIN_PREFIX
            << "Copy constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
  if (this != &other) {
    for (int i = 0; i < 100; i++) {
      ideas_[i] = other.ideas_[i];
    }
  }
  return *this;
}

Brain::~Brain() {
  std::cout << std::setw(10) << BRAIN_PREFIX << "Destructor" << std::endl;
}

void Brain::SetIdeas(const int index, const std::string& str) {
  ideas_[index] = str;
}

const std::string& Brain::GetIdeas(const int index) const {
  return ideas_[index];
}
