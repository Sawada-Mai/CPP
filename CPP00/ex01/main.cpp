#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string	user_input;

	while (true)
	{
		if (!std::getline(std::cin, user_input))
			break;
		if (user_input == "ADD")
		{
			PhoneBook.add_contact();
		}
		// else if (user_input == "SEARCH")
		// {
		// 	PhoneBook.search_contact();
		// }
		else if (user_input == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			break;
		}
		else
			std::cout << "Command not found\nPlease choise ADD or SEARCH or EXIT" << std::endl;
	}
	return (0);
}
