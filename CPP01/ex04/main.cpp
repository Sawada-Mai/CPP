// Copyright 2025 msawada

#include <fstream>
#include <string>
#include <iostream>


int main(void) {
  std::ifstream ifs("test.txt");
  if(!ifs) {
    std::cerr << "Error: file can not open.";
    return 1;
  }
  std::string line;
  while (std::getline(ifs, line))
  {
    std::cout << line << std::endl;
  }
  
}