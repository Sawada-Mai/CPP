// Copyright 2025 msawada

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void PutLine(std::string str) {
  if (str.empty()) {
    std::cout << "\n-----------------------" << std::endl;
    return;
  }
  std::cout << "\n---------" << str << "---------" << std::endl;
}

int main(void) {
  {
    PutLine("Check Sign Form Action");
    Bureaucrat User1("User1", 42);
    Form form_a("form_a", 50, 30);
    Form form_b("form_b", 10, 30);

    User1.signForm(form_a);  // サイン可能
    User1.signForm(form_b);  // サイン不可
    User1.signForm(form_a);  // 再サイン
  }
  {
    PutLine("Bureaucrat Copy Check");
    Bureaucrat User1("User1", 42);
    Bureaucrat User2(User1);
    Bureaucrat User3("User1", 100);
    Bureaucrat User4("User1", 100);

    User3 = User1;

    std::cout << User1 << std::endl;
    std::cout << User2 << std::endl;
    std::cout << User3 << std::endl;
    std::cout << User4 << std::endl;
  }
  {
    PutLine("Form Copy Check");
    Form form_a("form_a", 10, 20);
    Form form_b(form_a);
    Form form_c("form_c", 30, 40);
    Form form_d("form_d", 40, 50);

    form_c = form_a;

    std::cout << form_a << std::endl;
    std::cout << form_b << std::endl;
    std::cout << form_c << std::endl;
    std::cout << form_d << std::endl;
  }
  return 0;
}
