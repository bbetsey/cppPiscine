#include "Bureaucraft.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void ) {

	{
		std::cout << "\n----------- Situation One -----------" << std::endl;
		try {
			ShrubberyCreationForm	shrubberyForm( "Shrubbery" );
			RobotomyRequestForm		robotomyForm( "RobotomyForm" );
			PresidentialPardonForm	presidentForm( "PresidentForm" );

			Bureaucraft	bureaucraftBob( "Bob", 50 );
			Bureaucraft executor( "Leo", 149 );

			std::cout << "\nFORMS:\n------" << std::endl;
			std::cout << shrubberyForm << std::endl;
			std::cout << robotomyForm << std::endl;
			std::cout << presidentForm << std::endl;
			std::cout << "\nBureaucrafts:\n-------------" << std::endl;
			std::cout << bureaucraftBob << std::endl;
			std::cout << executor << std::endl;

			bureaucraftBob.signForm( shrubberyForm );
			bureaucraftBob.signForm( robotomyForm );
			bureaucraftBob.signForm( presidentForm );
			
			shrubberyForm.execute( executor );
			robotomyForm.execute( executor );
			presidentForm.execute( executor);

		} catch( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "\n----------- Situation One -----------" << std::endl;
		try {
			ShrubberyCreationForm	shrubberyForm;
			RobotomyRequestForm		robotomyForm( "RobotomyForm" );
			PresidentialPardonForm	presidentForm( "PresidentForm" );

			Bureaucraft	bureaucraftBob( "Bob", 5 );
			Bureaucraft executor( "Leo", 1 );

			std::cout << "\nFORMS:\n------" << std::endl;
			std::cout << shrubberyForm << std::endl;
			std::cout << robotomyForm << std::endl;
			std::cout << presidentForm << std::endl;
			std::cout << "\nBureaucrafts:\n-------------" << std::endl;
			std::cout << bureaucraftBob << std::endl;
			std::cout << executor << std::endl;

			bureaucraftBob.signForm( shrubberyForm );
			bureaucraftBob.signForm( robotomyForm );
			bureaucraftBob.signForm( presidentForm );
			
			shrubberyForm.execute( executor );
			robotomyForm.execute( executor );
			presidentForm.execute( executor);

		} catch( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
