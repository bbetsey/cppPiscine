#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	protected:
		static const int	startHitpoints = 100;
		static const int	startEnergyPoints = 50;
		static const int	startAttackDamage = 20;

	public:
		ScavTrap( std::string name );
		virtual ~ScavTrap( void );
		ScavTrap( const ScavTrap &src );

		ScavTrap	&operator = ( const ScavTrap &src );

		virtual void	attack( std::string const &target );
		void			guardGate( void );
};

#endif
