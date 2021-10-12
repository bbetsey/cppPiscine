# include "HumanA.hpp"


// MARK: Class Constructor

HumanA::HumanA( std::string name, Weapon &weapon ) : weapon(weapon)
{
	this->name = name;
}


// MARK: Class Methods

void    HumanA::attack( void )
{
	std::cout << this->name << " attack whis his " << this->weapon.getType() << std::endl;
}
