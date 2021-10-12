#include "Zombie.hpp"


//MARK: Class Constructor

Zombie::Zombie( void )
{
	std::cout << "zombie was born" << std::endl;
}

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << "Zombie " << this->name << " was born" << std::endl;
}


//MARK: Class Distructor

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->name << " died" << std::endl;
}


//MARK: Class Methods

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->name = name;
}
