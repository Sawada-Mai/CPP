// Copyright 2025 msawada

#include <iostream>
#include <stack>
#include "RPN.hpp"

RPN::RPN() {
}

RPN::~RPN() {
}

bool RPN::IsSign(char c) {
  if (c == '+' || c == '-' || c == '/' || c == '*')
    return true;
  return false;
}

bool RPN::StrIsFormula(const std::string& str) {
  int flag = 0;

  if (str.empty())
    return false;

  for (size_t i = 0; i < str.size(); i++) {
    if (IsSign(str[i]) && flag == 0) {
      flag = 1;
    } else if (isdigit(str[i]) && flag == 0) {
      flag = 1;
    } else if (str[i] == ' ' && flag == 1) {
      flag = 0;
    } else
      return false;
  }

  return true;
}

int RPN::Calculate(int num_1, int num_2, char c) {
  if (c == '+')
    return num_1 + num_2;
  else if (c == '-')
    return num_1 - num_2;
  else if (c == '/')
    return num_1 / num_2;
  else if (c == '*')
    return num_1 * num_2;
  return 0;
}

bool RPN::Argo(const std::string& str) {
  std::stack<int> list;
  int result;
  int num_1;
  int num_2;

  for (size_t i = 0; i < str.size(); i++) {
    if (isdigit(str[i])) {
      list.push(str[i] - '0');
    } else if (IsSign(str[i]) && list.size() >= 2) {
      num_2 = list.top();
      list.pop();
      num_1 = list.top();
      list.pop();
      if (str[i] == '/' && num_2 == 0)
        return false;
      result = Calculate(num_1, num_2, str[i]);
      list.push(result);
    } else if (str[i] == ' '){
      continue;
    } else
      return false;
  }
  if (list.size() != 1)
    return false;
  result = list.top();
  std::cout << result << std::endl;
  return true;
}

int RPN::PrintResult(const std::string& str) {
  if (!StrIsFormula(str))
    return 0;
  if (!Argo(str))
    return 0;

  return 1;
}
