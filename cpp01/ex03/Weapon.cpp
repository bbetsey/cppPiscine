#include "Weapon.hpp"


// MARK: Class Constructors

Weapon::Weapon( std::string type )
{
	this->setType(type);
}

Weapon::Weapon( void )
{
	return ;
}


// MARK: Class Methods

void	Weapon::setType( std::string type )
{
	this->type = type;
}

const std::string	&Weapon::getType( void )
{
	return (this->type);
}
