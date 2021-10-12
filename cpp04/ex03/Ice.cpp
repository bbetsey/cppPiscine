#include "Ice.hpp"


//MARK: - Class Constructor

Ice::Ice( void ) : AMateria( "ice" ) {
	std::cout << "Ice Class Constructor called" << std::endl;
}


//MARK: - Class Copy Constructor

Ice::Ice( const Ice &src ) : AMateria( src ) {
	std::cout << "Ice Copy Constructor called" << std::endl;
}


//MARK: - Class Destructor

Ice::~Ice( void ) {
	std::cout << "Ice Destructor called" << std::endl;
}


//MARK: - Class Assignation Overload

Ice		&Ice::operator = ( const Ice &src ) {
	if (this != &src) {
		this->type = src.type;
	}
	std::cout << "Ice Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone( void ) const {
	return new Ice( *this );
}
