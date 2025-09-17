#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	size_ = 0;
	index_ = 0;
}

PhoneBook::~PhoneBook() {
}

bool	ft_isdigit(const std::string &str) {
	std::string::size_type	i;

	i = 0;
	while (i < str.size()) {
		if (!std::isdigit(static_cast<unsigned char>(str[i]))) {
			std::cout << "Please enter digits only." << std::endl;
			return false;
		}
		i ++;
	}
	return true;
}

bool	prompt(const char *label, std::string& out, bool (*validate)(const std::string&)) {
	while (true) {
		std::cout << label << std::flush;
		if (!std::getline(std::cin, out)) {
			std::cout << "\nInput interrupted." << std::endl;
			return false;
		}
		if (out.find_first_not_of(" \t\r\n") != std::string::npos) {
			if (validate && validate(out)) {
				return true;
			}
			else if (!validate) {
				return true;
			}
		}
		else {
			std::cout << "Please enter something." << std::endl;
		}
	}
}

void	PhoneBook::add_contact() {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	if (!prompt("First name: ", first_name, NULL)) {
		return;
	}
	if (!prompt("Last name: ", last_name, NULL)) {
		return ;
	}
	if (!prompt("Nickname: ", nickname, NULL)) {
		return ;
	}
	if (!prompt("Phone Number: ", phone_number, &ft_isdigit)) {
		return ;
	}
	if (!prompt("Darkest Secret: ", darkest_secret, NULL)) {
		return ;
	}

	list_[index_].set_first_name(first_name);
	list_[index_].set_last_name(last_name);
	list_[index_].set_nickname(nickname);
	list_[index_].set_phone_number(phone_number);
	list_[index_].set_darkest_secret(darkest_secret);

	index_ = (index_ + 1) % MAX_CONTACT_SIZE;
	if (size_ < MAX_CONTACT_SIZE) {
		size_ ++;
	}
	std::cout << "Contact added successfully!" << std::endl;
}

void	print_header() {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "INDEX" << "|"
						<< std::setw(10) << "FIRST NAME" << "|"
						<< std::setw(10) << "LAST NAME" << "|"
						<< std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

std::string format_change(const std::string& str)
{
	if (str.length() > 9) {
		return str.substr(0,9) + ".";
	}
	return str;
}

void	PhoneBook::search_contact()
{
	int	i;
	std::string	input_num;

	i = 0;
	if (size_ == 0) {
		std::cout << "No contacts yet." << std::endl;
		return ;
	}
	print_header();
	while (i < size_) {
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << format_change(list_[i].get_first_name()) << "|";
		std::cout << std::setw(10) << format_change(list_[i].get_last_name()) << "|";
		std::cout << std::setw(10) << format_change(list_[i].get_nickname()) << std::endl;
		i ++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	if (!prompt("Search index: ", input_num, &ft_isdigit)) {
		return ;
	}
	i = std::atoi(input_num.c_str());
	if (i < 0 || i >= size_) {
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "First name: " << list_[i].get_first_name() << std::endl;
	std::cout << "Last name: " << list_[i].get_last_name() << std::endl;
	std::cout << "Nickname: " << list_[i].get_nickname() << std::endl;
	std::cout << "Phone Number: " << list_[i].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << list_[i].get_darkest_secret() << std::endl;
}
