#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <math.h>
# include <iostream>

class ScalarConverter {
	private:
		double	value;

	public:

		class TooBigNumberException : public std::exception {
			private:
				const char	*type;
			public:
				TooBigNumberException( const char *type );
				virtual const char *what() const throw();
		};

		class TooSmallNumberException : public std::exception {
			private:
				const char	*type;
			public:
				TooSmallNumberException( const char	*type );
				virtual const char *what() const throw();
		};

		ScalarConverter( void );
		ScalarConverter( char *input );
		ScalarConverter( const ScalarConverter &src );
		~ScalarConverter( void );

		ScalarConverter	&operator = ( const ScalarConverter &src );
		operator float ( void ) const;
		operator double ( void ) const;
		operator int ( void ) const;
		operator char ( void ) const;

		std::string	toChar( void );
		std::string	toInt( void );
		std::string	toDouble( void );
		std::string	toFloat( void );
};

std::ostream	&operator << ( std::ostream &os, ScalarConverter &src );


#endif
