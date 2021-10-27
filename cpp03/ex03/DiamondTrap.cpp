#include "DiamondTrap.hpp"


//MARK: - Class Constructor

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), FragTrap( name ), ScavTrap( name ), name( name ) {
	this->hitpoints = FragTrap::startHitpoints;
	this->attackDamage = FragTrap::startAttackDamage;
	this->energyPoints = ScavTrap::startEnergyPoints;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}


//MARK: - Class Distructor

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Diamond Class Distructor called" << std::endl;
}


//MARK: - Class Copy Constructor

DiamondTrap::DiamondTrap( const DiamondTrap &src ) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
	*this = src;
	std::cout << "Diamond Copy Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

DiamondTrap	&DiamondTrap::operator = ( const DiamondTrap &src ) {
	if (this != &src) {
		this->name = src.name;
		this->ClapTrap::name = src.ClapTrap::name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	std::cout << "DiamondTrap Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	DiamondTrap::whoIam( void ) {
	std::cout << "DiamondTrap name: " << name << "; ClapTrap name: " << this->ClapTrap::name << std::endl;
}
