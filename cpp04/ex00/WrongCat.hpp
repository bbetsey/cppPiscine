#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		WrongCat( const WrongCat &src );
		~WrongCat( void );

		WrongCat		&operator = ( const WrongCat &src );

		void	makeSound( void ) const;
};

#endif
