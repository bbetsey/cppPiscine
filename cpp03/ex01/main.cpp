#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	ScavTrap	a( "Floyd" );
	ScavTrap	b( a );
	ScavTrap	c( "John" );
	
	c = a;

	a.performance();
	b.performance();
	c.performance();

	std::cout << std::endl;
	c.attack( "Socrat" );
	c.takeDamage( 2 );
	c.beRepaired( 5 );
	c.guardGate();

	std::cout << std::endl;
	a.getName();
	a.takeDamage( 7 );
	
	std::cout << std::endl;
	b.getName();
	b.getHitpoints();

	std::cout << std::endl;

	return 0;
}
