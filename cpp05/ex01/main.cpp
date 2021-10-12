#include "Bureaucraft.hpp"
#include "Form.hpp"

int	main( void ) {

	std::cout << "\n----------- Situation One -----------" << std::endl;
	try {
		Form	formOne("formOne", 45, 23);
		Bureaucraft	bureaucraftBob("Bob", 50);
		std::cout << formOne << std::endl;
		std::cout << bureaucraftBob << std::endl;
		bureaucraftBob.signForm( formOne );
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n----------- Situation Two -----------" << std::endl;
	try {
		Form	formTwo("formTwo", 45, 23);
		Bureaucraft	bureaucraftMicle("Mickle", 20);
		std::cout << formTwo << std::endl;
		std::cout << bureaucraftMicle << std::endl;
		bureaucraftMicle.signForm( formTwo );
	} catch( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
