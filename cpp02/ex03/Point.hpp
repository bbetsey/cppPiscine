#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

class Point {

	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point( void );
		Point( const Fixed &x, const Fixed &y );
		Point( const Point &src );
		~Point( void );

		Point	&operator = ( const Point &src );
		float	getX( void ) const;
		float	getY( void ) const;

};

bool	bsp( const Point a, const Point b, const Point c, const Point point );

#endif
