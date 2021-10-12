#include "WrongAnimal.hpp"


//MARK: - Class Constructor

WrongAnimal::WrongAnimal( void ) {
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal Class Constructor called" << std::endl;
}


//MARK: - Class Distructor

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal Class Distructor called" << std::endl;
}


//MARK: - Class Copy Constructor

WrongAnimal::WrongAnimal( const WrongAnimal &src ) : type( src.getType() ) {
	std::cout << "WrongAnimal Copy Class Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

WrongAnimal	&WrongAnimal::operator = ( const WrongAnimal &src ) {
	if (this != &src) {
		this->type = src.getType();
	}
	std::cout << "WrongAnimal Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sound" << std::endl;
}


//MARK: - Class Methods { get }

std::string	WrongAnimal::getType( void ) const {
	return this->type;
}
