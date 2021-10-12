#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void ) {
	
	// const Animal* meta = new Animal();
	std::cout << "\n---------- Class Constructors ----------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n---------- Animal Types ----------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\n---------- Animal Sounds ----------" << std::endl;
	i->makeSound();
	j->makeSound();

	std::cout << "\n---------- Class Distructors ----------" << std::endl;
	delete j;
	delete i;

	return 0;
}