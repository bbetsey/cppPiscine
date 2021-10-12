#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal {
	protected:
		std::string		type;

	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &src );
		~WrongAnimal( void );

		WrongAnimal	&operator = ( const WrongAnimal &src );

		void	makeSound( void ) const;

		std::string		getType( void ) const;
};

#endif
