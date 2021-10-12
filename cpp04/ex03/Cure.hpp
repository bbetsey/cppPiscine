#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure( void );
		Cure( const Cure & );
		virtual ~Cure( void );

		Cure		&operator = ( const Cure & );

		void		use( ICharacter &target );
		AMateria	*clone( void ) const;
};

#endif
