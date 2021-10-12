#include "PresidentialPardonForm.hpp"


//MARK: - Class Constructor

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "PresidentialPardonForm", 25, 5 ), target( "DefaultTarget" ) {}

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ) : Form( "PresidentialPardonForm", 25, 5 ), target( target ) {}


//MARK: - Class Copy Constructor

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src ) : Form( src ), target( src.target ) {}


//MARK: - Class Distructor

PresidentialPardonForm::~PresidentialPardonForm( void ) {}


//MARK: - Class Assignation Overload

PresidentialPardonForm	&PresidentialPardonForm::operator = ( const PresidentialPardonForm &src ) {
	if (this != &src) {
		target = src.target;
	}
	return *this;
}


//MARK: - Class Methods

void	PresidentialPardonForm::execute( const Bureaucraft &executor ) {
	try {
		checkExecutor( executor );
		std::cout << "The Form[" + target + "] has been pardoned by Zafod Beeblebrox" << std::endl;
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}