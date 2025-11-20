// Copyright 2025 msawada

#include <algorithm>
#include <iostream>
#include "Span.hpp"

Span::Span(unsigned int n)
  : N(n) {
}

Span::Span(const Span& other)
  : N(other.N), list_(other.list_) {
}

Span& Span::operator=(const Span& other) {
  if (this != &other) {
    N = other.N;
    list_ = other.list_;
  }
  return *this;
}

Span::~Span() {
}


void Span::addNumber(unsigned int num) {

  if (list_.size() < N)
  {
    list_.push_back(num);
    return;
  } else {
    throw std::runtime_error("Span is full");
  }
}

int Span::shortestSpan() const {
  std::vector<int> tmp = list_;

  if (tmp.size() >= 2) {
    std::sort(tmp.begin(), tmp.end());
    int shortest_span = tmp.back();

    for (unsigned int i = 0; i < (tmp.size() - 1); i++) {
      if ((tmp[i + 1] - tmp[i]) < shortest_span)
        shortest_span = (tmp[i + 1] - tmp[i]);
    }
    return (shortest_span);
  } else  {
    throw std::runtime_error("Not enough elements to find a span");
  }
}

int Span::longestSpan() const {
  std::vector<int> tmp = list_;

  if (tmp.size() >= 2) {
    std::sort(tmp.begin(), tmp.end());
    return (tmp.back() - tmp.front());
  } else {
    throw std::runtime_error("Not enough elements to find a span");
  }
}

void AddRange(std::vector<int> first, std::vector<int> last) {
  if ((last - first) > N)
    throw std::runtime_error("Too many range");
  else if (first <= 0 || last <= 0)
    throw std::runtime_error("");

  while (first < last) {
    list_[first] =
    first++;
  }
}
