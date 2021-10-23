#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int					pointValue;
		static const int	fractionalBitsCount = 8;

	public:
		Fixed( void );
		Fixed( const int raw );
		Fixed( const float raw );
		Fixed( const Fixed &src );
		~Fixed( void );

		Fixed &operator = ( const Fixed &src );
		Fixed operator + ( const Fixed &src ) const;
		Fixed operator - ( const Fixed &src ) const;
		Fixed operator * ( const Fixed &src ) const;
		Fixed operator / ( const Fixed &src ) const;

		bool operator >= ( const Fixed &src ) const;
		bool operator <= ( const Fixed &src ) const;
		bool operator == ( const Fixed &src ) const;
		bool operator != ( const Fixed &src ) const;
		bool operator >  ( const Fixed &src ) const;
		bool operator <  ( const Fixed &src ) const;

		Fixed &operator ++ ( void );
		Fixed operator ++ ( int );
		Fixed &operator -- ( void );
		Fixed operator -- ( int );

		static const Fixed min( const Fixed &obj, const Fixed &obj2 );
		static const Fixed max( const Fixed &obj, const Fixed &obj2 );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

std::ostream &operator << ( std::ostream &ost, const Fixed &src );

#endif
