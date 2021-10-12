#include "Karen.hpp"


//MARK: Class Constructor

Karen::Karen( void ) {

	methods[0] = &Karen::debug;
	methods[1] = &Karen::info;
	methods[2] = &Karen::warning;
	methods[3] = &Karen::error;
	methods[4] = &Karen::another;

}


//MARK: Class Methods

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my\n"
					"7XL-double-cheese-triple-pickle-special-ketchup\n"
					"burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra"
					"bacon cost more money.\n"
					"You don’t put enough!\n"
					"If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.\n"
					"I’ve been coming here for years and you just\n"
					"started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::another( void )
{
	std::cout << "Another situation.. Call mraymun!" << std::endl;
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

	(this->*methods[type])();
}
