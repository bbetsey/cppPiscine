#ifndef CAT_H
# define CAT_H

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat( void );
		Cat( const Cat &src );
		virtual ~Cat( void );

		Cat		&operator = ( const Cat &src );

		void	makeSound( void ) const;
};

#endif
