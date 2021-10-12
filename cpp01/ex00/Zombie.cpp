#include "Zombie.hpp"


//MARK: Class Constructor

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << "Zombie " << this->name << " was born" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->name << " died" << std::endl;
}


//MARK: Class Methods

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
