#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <ostream>
# include <cmath>

class Fixed {

	private:
		int					pointValue;
		static const int	fractionalBitsCount = 16;

	public:
		Fixed( void );
		Fixed( const int raw );
		Fixed( const float raw );
		Fixed( const Fixed &src );
		~Fixed( void );

		Fixed &operator = ( const Fixed &src );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

};

std::ostream &operator << ( std::ostream &ost, const Fixed &src );

#endif
