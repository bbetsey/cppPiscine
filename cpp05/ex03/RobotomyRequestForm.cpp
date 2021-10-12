#include "RobotomyRequestForm.hpp"


//MARK: - Class Constructor

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "RobotomyForm", 72, 45 ), target( "RobotomyTargetDefault" ) {}

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) : Form( "RobotomyForm", 72, 45 ), target( target ) {}


//MARK: - Class Copy Constructor

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ) : Form( src ), target( src.target ) {}


//MARK: - Class Distructor

RobotomyRequestForm::~RobotomyRequestForm( void ) {}


//MARK: - Class Assignation Overload

RobotomyRequestForm	&RobotomyRequestForm::operator = ( const RobotomyRequestForm &src ) {
	if (this != &src) {
		target = src.target;
	}
	return *this;
}


//MARK: - Class Methods

void	RobotomyRequestForm::execute( const Bureaucraft &executor ) {
	try {
		checkExecutor( executor );
		srand( time(0) );
		int randomInt = rand() % 2;
		std::cout << "BRRRRRR ⚙︎⚙︎⚙︎⚙︎⚙︎⚙︎⚙︎⚙︎ BRRRRRR " << randomInt << std::endl;
		if (randomInt == 1)
			std::cout << "The Form[" + target + "] has been robotomized successfully" << std::endl;
		else
			std::cout << "The Form[" + target + "] failed robotomize" << std::endl;
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
