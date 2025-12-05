// Copyright 2025 msawada

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <vector>

class PmergeMe {
 private:
  std::vector<int> list_vector_;
  std::deque<int> list_deque_;
 public:
  PmergeMe();
  PmergeMe(const PmergeMe& other);
  PmergeMe& operator=(const PmergeMe& other);
  ~PmergeMe();

  bool StrIsdigit(const std::string& str);
  bool pmerge(int argc, char** argv);
};

#endif
