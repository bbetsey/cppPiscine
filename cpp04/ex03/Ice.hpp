#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice: public AMateria {
	public:
		Ice( void );
		Ice( const Ice & );
		~Ice( void );

		Ice		&operator = ( const Ice & );

		void	use( ICharacter &target );
		AMateria	*clone( void ) const;
};


#endif
