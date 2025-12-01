// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "iter.hpp"

void ft_list_1(int& i) {
  std::cout << "list_1: " << i << std::endl;
}

void ft_list_2(int const& i) {
  std::cout << "list_2: " << i << std::endl;
}

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------------" << std::endl;
    return;
  }
  std::cout << "\n========= " << str << " =========" << std::endl;
}

int main(void) {
  int list_1[] = {1, 2, 3, 4, 5};
  const int list_2[] = {1, 2, 3, 4, 5};

  PutLine("non-const list");
  iter(list_1, 5, ft_list_1);
  PutLine("const list");
  iter(list_2, 5, ft_list_2);
}
