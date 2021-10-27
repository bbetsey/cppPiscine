#include "DiamondTrap.hpp"


int	main( void ) {
	DiamondTrap	a( "Floyd" );
	DiamondTrap	b( a );
	DiamondTrap	c( "John" );
	
	c = a;

	a.performance();
	b.performance();
	c.performance();

	std::cout << std::endl;
	c.attack( "Socrat" );
	c.takeDamage( 2 );
	c.beRepaired( 5 );
	c.whoIam();

	std::cout << std::endl;
	std::cout << a.getName() << std::endl;
	a.takeDamage( 7 );
	
	std::cout << std::endl;
	std::cout << b.getName() << std::endl;
	std::cout << b.getHitpoints() << std::endl;

	std::cout << std::endl;

	return 0;
}
