#include "HumanB.hpp"


//MARK: Class Constructor

HumanB::HumanB( std::string name )
{
	this->name = name;
	this->weapon = 0;
}


//MARK: Class Methods

void	HumanB::attack( void )
{
	if (this->weapon) {
		std::cout << this->name << " attack whis his " << this->weapon->getType() << std::endl;
	} else {
		std::cout << this->name << " has no weapon to attack" << std::endl;
	}
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->weapon = &weapon;
}
