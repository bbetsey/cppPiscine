#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int	main( void ) {

	IMateriaSource *src = new MateriaSource();	std::cout << "---\n";
	src->learnMateria(new Ice());				std::cout << "---\n";
	src->learnMateria(new Cure());				std::cout << "---\n";
	
	ICharacter *me = new Character("me");		std::cout << "---\n";
	
	AMateria *tmp;								std::cout << "---\n";
	tmp = src->createMateria("ice");			std::cout << "---\n";
	me->equip(tmp);								std::cout << "---\n";
	
	tmp = src->createMateria("cure");			std::cout << "---\n";
	me->equip(tmp);								std::cout << "---\n";
	
	ICharacter *bob = new Character("bob");		std::cout << "---\n";
	me->use(0, *bob);							std::cout << "---\n";
	me->use(1, *bob);							std::cout << "---\n";
	
	delete bob;
	delete me;
	delete src;
	
}
