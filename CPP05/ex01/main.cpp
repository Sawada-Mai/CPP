// Copyright 2025 msawada

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
  try {
    Bureaucrat a("aaa", 151);
    std::cout << a << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    Bureaucrat b("aaa", 0);
    std::cout << b << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    Bureaucrat c("aaa", 1);
    c.UpGrade();
    std::cout << c << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    Bureaucrat d("aaa", 150);
    d.DownGrade();
    std::cout << d << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    Bureaucrat f("aaa", 145);
    f.DownGrade();
    std::cout << f << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
