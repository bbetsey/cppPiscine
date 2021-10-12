#include "AMateria.hpp"


//MARK: - Class Constructor

AMateria::AMateria( void ) : type( "materia" ) {
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria( std::string type ) : type( type ) {
	std::cout << "AMateria Class Constructor called" << std::endl;
}


//MARK: - Class Copy Constructor

AMateria::AMateria( const AMateria &src ) {
	*this = src;
	std::cout << "AMateria Class Copy Consructor called" << std::endl;
}


//MARK: - Class Distructor

AMateria::~AMateria( void ) {
	std::cout << "AMateria Class Distructor called" << std::endl;
}


//MARK: - Class Assignation Overload

AMateria	&AMateria::operator = ( const AMateria &src ) {
	if (this != &src) {
		this->type = src.type;
	}
	std::cout << "AMateria Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

std::string	const	&AMateria::getType( void ) const {
	return this->type;
}

void	AMateria::use( ICharacter & ) {}

