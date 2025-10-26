// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------\n" << std::endl;
    return;
  }
  std::cout << "\n---------" << str << "---------" << std::endl;
}

int main() {
  const size_t SIZE = 2;
  const Animal* list[SIZE];

  for (size_t i = 0; i < (SIZE / 2); i++) {
    list[i] = new Dog;
  }
  for (size_t i = (SIZE / 2); i < SIZE; i++) {
    list[i] = new Cat;
  }

  for (size_t i = 0; i < SIZE; i++) {
    delete list[i];
  }
  return 0;
}
