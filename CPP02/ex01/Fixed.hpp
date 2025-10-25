// Copyright 2025 msawada

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed {
 private:
  int raw_bits_;
  static const int FRACTIONAL_BIT = 8;

 public:
  Fixed();
  explicit Fixed(const int num);
  explicit Fixed(const float num);
  Fixed(const Fixed& obj);
  Fixed& operator = (const Fixed& obj);
  ~Fixed();

  void setRawBits(int const raw);
  int getRawBits() const;
  float toFloat() const;
  int toInt() const;
};

std::ostream& operator<<(std::ostream& os, Fixed const& obj);

#endif
