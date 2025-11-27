// Copyright 2025 msawada

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <class T>
class MutantStack : public std::stack<T> {
 private:

 public:
  MutantStack();
  MutantStack(const MutantStack<T>& other);
  MutantStack<T>& operator=(const MutantStack<T>& other);
  ~MutantStack();

  typedef typename std::stack<T>::container_type::iterator iterator;

  iterator begin();
  iterator end();
};

template <class T>
MutantStack<T>::MutantStack()
  : std::stack<T>() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T>& other)
  : std::stack<T>(other) {}

template <class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
  if (this != &other) {
    std::stack<T>::operator=(other);
  }
  return *this;
}

template <class T>
MutantStack<T>::~MutantStack() {
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
  return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
  return this->c.end();
}

#endif
