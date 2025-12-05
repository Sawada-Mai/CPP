// Copyright 2025 msawada

#ifndef RPN_HPP
#define RPN_HPP

class RPN {
 private:
  RPN(const RPN& other);
  RPN& operator=(const RPN& other);

 public:
  RPN();
  ~RPN();
  int PrintResult(const std::string& str);
  bool IsSign(char c);
  bool StrIsFormula(const std::string& str);
  bool Argo(const std::string& str);
  int Calculate(int num_1, int num_2, char c);
};

#endif
