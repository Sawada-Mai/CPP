// Copyright 2025 msawada

#include <iostream>
#include <string>
#include <vector>
#include "Span.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------------" << std::endl;
    return;
  }
  std::cout << "\n=========" << str << "=========" << std::endl;
}


int main() {
  {
    PutLine("Add Number function");
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
  }
  try {
    PutLine("Add Range function 1");
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> v(arr, arr + 5);
    Span sp(10);

    sp.AddRange(v.begin(), v.end());
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
  try {
    PutLine("Add Range function 2");
    int arr[] = {4, 2, 42, 24, 22};
    std::vector<int> v(arr, arr + 5);
    Span sp(10);

    sp.AddRange(v.begin(), v.end());
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    PutLine("Invalid parameter");
    int arr[] = {4, 2, 42, 24, 22};
    std::vector<int> v(arr, arr + 5);
    Span sp(10);

    sp.AddRange(v.end(), v.begin());
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  try {
    PutLine("Too many elemens");
    int arr[] = {4, 2, 42, 24, 22};
    std::vector<int> v(arr, arr + 5);
    Span sp(3);

    sp.AddRange(v.begin(), v.end());
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}
