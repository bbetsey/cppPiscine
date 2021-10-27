#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap	a( "Floyd" );
	ClapTrap	b( a );
	ClapTrap	c( "John" );
	
	c = a;

	a.performance();
	b.performance();
	c.performance();

	std::cout << std::endl;
	c.attack( "Socrat" );
	c.takeDamage( 2 );
	c.beRepaired( 5 );

	std::cout << std::endl;
	a.getName();
	a.takeDamage( 7 );
	
	std::cout << std::endl;
	b.getName();
	b.getHitpoints();

	return 0;
}
