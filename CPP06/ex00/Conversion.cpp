// Copyright 2025 msawada

#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>
#include "Conversion.hpp"

void Conversion::PrintChar(double num, PseudoType type) {
  std::cout << "char: ";

  if (type != kTypePseudoNone && type != kTypePseudoChar) {
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

  if (type != kTypePseudoNone && type != kTypePseudoChar) {
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
    case kTypePseudoChar:
      break;
    case kTypePseudoStr:
      std::cout << "impossible" << std::endl;
      return;
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

  std::cout.setf(std::ios::fixed);
  std::cout << std::setprecision(1) << float_num << "f" << std::endl;
  std::cout.unsetf(std::ios::fixed);
}

void Conversion::PrintDouble(double num, PseudoType type) {
  std::cout << "double: ";

  switch (type) {
    case kTypePseudoNone:
      break;
    case kTypePseudoChar:
      break;
    case kTypePseudoStr:
      std::cout << "impossible" << std::endl;
      return;
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

  std::cout.setf(std::ios::fixed);
  std::cout << std::setprecision(1) << double_num << std::endl;
  std::cout.unsetf(std::ios::fixed);
}

static bool StrIsdigit(const std::string str)
{
  int dot_count = 0;
  int float_count = 0;
  int char_count = 0;

  for(size_t i = 0; i < str.size(); i++) {
    if (str[i] == '.')
      dot_count++;
    else if (str[i] == 'f')
      float_count++;
    else if (!isdigit(str[i]))
      char_count++;
  }
  if (dot_count > 1 || float_count > 1 || char_count > 1)
    return false;
  else if (float_count > 0 && str[str.size() - 1] != 'f')
    return false;
  return true;
}

Conversion::PseudoType Conversion::CheckType(const std::string str) {
  if (str == "nan" || str == "nanf")
    return kTypePseudoNan;
  else if (str == "+inf" || str == "+inff")
    return kTypePseudoPosInf;
  else if (str == "-inf" || str == "-inff")
    return kTypePseudoNegInf;
  else if (str.size() == 1 && !isdigit(str[0]))
    return kTypePseudoChar;
  else if (!StrIsdigit(str))
    return kTypePseudoStr;
  return kTypePseudoNone;
}

void Conversion::Convert(const std::string& str) {
  PseudoType type = CheckType(str);
  double num = 0;


  if (type == kTypePseudoNone) {
    num = static_cast<double>(std::atof(str.c_str()));
  } else if (type == kTypePseudoChar) {
    num = static_cast<double>(str[0]);
  }

  PrintChar(num, type);
  PrintInt(num, type);
  PrintFloat(num, type);
  PrintDouble(num, type);
}
