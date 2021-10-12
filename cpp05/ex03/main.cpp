#include "Bureaucraft.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void ) {

	{
		std::cout << "\n----------- Situation One -----------" << std::endl;
		try {
			Intern		intern;
			Form		*form;
			Bureaucraft	bill( "Bob", 1 );

			std::cout << std::endl;
			form = intern.makeForm( "shrubbery creation", "House" );
			bill.signForm( *form );
			form->execute( bill );

			std::cout << std::endl;
			form = intern.makeForm( "robotomy request", "Bender" );
			bill.signForm( *form );
			form->execute( bill );

			std::cout << std::endl;
			form = intern.makeForm( "presidential pardon", "Victor" );
			bill.signForm( *form );
			form->execute( bill );

		} catch( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "\n----------- Situation Two -----------" << std::endl;
		try {
			Intern		intern;
			Form		*form;
			Bureaucraft	bill( "Bob", 130 );

			std::cout << std::endl;
			form = intern.makeForm( "shrubbery creation", "House" );
			bill.signForm( *form );
			form->execute( bill );

			std::cout << std::endl;
			form = intern.makeForm( "robotomy request", "Bender" );
			bill.signForm( *form );
			form->execute( bill );

			std::cout << std::endl;
			form = intern.makeForm( "presidential pardon", "Victor" );
			bill.signForm( *form );
			form->execute( bill );

		} catch( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return 0;
}
