

#include <iostream>
#include <string>

int main(void)
{
  std::string s = "42.0f";

  
  std::cout << std::stod(s) << std::endl;

  std::cout << std::stof(s) << std::endl;

  std::cout << std::stoi(s) << std::endl;
}