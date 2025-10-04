// Copyright 2025 msawada

#include <iomanip>
#include <iostream>
#include <string>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string* stringPTR = &str;
  std::string& stringREF = str;

  std::cout<< std::setw(11) << "String: " << &str << std::endl;
  std::cout<< std::setw(11) << "stringPTR: " << stringPTR << std::endl;
  std::cout<< std::setw(11) << "stringREF: " << &stringREF << "\n" << std::endl;

  std::cout << "stringPTR: " << *stringPTR << std::endl;
  std::cout << "stringREF: " << stringREF << std::endl;
}
