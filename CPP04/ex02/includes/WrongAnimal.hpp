// Copyright 2025 msawada

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

#define WRONG_ANIMAL_PREFIX "WrongAnimal: "

class WrongAnimal {
public:
 protected:
  std::string type_;

 public:
  WrongAnimal();
  explicit WrongAnimal(const std::string& type);
  WrongAnimal(const WrongAnimal& other);
  WrongAnimal& operator=(const WrongAnimal& other);
  ~WrongAnimal();

  const std::string& getType() const;
  void makeSound() const;
};

#endif
