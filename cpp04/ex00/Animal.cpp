#include "Animal.hpp"


//MARK: - Class Constructor

Animal::Animal( void ) {
	this->type = "Animal";
	std::cout << "Animal Class Constructor called" << std::endl;
}


//MARK: - Class Distructor

Animal::~Animal( void ) {
	std::cout << "Animal Class Distructor called" << std::endl;
}


//MARK: - Class Copy Constructor

Animal::Animal( const Animal &src ) : type( src.getType() ) {
	std::cout << "Animal Copy Class Constructor called" << std::endl;
}


//MARK: - Class Assignation Overload

Animal	&Animal::operator = ( const Animal &src ) {
	if (this != &src) {
		this->type = src.getType();
	}
	std::cout << "Class Assignation Overload called" << std::endl;
	return *this;
}


//MARK: - Class Methods

void	Animal::makeSound( void ) const {
	std::cout << "Animal sound" << std::endl;
}


//MARK: - Class Methods { get }

std::string	Animal::getType( void ) const {
	return this->type;
}
