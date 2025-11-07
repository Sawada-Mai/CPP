// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "Conversion.hpp"

int main(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Usage: ./ex00 <number>" << std::endl;
    return 1;
  }
  Conversion::Convert(argv[1]);
  return 0;
}
