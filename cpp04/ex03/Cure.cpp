#include "Cure.hpp"


//MARK: - Class Constructor

Cure::Cure( void ) : AMateria( "cure" ) {
	std::cout << "Cure Class Constructor called" << std::endl;
}


//MARK: - Class Copy Constructor

Cure::Cure( const Cure &src ) {
	*this = src;
	std::cout << "Cure Class Copy Constructor called" << std::endl;
}


//MARK: - Class Distructor

Cure::~Cure( void ) {
	std::cout << "Cure Class Distructor called" << std::endl;
}


//MARK: - Class Assignation Overload

Cure	&Cure::operator = ( const Cure &src ) {
	if (this != &src) {
		this->type = src.type;
	}
	std::cout << "Cure Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria	*Cure::clone( void ) const {
	return new Cure( *this );
}
