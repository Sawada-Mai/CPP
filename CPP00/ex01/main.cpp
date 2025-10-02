// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ex01/PhoneBook.hpp"

int main(void) {
  PhoneBook PhoneBook;
  std::string user_input;

  while (true) {
    std::cout << "Type a command: ADD, SEARCH or EXIT" << std::endl;
    if (!std::getline(std::cin, user_input)) {
      break;
    }
    if (user_input == "ADD") {
      PhoneBook.add_contact();
    } else if (user_input == "SEARCH") {
      PhoneBook.search_contact();
    } else if (user_input == "EXIT") {
      std::cout << "Bye!" << std::endl;
      break;
    } else {
      std::cout << "Command not found\n" << std::endl;
    }
  }
  return 0;
}
