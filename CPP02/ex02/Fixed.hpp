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
  Fixed(const int num);
  Fixed(const float num);
  Fixed(const Fixed& obj);
  Fixed& operator = (const Fixed& obj);
  ~Fixed();
  int getRawBits() const;
  void setRawBits(int const raw);
  float toFloat() const;
  int toInt() const;

  bool operator>(const Fixed& rhs) const;
  bool operator<(const Fixed& rhs) const;
  bool operator>=(const Fixed& rhs) const;
  bool operator<=(const Fixed& rhs) const;
  bool operator==(const Fixed& rhs) const;
  bool operator!=(const Fixed& rhs) const;

  Fixed operator+(const Fixed& rhs) const;
  Fixed operator-(const Fixed& rhs) const;
  Fixed operator*(const Fixed& rhs) const;
  Fixed operator/(const Fixed& rhs) const;

  Fixed& operator++();
  Fixed operator++(int);
  Fixed& operator--();
  Fixed operator--(int);

  static Fixed& min(Fixed& a, Fixed& b);
  static const Fixed& min(const Fixed& a, const Fixed& b);
  static Fixed& max(Fixed& a, Fixed& b);
  static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, Fixed const& obj);

#endif
