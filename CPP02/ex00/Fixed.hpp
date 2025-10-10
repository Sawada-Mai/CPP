// Copyright 2025 msawada

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
 private:
  int raw_bits_;
  static const int FRACTIONAL_BIT = 8;
 public:
  Fixed();
  Fixed(const Fixed& obj);
  Fixed& operator = (const Fixed& obj);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
};

#endif
