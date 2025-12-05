// Copyright 2025 msawada

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe& other) {
  //*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
  if (this != &other) {
  }
  return *this;
}

PmergeMe::~PmergeMe() {
}

bool PmergeMe::StrIsdigit(const std::string& str) {
  if (str.empty())
    return false;

  for (int i = 0; i < str.size(); i++) {
    if (!isdigit(str[i]))
      return false;
  }
  return true;
}

bool PmergeMe::pmerge(int argc, char** argv) {
  for (int i = 1; i < argc; i++) {
    if (!StrIsdigit(argv[i])) {
      std::cerr << "Error" << std::endl;
      return false;
    }

    long num = std::atoi(argv[i]);

    if (num <= 0 || num > INT_MAX)
      return false;

    int value = static_cast<int>(num);
    list_vector_.push_back(value);
    list_deque_.push_back(value);
  }
}
