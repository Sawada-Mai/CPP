// Copyright 2025 msawada

#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "./PmergeMe <number> <number>..." << std::endl;
    return 1;
  }

  PmergeMe test;
  test.pmerge()
}
