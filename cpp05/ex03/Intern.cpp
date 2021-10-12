#include "Intern.hpp"


//MARK: - Class Constructor

Intern::Intern( void ) {
	types[0] = "shrubbery creation";
	types[1] = "robotomy request";
	types[2] = "presidential pardon";

	methods[0] = &Intern::newShrubberyCreationForm;
	methods[1] = &Intern::newRobotomyRequestForm;
	methods[2] = &Intern::newPresidentialPardonForm;
}


//MARK: - Class Copy Constructor

Intern::Intern( const Intern &src ) {
	*this = src;
}


//MARK: - Class Distructor

Intern::~Intern( void ) {}


//MARK: - Class Assignation Overload

Intern	&Intern::operator = ( const Intern & ) {
	return *this;
}


//MARK: - Class InternInvalidFormException

const char	*Intern::InternInvalidFormException::what() const throw() {
	return "Invalid Form!";
}


//MARK: - Class Methods (private)

Form	*Intern::newShrubberyCreationForm( std::string const &target ) {
	return new ShrubberyCreationForm( target );
}

Form	*Intern::newRobotomyRequestForm( std::string const &target ) {
	return new RobotomyRequestForm( target );
}

Form	*Intern::newPresidentialPardonForm( std::string const &target ) {
	return new PresidentialPardonForm( target );
}

int		Intern::getTypeIndex( std::string const &type ) {
	for ( int i = 0; i < 3; i++ ) {
		if ( type == types[i] )
			return i;
	}
	return -1;
}

Form	*Intern::makeForm( std::string const &type, std::string const &target ) {
	int	typeIndex = getTypeIndex( type );
	if ( typeIndex == -1 )
		throw InternInvalidFormException();
	std::cout << "Intern creates form: " + type << std::endl;
	return (this->*methods[typeIndex])( target );
}