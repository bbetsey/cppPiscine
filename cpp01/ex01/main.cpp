#include "Zombie.hpp"

int main( void )
{
	Zombie	*zombies;

	zombies = zombieHorde(10, "Mickle");
	delete[] zombies;
	return (0);
}
