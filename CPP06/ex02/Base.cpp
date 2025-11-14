// Copyright 2025 msawada

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Base.hpp"

Base::~Base() {
}

Base * generate(void) {
  std::srand(std::time(0));
  int random_num = std::rand() % 3;
  std::cout << random_num << std::endl;
  switch(random_num) {
    case 0:
      std::cout << "A" << std::endl;
      return new A();
    case 1:
      std::cout << "B" << std::endl;
      return new B();
    case 2:
      std::cout << "C" << std::endl;
      return new C();
    default:
      return NULL;
  }
}

void identify(Base* p) {
  A* ap = dynamic_cast<A*>(p);
  B* bp = dynamic_cast<B*>(p);
  C* cp = dynamic_cast<C*>(p);

  if (ap)
    std::cout << "A" << std::endl;
  else if (bp)
    std::cout << "B" << std::endl;
  else if (cp)
    std::cout << "C" << std::endl;
  else
    std::cout << "None" << std::endl;
}

void identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
  } catch (...) {
    return;
  }
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
  } catch (...) {
    return;
  }
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
  } catch (...) {
    return;
  }
}
