#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void ) {
	int		size = 6;
	Animal	*animals[size];

	std::cout << "\n--------- Animals Constructor ---------" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << std::endl;
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << "\n--------- Animals Sound ---------" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << std::endl;
		animals[i]->makeSound();
		delete animals[i];
	}
	
	return 0;
}
