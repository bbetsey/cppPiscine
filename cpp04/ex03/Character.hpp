#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter {
	private:
		std::string			name;
		AMateria			*inventory[4];

	public:
		Character( void );
		Character( std::string name );
		Character( const Character &src );
		virtual ~Character( void );

		Character			&operator = ( const Character &src );

		std::string	const	&getName( void ) const;
		void				equip( AMateria *m );
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );
};

#endif
