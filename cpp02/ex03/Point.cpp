#include "Point.hpp"
#include "Fixed.hpp"


//MARK: Class Constructor

Point::Point( void ) {}

Point::Point( const Fixed &x, const Fixed &y ) : x(x), y(y) {}


//MARK: Class Copy Constructor

Point::Point( const Point &src ) {
	(*this) = src;
}


//MARK: Class Distructor

Point::~Point( void ) {}


//MARK: Class Assignation Overload

Point	&Point::operator = ( const Point & ) {
	return *this;
}


//MARK: Class Methods (Public)

float	Point::getX( void ) const {
	return this->x.toFloat();
}

float	Point::getY( void ) const {
	return  this->y.toFloat();
}