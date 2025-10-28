
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

    try {
        Bureaucrat alice("Alice", 1);    // 最高権限の官僚
        Bureaucrat bob("Bob", 150);      // 一番下の官僚

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Ford Prefect");

        std::cout << "\n=== Signing Forms ===" << std::endl;
        alice.signForm(shrub);
        alice.signForm(robot);
        alice.signForm(pardon);

        std::cout << "\n=== Executing Forms (by Alice) ===" << std::endl;
        alice.executeForm(shrub);
        alice.executeForm(robot);
        alice.executeForm(pardon);

        std::cout << "\n=== Executing with Low-Grade Bureaucrat (Bob) ===" << std::endl;
        bob.executeForm(shrub); // 失敗例（例外メッセージ確認用）
    }
    catch (std::exception &e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }
  return 0;
}
