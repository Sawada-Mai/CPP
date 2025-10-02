// Copyright 2025 msawada

#include <iostream>

static void PrintUpper(char* str) {
  while (*str) {
    std::cout << static_cast<char>(std::toupper(*str));
    str++;
  }
}

int main(int argc, char* argv[]) {
  int i;

  i = 1;
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
  }
  while (i < argc) {
    PrintUpper(argv[i]);
    i++;
  }
  std::cout << '\n';
  return 0;
}
