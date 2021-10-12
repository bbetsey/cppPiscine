#include "Character.hpp"


//MARK: - Class Constructor

Character::Character( void ) {
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character Default Class Constructor called" << std::endl;
}

Character::Character( std::string name ) : name( name ) {
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character Class Constructor called" << std::endl;
}


//MARK: - Class Copy Constructor

Character::Character( const Character &src ) {
	*this = src;
}


//MARK: - Class Assignation Overload

Character	&Character::operator = ( const Character &src ) {
	this->name = src.name;
	for(int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
	}
	std::cout << "Character Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Distructor

Character::~Character( void ) {
	std::cout << "Character Distructor called" << std::endl;
}


//MARK: - Class Methods

void	Character::equip( AMateria *e ) {
	for(int i = 0; i < 4; i++) {
		if (!this->inventory[i]) {
			this->inventory[i] = e;
			std::cout << this->name << " equip " << e->getType() << std::endl;
			return;
		}
	}
	std::cout << "No more place in the inventory of " << name << std::endl;
}

void	Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx]) {
			std::cout << this->name << " unequip " << this->inventory[idx]->getType() << std::endl;
			this->inventory[idx] = NULL;
		}
	}
}

void	Character::use( int idx, ICharacter &target ) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use( target );
}

std::string	const	&Character::getName( void ) const {
	return this->name;
}
