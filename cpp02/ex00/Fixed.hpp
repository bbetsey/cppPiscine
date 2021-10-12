#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int					pointValue;
		static const int	fractionalBitsCount = 8;

	public:
		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed &orig );
		Fixed &operator = ( const Fixed &orig );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

#endif
 