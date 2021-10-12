#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
	protected:
		std::string		type;

	public:
		Animal( void );
		Animal( const Animal &src );
		virtual ~Animal( void );

		Animal	&operator = ( const Animal &src );

		virtual void	makeSound( void ) const;

		std::string		getType( void ) const;
};

#endif
