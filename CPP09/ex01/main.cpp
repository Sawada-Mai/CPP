// Copyright 2025 msawada

#include <fstream>
#include <iostream>
#include "RPN.hpp"

int main(int argc, char *argv[]) {
  RPN test;

  if (argc != 2) {
    std::cout << "./btc <formula (2 2 + 4 -...)>" << std::endl;
  }
  if (!test.PrintResult(argv[1])) {
    std::cerr << "Error" << std::endl;
    return 1;
  }
  return 0;
}
