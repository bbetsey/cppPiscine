#include "Bureaucraft.hpp"

int	main( void ) {
	std::cout << "\n------------ SG1 -------------" << std::endl;
	Bureaucraft	first("SG1", 34);
	std::cout << first << std::endl;

	std::cout << "\n------------ ↑↑↑ -------------" << std::endl;
	first.gradeUp();
	std::cout << first << std::endl;

	std::cout << "\n------------ ↓↓↓ -------------" << std::endl;
	first.gradeDown();
	std::cout << first << std::endl;

	std::cout << std::endl;

	std::cout << "\n------------------------------" << std::endl;
	try {
		Bureaucraft high("High", 0);
	} catch( std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "\n------------------------------" << std::endl;
	try {
		Bureaucraft low("Low", 151);
	} catch( std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "\n------------------------------" << std::endl;
	Bureaucraft highIncrement("HighIncrement", 1);
	try {
		highIncrement.gradeUp();
	} catch( std::exception &ex ) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
