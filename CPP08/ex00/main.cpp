// Copyright 2025 msawada

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void) {
  std::vector<int> x;
  x.push_back(0);
  x.push_back(1);
  x.push_back(2);
  x.push_back(3);
  x.push_back(4);
  x.push_back(5);
  try {
    std::vector<int>::iterator result = easyfind(x, 2);
    std::cout << *result << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}
