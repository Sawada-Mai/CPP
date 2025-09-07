#include "PhoneBook.hpp"

int main(void)
{
	std::string user_input;
	PhoneBook list[8];
	
	while (true)
	{
		if (!std::getline(std::cin, user_input))
			break;
		if (user_input == "ADD")
			// PhoneBook::add_user(list);
		if (user_input == "SEARCH")
			break;
		if (user_input == "EXIT")
			break;
	}
	return (0);
}
