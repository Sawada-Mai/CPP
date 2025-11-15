// Copyright 2025 msawada

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T, class F>
void iter(T* list, std::size_t len, void (*f)(T&)) {
  for (std::size_t i = 0; i < len; i++) {
    f(list[i]);
    std::cout << list[i] << std::endl;
  }
}

#endif
