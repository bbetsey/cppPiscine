#include "ClapTrap.hpp"


//MARK: - Class Constructor

ClapTrap::ClapTrap( std::string name ) {
	this->name = name;
	this->hitpoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hitpoints, int energyPoints, int attackDamage ) {
	this->name = name;
	this->hitpoints = hitpoints;
	this->energyPoints = energyPoints;
	this->attackDamage = attackDamage;
	std::cout << "ClapTrap Extensive Constructor called" << std::endl;
}


//MARK: - Class Distructor

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap Class Destructor called" << std::endl;
}


//MARK: - Class Copy Constructor

ClapTrap::ClapTrap( const ClapTrap &src ) : name( src.name ), hitpoints( src.hitpoints ), energyPoints( src.energyPoints ), attackDamage( src.attackDamage ) {
	*this = src;
	std::cout << "ClapTrap Class Copy Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

ClapTrap	&ClapTrap::operator = ( const ClapTrap &src ) {
	if (this != &src) {
		this->name = src.name;
		this->hitpoints = src.hitpoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;
	}
	std::cout << "ClapTrap Class Assignation Overload called" << std::endl;
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

std::string	ClapTrap::getName( void ) const {
	return this->name;
}

int		ClapTrap::getHitpoints( void ) const {
	return this->hitpoints;
}

int		ClapTrap::getEnergyPoints( void ) const {
	return this->energyPoints;
}

int		ClapTrap::getAttackDamage( void ) const {
	return this->attackDamage;
}


//MARK: - Class Methods { set }

void	ClapTrap::setName( std::string name ) {
	this->name = name;
}

void	ClapTrap::setHitpoints( unsigned int value ) {
	this->hitpoints = value;
}

void	ClapTrap::setEnergyPoints( unsigned int value ) {
	this->energyPoints = value;
}

void	ClapTrap::setAttackDamage( unsigned int value ) {
	this->attackDamage = value;
}
