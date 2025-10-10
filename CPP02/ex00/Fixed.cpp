// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "ex00/Fixed.hpp"

Fixed::Fixed() 
  : raw_bits_(0) {
  std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
  std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& obj)
  : raw_bits_(obj.getRawBits()) {
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
  std::cout << "getRawBits member function called\n";
  return raw_bits_;
}

void Fixed::setRawBits(int const raw) {
  raw_bits_ = raw;
  std::cout << "setRawBits member function called\n";
}
