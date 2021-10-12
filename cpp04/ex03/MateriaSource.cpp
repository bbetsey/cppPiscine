#include "MateriaSource.hpp"


//MARK: - Class Constructor

MateriaSource::MateriaSource( void ) {
	for(int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	std::cout << "MateriaSource Class Default Constructor called" << std::endl;
}


//MARK: - Class Copy Constructor

MateriaSource::MateriaSource( const MateriaSource &src ) {
	*this = src;
	std::cout << "MateriaSource Copy Class Constructor called" << std::endl;
}


//MARK: - Class Destructor

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource Distructor called" << std::endl;
}


//MARK: - Class Assignation Overload

MateriaSource	&MateriaSource::operator = ( const MateriaSource &src ) {
	if (this != &src) {
		for(int i = 0; i < 4; i++) {
			if (this->materias[i])
				delete this->materias[i];
			if (src.materias[i])
				this->materias[i] = src.materias[i];
		}
	}
	return *this;
}


//MARK: - Class Methods

void	MateriaSource::learnMateria( AMateria *m ) {
	for(int i = 0; i < 4; i++) {
		if (!this->materias[i]) {
			this->materias[i] = m;
			break;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const &type ) {
	for(int i = 0; i < 4; i++) {
		if (!this->materias[i])
			break;
		if (this->materias[i]->getType() == type)
			return this->materias[i]->clone();
	}
	std::cout << "This type can't create" << std::endl;
	return NULL;
}
