// Copyright 2025 msawada

#include <iostream>
#include <iosfwd> 
#include "Bureaucrat.hpp"
#include "Form.cpp"

int main(void) {
  Bureaucrat bob("Bob", 42);

  try {
    Form form("Contract", 50, 30);
      bob.signForm(form);
  } catch (std::exception& e) {
      std::cout << "Error: " << e.what() << "\n";
  }
  return 0;
}
