#include "WrongCat.hpp"


//MARK: Class Constructor

WrongCat::WrongCat( void ) : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat Class Constructor called" << std::endl;
}


//MARK: Class Distructor

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Class Distructor called" << std::endl;
}


//MARK: Class Copy Constructor

WrongCat::WrongCat( const WrongCat &src ) {
	this->type = src.getType();
	std::cout << "WrongCat Class Copy Constructor called" << std::endl;
}


//MARK: Class Assignation Overload

WrongCat	&WrongCat::operator = ( const WrongCat &src ) {
	if (this != &src) {
		this->type = src.getType();
	}
	std::cout << "WrongCat Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: Class Methods

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
