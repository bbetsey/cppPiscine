#include "FragTrap.hpp"


//MARK: - Class Constructor

FragTrap::FragTrap( std::string name ) : ClapTrap( name, 100, 100, 30 ) {
	std::cout << "FragTrap Default Class Constructor called" << std::endl;
}


//MARK: - Class Distructor

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap Class Distructor called" << std::endl;
}


//MARK: - Class Copy Constructor

FragTrap::FragTrap( const FragTrap &src ) : ClapTrap( src.getName(), 100, 100, 30 ) {
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

FragTrap	&FragTrap::operator = ( const FragTrap &src ) {
	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	std::cout << "FragTrap Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << name << " give an excellent hight five!" << std::endl;
}
