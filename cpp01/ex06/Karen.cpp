#include "Karen.hpp"


//MARK: Class Methods

void	Karen::debug( void )
{
	std::cout << "[DEBUG]\n"
					"I love to get extra bacon for my\n"
					"7XL-double-cheese-triple-pickle-special-ketchup\n"
					"burger. I just love it!\n" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[INFO]\n"
					"I cannot believe adding extra"
					"bacon cost more money.\n"
					"You don’t put enough!\n"
					"If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[WARNING]\n"
					"I think I deserve to have some extra bacon for free.\n"
					"I’ve been coming here for years and you just\n"
					"started working here last month.\n" << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ERROR]\n"
					"This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::another( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int	Karen::getType( std::string level )
{
	std::string	types[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && level != types[i])
		i++;
	return (i);
}

void	Karen::complain( std::string level )
{
	int	type = getType(level);

	typedef void (Karen::*ptr)();
	ptr method;
	switch (type)
	{
	case (0):
		method = &Karen::debug;
		(this->*method)();
	case (1):
		method = &Karen::info;
		(this->*method)();
	case (2):
		method = &Karen::warning;
		(this->*method)();
	case (3):
		method = &Karen::error;
		(this->*method)();
		break;
	default:
		method = &Karen::another;
		(this->*method)();
		break;
	}
}
