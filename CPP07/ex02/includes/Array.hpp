// Copyright 2025 msawada

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <class T>
class Array {
 private:
  T* list_;
  unsigned int size_;
 public:
  Array();
  Array(unsigned int n);
  Array(const Array& other);
  Array& operator=(const Array& other);
  ~Array();

  T& operator[](unsigned int i);

  unsigned int size() const;
};

template <class T>
Array<T>::Array() {
  list_ = NULL;
  size_ = 0;
}

template <class T>
Array<T>::Array(unsigned int n) {
  if (n == 0) {
    list_ = NULL;
    size_ = 0;
  } else {
    list_ = new T[n];
    size_ = n;
  }
}

template <class T>
Array<T>::Array(const Array<T>& other) {
  size_ = other.size_;
  if (other.size_ == 0) {
    list_ = NULL;
    return;
  }

  list_ = new T[size_];
  for (unsigned int i = 0; i < size_; i++) {
    list_[i] = other.list_[i];
  }
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
  if (this == &other) {
    return *this;
  }

  delete[] list_;

  size_ = other.size_;
  if (size_ == 0) {
    list_ = NULL;
    return *this;
  }

  list_ = new T[size_];
  for (unsigned int i = 0; i < size_; i++) {
    list_[i] = other.list_[i];
  }
  return *this;
}

template <class T>
T& Array<T>::operator[](unsigned int i) {
  if (i >= size_)
    throw std::exception();
  return list_[i];
}

template <class T>
unsigned int Array<T>::size() const {
  return size_;
}

template <class T>
Array<T>::~Array() {
  delete[] list_;
}

#endif
