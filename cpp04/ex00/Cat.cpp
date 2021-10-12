#include "Cat.hpp"


//MARK: Class Constructor

Cat::Cat( void ) : Animal() {
	this->type = "Cat";
	std::cout << "Cat Class Constructor called" << std::endl;
}


//MARK: Class Distructor

Cat::~Cat( void ) {
	std::cout << "Cat Class Distructor called" << std::endl;
}


//MARK: Class Copy Constructor

Cat::Cat( const Cat &src ) {
	this->type = src.getType();
	std::cout << "Cat Class Copy Constructor called" << std::endl;
}


//MARK: Class Assignation Overload

Cat		&Cat::operator = ( const Cat &src ) {
	if (this != &src) {
		this->type = src.getType();
	}
	std::cout << "Cat Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: Class Methods

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
