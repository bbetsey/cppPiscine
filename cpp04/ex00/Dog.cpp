#include "Dog.hpp"


//MARK: Class Constructor

Dog::Dog( void ) : Animal() {
	this->type = "Dog";
	std::cout << "Dog Class Constructor called" << std::endl;
}


//MARK: Class Distructor

Dog::~Dog( void ) {
	std::cout << "Dog Class Distructor called" << std::endl;
}


//MARK: Class Copy Constructor

Dog::Dog( const Dog &src ) {
	this->type = src.getType();
	std::cout << "Dog Class Copy Constructor called" << std::endl;
}


//MARK: Class Assignation Overload

Dog		&Dog::operator = ( const Dog &src ) {
	if (this != &src) {
		this->type = src.getType();
	}
	std::cout << "Dog Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: Class Methods

void	Dog::makeSound( void ) const {
	std::cout << "Gav Gav" << std::endl;
}
