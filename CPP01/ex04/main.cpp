// Copyright 2025 msawada

#include <fstream>
#include <string>
#include <iostream>


int main(void) {
  std::ifstream ifs("test.txt");
  std::ofstream file("test.replace");

  if (!ifs) {
    std::cerr << "Error: file can not open.";
    return 1;
  }
  if (!file) {
    std::cerr << "Error: file can not open.";
    return 1;
  }
  std::string line;
  std::string str;
  while (std::getline(ifs, line)) {
    std::cout << line << std::endl;
    str = MakeFileLine(line);
    file << str << std::endl;
  }
}
