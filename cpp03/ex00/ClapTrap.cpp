#include "ClapTrap.hpp"


//MARK: - Class Constructor

ClapTrap::ClapTrap( std::string name ) : name( name ), hitpoints( 10 ), energyPoints( 10 ), attackDamage( 0 ) {
	std::cout << "Default constructor called" << std::endl;
}


//MARK: - Class Distructor

ClapTrap::~ClapTrap( void ) {
	std::cout << "Class Destructor called" << std::endl;
}


//MARK: - Class Copy Constructor

ClapTrap::ClapTrap( const ClapTrap &src ) : name( src.name ), hitpoints( src.hitpoints ), energyPoints( src.energyPoints ), attackDamage( src.attackDamage ) {
	*this = src;
	std::cout << "Class Copy Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

ClapTrap	&ClapTrap::operator = ( const ClapTrap &src ) {
	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	std::cout << "Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	ClapTrap::attack( std::string const &target ) {
	std::cout << "ClapTrap " << name << " attack " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->hitpoints -= amount;
	std::cout << "ClapTrap " << name << " take damage: " << amount << std::endl;
	std::cout << name << " new hitpoints: " << hitpoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	this->hitpoints += amount;
	std::cout << "ClapTrap " << name << " be repaired by: " << amount << std::endl;
	std::cout << name << " new hitpoints: " << hitpoints << std::endl;
}

void	ClapTrap::performance( void ) {
	std::cout << "------------------------------" << std::endl;
	std::cout << "Name:\t\t" << name << std::endl;
	std::cout << "Hitpoints:\t" << hitpoints << std::endl;
	std::cout << "EnergyPoints:\t" << energyPoints << std::endl;
	std::cout << "AttackDamage:\t" << attackDamage << std::endl;
	std::cout << "------------------------------" << std::endl;
}


//MARK: - Class Methods { get }

std::string	ClapTrap::getName( void ) {
	return this->name;
}

int		ClapTrap::getHitpoints( void ) {
	return this->hitpoints;
}

int		ClapTrap::getEnergyPoints( void ) {
	return this->energyPoints;
}

int		ClapTrap::getAttackDamage( void ) {
	return this->attackDamage;
}
