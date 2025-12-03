// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "MutantStack.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "-----------------------------" << std::endl;
    return;
  }
  std::cout << "\n=========" << str << "=========" << std::endl;
}

int main(void) {
  {
    PutLine("{4, 2, 42}");
    MutantStack<int> mstack;

    mstack.push(4);
    mstack.push(2);
    mstack.push(42);
    std::cout << "top = " << mstack.top() << std::endl;
    std::cout << "size = " << mstack.size() << std::endl;
    // 17が削除される
    mstack.pop();
    std::cout << "size = " << mstack.size() << " (1個削除後)" << std::endl;
  }

  {
    PutLine("{4, 2, 42, 8}");
    MutantStack<int> mstack;

    mstack.push(4);
    mstack.push(2);
    mstack.push(42);
    mstack.push(8);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }
  return 0;
}
