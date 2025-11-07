// Copyright 2025 msawada

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>

class Conversion {
 private:
  Conversion();
  Conversion(const Conversion& other);
  Conversion& operator=(const Conversion& other);
  ~Conversion();

  enum PseudoType {
    kTypePseudoNone,
    kTypePseudoNan,
    kTypePseudoPosInf,
    kTypePseudoNegInf
  };

  static void PrintChar(double num, PseudoType type);
  static void PrintInt(double num, PseudoType type);
  static void PrintFloat(double num, PseudoType type);
  static void PrintDouble(double num, PseudoType type);

  static PseudoType CheckType(const std::string str);

 public:
  static void Convert(const std::string& str);
};

#endif
