// Copyright 2025 msawada

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
 private:
  unsigned int N;
  std::vector<int> list_;
  Span();

 public:
  Span(unsigned int n);
  Span(const Span& other);
  Span& operator=(const Span& other);
  ~Span();

  void addNumber(unsigned int num);
  int shortestSpan() const;
  int longestSpan() const;

  void AddRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
};

#endif
