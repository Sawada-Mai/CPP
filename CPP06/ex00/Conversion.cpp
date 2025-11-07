// Copyright 2025 msawada

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include "Conversion.hpp"

void Conversion::PrintChar(double num, PseudoType type) {
  std::cout << "char: ";

  if (type != kTypePseudoNone) {
    std::cout << "impossible" << std::endl;
    return;
  }
  if (num < std::numeric_limits<char>::min() ||
      num > std::numeric_limits<char>::max()) {
    std::cout << "impossible" << std::endl;
    return;
  }
  unsigned char c = static_cast<unsigned char>(num);
  if (!isprint(c)) {
    std::cout << "Non displayable" << std::endl;
    return;
  }
  std::cout << "'" << c << "'" << std::endl;
}

void Conversion::PrintInt(double num, PseudoType type) {
  std::cout << "int: ";

  if (type != kTypePseudoNone) {
    std::cout << "impossible" << std::endl;
    return;
  }
  if (num < std::numeric_limits<int>::min() ||
      num > std::numeric_limits<int>::max()) {
    std::cout << "impossible" << std::endl;
    return;
  }
  std::cout << static_cast<int>(num) << std::endl;
}

void Conversion::PrintFloat(double num, PseudoType type) {
  std::cout << "float: ";

  switch (type) {
    case kTypePseudoNone:
      break;
    case kTypePseudoNan:
      std::cout << "nanf" << std::endl;
      return;
    case kTypePseudoPosInf:
      std::cout << "+inff" << std::endl;
      return;
    case kTypePseudoNegInf:
      std::cout << "-inff" << std::endl;
      return;
  }

  if (num < -std::numeric_limits<float>::max() ||
      num > std::numeric_limits<float>::max()) {
    std::cout << "impossible" << std::endl;
    return;
  }

  float float_num = static_cast<float>(num);

  if (float_num != static_cast<int>(float_num))
    std::cout << float_num << "f" << std::endl;
  else
    std::cout << float_num << ".0f" << std::endl;
}

void Conversion::PrintDouble(double num, PseudoType type) {
  std::cout << "double: ";

  switch (type) {
    case kTypePseudoNone:
      break;
    case kTypePseudoNan:
      std::cout << "nan" << std::endl;
      return;
    case kTypePseudoPosInf:
      std::cout << "+inf" << std::endl;
      return;
    case kTypePseudoNegInf:
      std::cout << "-inf" << std::endl;
      return;
  }

  if (num < -std::numeric_limits<double>::max() ||
      num > std::numeric_limits<double>::max()) {
    std::cout << "impossible" << std::endl;
    return;
  }

  double double_num = static_cast<double>(num);

  if (double_num != static_cast<int>(double_num))
    std::cout << double_num << std::endl;
  else
    std::cout << double_num << ".0" << std::endl;
}

Conversion::PseudoType Conversion::CheckType(const std::string str) {
  if (str == "nan" || str == "nanf")
    return kTypePseudoNan;
  else if (str == "+inf" || str == "+inff")
    return kTypePseudoPosInf;
  else if (str == "-inf" || str == "-inff")
    return kTypePseudoNegInf;
  else
    return kTypePseudoNone;
}

double Conversion::StringToDouble(const std::string& str) {
  if (!str[str.size() - 1] == 'f' || str.find('.') != std::string:npos) {
    return std::atof(str);
  }
  else
    return static_cast<double>(atoi(str));
}

void Conversion::Convert(const std::string& str) {
  PseudoType type = CheckType(str);
  double num = 0;

  if (type == kTypePseudoNone)
    num = StringToDouble(str);

  PrintChar(num, type);
  PrintInt(num, type);
  PrintFloat(num, type);
  PrintDouble(num, type);

  // std::cout << std::atof("4.2f") << std::endl;
}
