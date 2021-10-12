#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( std::string name );
		virtual ~ScavTrap( void );
		ScavTrap( const ScavTrap &src );

		ScavTrap	&operator = ( const ScavTrap &src );

		void	guardGate( void );
		void	attack( std::string const &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
