#include "easyfind.hpp"

int	main( void ) {
	std::vector<int>	container;

	for (int i = 0; i < 10; i++)
		container.push_back( i );
	
	try {
		std::vector<int>::iterator	it = easyfind( container, 100 );
		std::cout << "Success: found " << *it << std::endl;
	} catch( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
