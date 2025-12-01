// Copyright 2025 msawada

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <class T>
void iter(T* list, std::size_t const len, void (*f)(T&)) {
  for (std::size_t i = 0; i < len; i++) {
    f(list[i]);
  }
}

template <class T>
void iter(T const* list, std::size_t const len, void (*f)(T const&)) {
  for (std::size_t i = 0; i < len; i++) {
    f(list[i]);
  }
}

#endif
