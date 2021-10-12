#include "ScavTrap.hpp"


//MARK: - Class Constructor

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 50, 20) {
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}


//MARK: - Class Distructor

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap Class Distructor called" << std::endl;
}


//MARK: - Class Copy Constructor

ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap( src.getName(), 100, 50, 20 ) {
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

ScavTrap	&ScavTrap::operator = ( const ScavTrap &src ) {
	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	std::cout << "ScavTrap Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack( std::string const &target ) {
	std::cout << "ScavTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount ) {
	this->hitpoints -= amount;
	std::cout << "ScavTrap " << name << " take damage: " << amount << std::endl;
	std::cout << name << " new hitpoints: " << hitpoints << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount ) {
	this->hitpoints += amount;
	std::cout << "ScavTrap " << name << " be repaired by: " << amount << std::endl;
	std::cout << name << " new hitpoints: " << hitpoints << std::endl;
}
