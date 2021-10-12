#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap {

	protected:
		std::string		name;
		int				hitpoints;
		int				energyPoints;
		int				attackDamage;

	public:
		ClapTrap( std::string name );
		ClapTrap( std::string name, int hitpoints, int energyPoints, int attackDamage );
		virtual ~ClapTrap( void );
		ClapTrap( const ClapTrap &src );

		ClapTrap		&operator = ( const ClapTrap &src );

		virtual void	attack( std::string const &target );
		virtual void	takeDamage( unsigned int amount );
		virtual void	beRepaired( unsigned int amount );

		std::string		getName( void ) const;
		int				getHitpoints( void ) const;
		int				getEnergyPoints( void ) const;
		int				getAttackDamage( void ) const;

		void			setName( std::string name );
		void			setHitpoints( unsigned int value );
		void			setEnergyPoints( unsigned int value );
		void			setAttackDamage( unsigned int value );

};

#endif
