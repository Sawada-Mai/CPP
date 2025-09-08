#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	size_ = 0;
	index_ = 0;
}

PhoneBook::~PhoneBook()
{
}

bool	prompt(const char *label ,std::string& out) {
	while (true)
	{
		std::cout << label << std::flush;
		if (!std::getline(std::cin, out))
		{
			std::cout << "\nInput interrupted. Contact not added." << std::endl;
			return (false);
		}
		if (out.find_first_not_of(" \t\r\n") != std::string::npos)
			return (true);
		std::cout << "Please enter something." << std::endl;
	}
}

void	PhoneBook::add_contact() {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	if (!prompt("First name: ", first_name))
		return ;
	if (!prompt("Last name: ", last_name))
		return ;
	if (!prompt("Nickname: ", nickname))
		return ;
	if (!prompt("Phone Number: ", phone_number))
		return ;
	if (!prompt("Darkest Secret: ", darkest_secret))
		return ;

	list_[index_].set_first_name(first_name);
	list_[index_].set_last_name(last_name);
	list_[index_].set_nickname(nickname);
	list_[index_].set_phone_number(phone_number);
	list_[index_].set_darkest_secret(darkest_secret);

	index_ = (index_ + 1) % MAX_CONTACT_SIZE;
	if (size_ < MAX_CONTACT_SIZE)
		size_ ++;
	std::cout << "Contact added successfully!" << std::endl;
}

// void	search_contact()
// {
	
// }