#include "iter.hpp"

template <typename T>
void	printArray( const T &elem ) {
	std::cout << elem << std::endl;
}


int	main( void ) {
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	iter( array, 10, printArray);
	return 0;
}
