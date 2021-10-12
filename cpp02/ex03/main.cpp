#include "Fixed.hpp"
#include "Point.hpp"

int	main( void ) {
	Point	const point( Fixed( 50 ), Fixed( 50 ) );
	Point	a;
	Point	const b( Fixed( 5 ), Fixed( 10 ) );
	Point	const c( Fixed( 10 ), Fixed( 0 ) );

	if (bsp( a, b, c, point )) {
		std::cout << "Inside" << std::endl;
	} else {
		std::cout << "Outside" << std::endl;
	}

	return 0;
}
