// Copyright 2025 msawada

#include <iostream>
#include "ex01/Fixed.hpp"

int main(void) {
  std::cout << "-----------Fixed a-----------\n";
  Fixed a;
  std::cout << "\n-----------Fixed b-----------\n";
  Fixed const b(10);
  std::cout << "\n-----------Fixed c-----------\n";
  Fixed const c(42.42f);
  std::cout << "\n-----------Fixed d-----------\n";
  Fixed const d(b);

  std::cout << "\n-----------a = Fixed(1234.4321f)-----------\n";
  a = Fixed(1234.4321f);

  std::cout << "\n-----------a~d is----------\n";
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  std::cout << "\n-----------toInt()-----------\n";
  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;
  return 0;
}
