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

  switch(random_num) {
    case 0:
      std::cout << "generat: A" << std::endl;
      return new A();
    case 1:
      std::cout << "generat: B" << std::endl;
      return new B();
    case 2:
      std::cout << "generat: C" << std::endl;
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
    std::cout << "identify_p: A" << std::endl;
  else if (bp)
    std::cout << "identify_p: B" << std::endl;
  else if (cp)
    std::cout << "identify_p: C" << std::endl;
  else
    std::cout << "identify_p: None" << std::endl;
}

void identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "identify_a: A" << std::endl;
    return;
  } catch (...) {}
  try {
    (void)dynamic_cast<B&>(p);
    std::cout << "identify_a: B" << std::endl;
    return;
  } catch (...) {}
  try {
    (void)dynamic_cast<C&>(p);
    std::cout << "identify_a: C" << std::endl;
    return;
  } catch (...) {}
  std::cout << "identify_a: None" << std::endl;
}
