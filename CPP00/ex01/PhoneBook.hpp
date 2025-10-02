#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

#include "ex01/Contact.hpp"


class PhoneBook {
  private:
    static const int	MAX_CONTACT_SIZE = 8;
    Contact	list_[MAX_CONTACT_SIZE];
    int	size_;
    int	index_;
  public:
    PhoneBook();
    ~PhoneBook();
    void	add_contact();
    void	search_contact();
};


#endif
