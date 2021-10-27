#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class DiamondTrap: virtual public FragTrap, virtual public ScavTrap {
	private:
		std::string	name;

	public:
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &src );
		virtual ~DiamondTrap( void );

		DiamondTrap	&operator = ( const DiamondTrap &src );

		void	whoIam( void );
};

#endif
