#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

	private:
		std::string	name;
		int			hitpoints;
		int			energyPoints;
		int			attackDamage;

	public:
		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( const ClapTrap &src );

		ClapTrap	&operator = ( const ClapTrap &src );

		void		attack( std::string const &target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		int			getHitpoints( void );
		int			getEnergyPoints( void );
		int			getAttackDamage( void );
		std::string	getName( void );
};

#endif
