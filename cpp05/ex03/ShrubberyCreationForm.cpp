#include "ShrubberyCreationForm.hpp"


//MARK: - Class Consructor

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form( "ShrubberyForm", 145, 137 ), target( "ShruberryTargetDefault" ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : Form( "ShrubberyForm", 145, 137 ), target( target ) {}


//MARK: - Class Copy Constructor

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : Form( src ) {
	*this = src;
}


//MARK: - Class Distructor

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}


//MARK: - Class Assignation Overload

ShrubberyCreationForm	&ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &src ) {
	if (this != &src) {
		target = src.target;
	}
	return *this;
}


//MARK: - Class Methods

void	ShrubberyCreationForm::execute( const Bureaucraft &executor ) {
	try {
		checkExecutor( executor );
		std::ofstream	file;
		file.open(("./" + target + "_target").c_str());
		file << "      /\\      " << std::endl;
		file << "     ///\\    " << std::endl;
		file << "    ///\\\\\\   " << std::endl;
		file << "   /////\\\\\\   " << std::endl;
		file << "  /////\\\\\\\\\\  " << std::endl;
		file << "  ----------   " << std::endl;
		file << "      |||      " << std::endl;
		file << "      |||      " << std::endl;
		file << "      ---      " << std::endl;  
		file << std::endl;
		file.close();
		std::cout << "The Form[" + name + "] executed by " + executor.getName() << std::endl;
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
