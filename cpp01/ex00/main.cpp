#include "Zombie.hpp"

int main( void )
{
	Zombie	*zombie;

	zombie = newZombie("Fred");
	randomChump("Harry");
	delete (zombie);
	return (0);
}
