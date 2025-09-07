#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>


class PhoneBook
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int	phone_number;
	public:
		// add_user();
		PhoneBook();
		~PhoneBook();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}


#endif