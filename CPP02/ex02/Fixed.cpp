// Copyright 2025 msawada

#include <iostream>
#include <cmath>
#include <string>
#include "ex02/Fixed.hpp"

Fixed::Fixed() 
  : raw_bits_(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int num) 
  : raw_bits_(num << FRACTIONAL_BIT) {
}

Fixed::Fixed(const float num) 
  : raw_bits_(static_cast<int>(roundf(num * (1 << FRACTIONAL_BIT)))) {
}

Fixed::Fixed(const Fixed& obj)
  : raw_bits_(obj.raw_bits_) {
}

Fixed&  Fixed::operator = (const Fixed& obj) {
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

// 比較演算子のオーバーロード
bool Fixed::operator>(const Fixed& rhs) const {
  return raw_bits_ > rhs.raw_bits_;
}

bool Fixed::operator<(const Fixed& rhs) const {
  return raw_bits_ < rhs.raw_bits_;
}

bool Fixed::operator>=(const Fixed& rhs) const {
  return raw_bits_ >= rhs.raw_bits_;
}

bool Fixed::operator<=(const Fixed& rhs) const {
  return raw_bits_ <= rhs.raw_bits_;
}

bool Fixed::operator==(const Fixed& rhs) const {
  return raw_bits_ == rhs.raw_bits_;
}

bool Fixed::operator!=(const Fixed& rhs) const {
  return raw_bits_ != rhs.raw_bits_;
}

//算術演算子のオーバーロード
Fixed Fixed::operator+(const Fixed& rhs) const {
  Fixed result;

  result.setRawBits(this->raw_bits_ + rhs.raw_bits_);
  return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
  Fixed result;

  result.setRawBits(this->raw_bits_ - rhs.raw_bits_);
  return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
  Fixed result;

  long num = static_cast<long>(this->raw_bits_) * rhs.raw_bits_;
  result.setRawBits(static_cast<int>(num >> FRACTIONAL_BIT));
  return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
  Fixed result;

  if (rhs.raw_bits_ == 0)
    return result;
  long num = static_cast<long>(this->raw_bits_) << FRACTIONAL_BIT;
  result.setRawBits(static_cast<int>(num / rhs.raw_bits_));
  return result;
}

//インクリメント・デクリメント
Fixed& Fixed::operator++() {
  raw_bits_++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed copy(*this);
  raw_bits_++;
  return copy;
}

Fixed& Fixed::operator--() {
  raw_bits_--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed copy(*this);
  raw_bits_--;
  return copy;
}

//min・max関数
Fixed& Fixed::min(Fixed& a, Fixed& b) {
  return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  return (a > b) ? a : b;
}


std::ostream& operator<<(std::ostream& os, Fixed const& obj) {
  os << obj.toFloat();
  return os;
}
