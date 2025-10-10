// Copyright 2025 msawada

#include <iostream>
#include "Fixed.hpp"

int main(void) {
  std::cout << "-----------Fixed a-----------\n";
  Fixed a;
  std::cout << "\n-----------Fixed b-----------\n";
  Fixed b(a);
  std::cout << "\n-----------Fixed c-----------\n";
  Fixed c;

  std::cout << "\n-----------b = a-----------\n";
  c = b;

  std::cout << "\n-----------a~c-----------\n";
  std::cout << a.getRawBits() << std::endl;
  std::cout << b.getRawBits() << std::endl;
  std::cout << c.getRawBits() << std::endl;

  return 0;
}
