#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap( std::string name );
		virtual ~FragTrap( void );
		FragTrap( const FragTrap &src );

		FragTrap	&operator = ( const FragTrap &src );

		void	highFivesGuys( void );
};

#endif
