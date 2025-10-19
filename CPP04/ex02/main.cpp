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
  Cat a;
  Dog b;

  std::cout << a.getType() << std::endl;
  std::cout << b.getType() << std::endl;

  a.makeSound();
  b.makeSound();

  a.setBrain(0, "aaa");
  a.getBrain(0);

  b.setBrain(2, "bbb");
  b.getBrain(2);

  return 0;
}
