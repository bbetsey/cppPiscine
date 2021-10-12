#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	len = 0;
	oldest = 0;
}

void	Phonebook::add_contact(void)
{
	Contact		contact;

	if (len < 8)
	{
		init_contact(&contact);
		contacts[len++] = contact;
	}
	else
	{
		if (oldest == 8)
			oldest = 0;
		init_contact(&contact);
		contacts[oldest++] = contact;
	}
}

void	Phonebook::search_contact()
{
	std::string	index;
	int			i;
	
	print_book();
	std::cout << std::endl << "Enter the desire index: ";
	std::cin >> index;
	if (!check_number(index))
	{
		std::cout << "Error: invalid index" << std::endl;
		return ;
	}
	i = stoi(index);
	if (i >= 0 && i <= len)
		contacts[i].print();
	else
		std::cout << "Error: there is no such index" << std::endl;
}


void	Phonebook::init_contact(Contact *contact)
{
	(*contact).setContact();
}

int	Phonebook::check_number(std::string str)
{
	int		length;
	int		i;

	length = str.length();
	i = 0;
	while (i < length)
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

std::string	Phonebook::check_str(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return (str);
}

void	Phonebook::print_book(void)
{
	int		i = 0;

	std::cout << "|     Index|" << "First Name" << "| Last Name" << "|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < len)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << check_str(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10)<< check_str(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10)<< check_str(contacts[i].getNickname()) << "|" << std::endl;
		i++;
	}
}
