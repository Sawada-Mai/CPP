// Copyright 2025 msawada

#include "iter.hpp"

void up(int& i) {
  i++;
}

int main(void) {
  int list[] = {1, 2, 3, 4, 5};

  iter(list, 5, up);
}
