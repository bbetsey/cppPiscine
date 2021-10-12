#include "mutantstack.hpp"

int	main( void ) {
	MutantStack<int>	mutant;


	std::cout << "\n-------------------- MutantStack Init --------------------\n" << std::endl;
	std::cout << "MetantStack Size: " << mutant.size() << std::endl;
	std::cout << "MutantStack Elements: ";
	for (MutantStack<int>::iterator it = mutant.begin(); it != mutant.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;


	std::cout << "\n-------------------- Push 4 elements --------------------\n" << std::endl;
	mutant.push( 5 );
	mutant.push( 17 );
	mutant.push( 19 );
	mutant.push( 42 );
	std::cout << "MetantStack Size: " << mutant.size() << std::endl;
	std::cout << "MutantStack Elements: ";
	for (MutantStack<int>::iterator it = mutant.begin(); it != mutant.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;


	std::cout << "\n-------------------- Pop 1 element --------------------\n" << std::endl;
	mutant.pop();
	std::cout << "MetantStack Size: " << mutant.size() << std::endl;
	std::cout << "MutantStack Elements: ";
	for (MutantStack<int>::iterator it = mutant.begin(); it != mutant.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;


	std::cout << std::endl;
	return 0;
}
