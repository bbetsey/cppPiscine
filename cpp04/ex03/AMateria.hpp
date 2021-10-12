#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string			type;

	public:
		AMateria( void );
		AMateria( std::string type );
		AMateria( const AMateria &src );
		virtual ~AMateria( void );

		AMateria			&operator = ( const AMateria &src );

		std::string	const	&getType( void ) const;
		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter &target );
};

#endif
