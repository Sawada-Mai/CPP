// Copyright 2025 msawada

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <class T>
typename T::iterator easyfind(T& container, int n) {
  typename T::iterator result = std::find(container.begin(), container.end(), n);
  if (result != container.end()) {
    return result;
  } else {
    throw std::runtime_error("Not found");
  }
}

#endif
