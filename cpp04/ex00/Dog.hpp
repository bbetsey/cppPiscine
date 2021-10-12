#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog( void );
		Dog( const Dog &src );
		virtual ~Dog( void );

		Dog		&operator = ( const Dog &src );

		void	makeSound( void ) const;
};

#endif
