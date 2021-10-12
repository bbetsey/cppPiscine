#include "Brain.hpp"


//MARK: - Class Constructor

Brain::Brain( void ) {
	std::cout << "Brain Class Constructor called" << std::endl;
}


//MARK: - Class Copy Constructor

Brain::Brain( const Brain &src ) {
	*this = src;
	std::cout << "Brain Class Copy Constructor called" << std::endl;
}


//MARK: - Class Distructor

Brain::~Brain( void ) {
	std::cout << "Brain Class Distructor called" << std::endl;
}


//MARK: - Class Assignation Overload

Brain	&Brain::operator = ( const Brain &src ) {
	if (this != &src) {
		for(int i = 0; i < 100; i++) {
			ideas[i] = src.ideas[i];
		}
	}
	return *this;
}


//MARK: - Class Methods

std::string	*Brain::getIdeas( void ) {
	return ideas;
}
