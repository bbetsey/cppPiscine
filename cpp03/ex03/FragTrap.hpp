#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	protected:
		static const int	startHitpoints = 100;
		static const int	startEnergyPoints = 100;
		static const int	startAttackDamage = 30;

	public:
		FragTrap( std::string name );
		virtual ~FragTrap( void );
		FragTrap( const FragTrap &src );

		FragTrap	&operator = ( const FragTrap &src );

		void	highFivesGuys( void );
};

#endif
