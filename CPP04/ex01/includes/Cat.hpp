// Copyright 2025 msawada

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define CAT_PREFIX "Cat: "

class Cat : public Animal{
 private:
  Brain* brain_;

 public:
  Cat();
  explicit Cat(const std::string& type);
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat();

  void makeSound() const;
  void getBrain(int index) const;
  void setBrain(int index, const std::string& str);
};

#endif
