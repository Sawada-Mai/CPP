// Copyright 2025 msawada

#include <iostream>
#include <cmath>
#include <string>
#include "ex01/Fixed.hpp"

Fixed::Fixed() 
  : raw_bits_(0) {
  std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
}

Fixed::Fixed(const int num) 
  : raw_bits_(num << FRACTIONAL_BIT) {
  std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num) 
  : raw_bits_(static_cast<float>(roundf(num * (1 << FRACTIONAL_BIT)))) {
  std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
  : raw_bits_(obj.raw_bits_) {
  std::cout << "Copy constructor called\n";
}

Fixed&  Fixed::operator = (const Fixed& obj) {
  std::cout << "Copy assignment operator called\n";
  if (this != &obj) {
    raw_bits_ = obj.getRawBits();
  }
  return *this;
}

int Fixed::getRawBits() const {
  return raw_bits_;
}

void Fixed::setRawBits(int const raw) {
  raw_bits_ = raw;
}

float Fixed::toFloat() const {
  return static_cast<float>(raw_bits_) / (1 << FRACTIONAL_BIT);
}

int Fixed::toInt() const {
  return raw_bits_ >> FRACTIONAL_BIT;
}

std::ostream& operator<<(std::ostream& os, Fixed const& obj) {
  os << obj.toFloat();
  return os;
}
