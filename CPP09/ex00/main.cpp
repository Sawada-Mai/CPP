// Copyright 2025 msawada

#include <fstream>
#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
  BitcoinExchange test;

  if (argc != 2) {
    std::cout << "./btc <input file name>" << std::endl;
  }
  if (!test.btc(argv[1]))
    return 1;
  return 0;
}
