// Copyright 2025 msawada

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

#define WRONG_CAT_PREFIX "WrongCat: "

class WrongCat : public WrongAnimal{
 private:
  Brain* brain_;

 public:
  WrongCat();
  explicit WrongCat(const std::string& type);
  WrongCat(const WrongCat& other);
  WrongCat& operator=(const WrongCat& other);
  ~WrongCat();

  void makeSound() const;
  void getBrain(int index) const;
  void setBrain(int index, const std::string& str);
};

#endif
