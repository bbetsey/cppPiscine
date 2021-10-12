#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generateRandomBase( void ) {
	srand( time(0) );
	switch (rand() % 3) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void	identify( Base *p ) {
	if (dynamic_cast<A*>( p ))
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B*>( p ))
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C*>( p ))
		std::cout << "Type: C" << std::endl;
}

void	identify( Base &p ) {

	try {
		(void)dynamic_cast<A&>( p );
		std::cout << "Type: A" << std::endl;
		return;
	} catch( std::exception ) {}

	try {
		(void)dynamic_cast<B&>( p );
		std::cout << "Type: B" << std::endl;
		return;
	} catch( std::exception ) {}

	try {
		(void)dynamic_cast<C&>( p );
		std::cout << "Type: C" << std::endl;
		return;
	} catch( std::exception ) {}

}

int	main( void ) {
	Base	*base;

	base = generateRandomBase();
	identify( base );
	identify( *base );
	if (base)
		delete base;
	return 0;
}
