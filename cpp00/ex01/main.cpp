#include "Phonebook.hpp"

int	main(void)
{
	Phonebook		book;
	std::string		str;

	std::cout << "ADD SEARCH EXIT" << std::endl;
	while (1)
	{
		std::cout << std::endl << "*********************" << std::endl;
		std::cout << "Enter a command: ";
		getline(std::cin, str);
		std::cout << std::endl;
		if (!str.compare("ADD"))
			book.add_contact();
		else if (!str.compare("SEARCH"))
			book.search_contact();
		else if (!str.compare("EXIT"))
			break ;
		else
			std::cout << "Error: there is no such command" << std::endl;
	}
	return (0);
}