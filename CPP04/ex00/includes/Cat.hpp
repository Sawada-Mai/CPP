// Copyright 2025 msawada

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#define CAT_PREFIX "Cat: "

class Cat : public Animal{
 public:
  Cat();
  explicit Cat(const std::string& type);
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat();

  void makeSound() const;
};

#endif
