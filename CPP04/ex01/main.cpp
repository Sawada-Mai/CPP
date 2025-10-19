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
  PutLine("meta");
  const Animal* meta = new Animal();
  std::cout << std::setw(10) << "Type: " << meta->getType() << " " << std::endl;
  meta->makeSound();
  PutLine("");

  PutLine("Dog");
  const Animal* j = new Dog();
  std::cout << std::setw(10) << "Type: " << j->getType() << " " << std::endl;
  j->makeSound();
  PutLine("");

  PutLine("Cat");
  const Animal* i = new Cat();
  std::cout << std::setw(10) << "Type: " << i->getType() << " " << std::endl;
  i->makeSound();
  PutLine("");

  PutLine("Wrong Cat");
  const WrongAnimal* c = new WrongCat();
  std::cout << std::setw(10) << "Type: " << c->getType() << " " << std::endl;
  c->makeSound();
  PutLine("");

  delete meta;
  PutLine("");
  delete j;
  PutLine("");
  delete i;
  PutLine("");
  delete c;

  return 0;
}
