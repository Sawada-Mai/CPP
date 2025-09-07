#include "phonebook.hpp"

int main(void)
{
	std::string user_input;
	
	while (true)
	{
		if (!std::getline(std::cin, user_input)) {
				std::cout << "EOF\n";
				break;
		}
		if (user_input == "EXIT")
			break;
	}
	return (0);
}