#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact		contacts[8];
	int			len;
	int			oldest;

	void		init_contact(Contact *contact);
	int			check_number(std::string str);
	std::string	check_str(std::string str);
	void		print_book(void);

public:
	Phonebook();
	void		add_contact(void);
	void		search_contact();
};

#endif
