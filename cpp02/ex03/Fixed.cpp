#include "Fixed.hpp"


//MARK: Class Constructor

Fixed::Fixed( void ) {
	pointValue = 0.0;
}

Fixed::Fixed( const int raw ) {
	pointValue = raw << fractionalBitsCount;
}

Fixed::Fixed( const float raw ) {
	pointValue = roundf( raw * ( 1 << fractionalBitsCount ) );
}


//MARK: Class Distructor

Fixed::~Fixed( void ) {}


//MARK: Class Copy Constructor

Fixed::Fixed( const Fixed &src ) {
	*this = src;
}


//MARK: Class Operators Overload

Fixed	&Fixed::operator = ( const Fixed &src ) {
	pointValue = src.pointValue;
	return *this;
}

Fixed	Fixed::operator + ( const Fixed &src ) const {
	return this->toFloat() + src.toFloat();
}

Fixed	Fixed::operator - ( const Fixed &src ) const {
	return this->toFloat() - src.toFloat();
}

Fixed	Fixed::operator * ( const Fixed &src ) const {
	return this->toFloat() * src.toFloat();
}

Fixed	Fixed::operator / ( const Fixed &src ) const {
	return this->toFloat() / src.toFloat();
}

bool	Fixed::operator >= ( const Fixed &src ) const {
	return this->toFloat() >= src.toFloat();
}

bool	Fixed::operator <= ( const Fixed &src ) const {
	return this->toFloat() <= src.toFloat();
}

bool	Fixed::operator == ( const Fixed &src ) const {
	return this->toFloat() == src.toFloat();
}

bool	Fixed::operator != ( const Fixed &src ) const {
	return this->toFloat() != src.toFloat();
}

bool	Fixed::operator > ( const Fixed &src ) const {
	return this->toFloat() > src.toFloat();
}

bool	Fixed::operator < ( const Fixed &src ) const {
	return this->toFloat() < src.toFloat();
}

Fixed	&Fixed::operator ++ ( void ) {
	this->pointValue++;
	return *this;
}

Fixed	Fixed::operator ++ ( int ) {
	Fixed	temp( *this );

	this->pointValue++;
	return temp;
}

Fixed	&Fixed::operator -- ( void ) {
	this->pointValue--;
	return *this;
}

Fixed	Fixed::operator -- ( int ) {
	Fixed	temp( *this );

	this->pointValue--;
	return temp;
}

std::ostream	&operator << ( std::ostream &ost, const Fixed &src ) {
	ost << src.toFloat();
	return ost;
}


//MARK: Class Methods (Public)

const Fixed	Fixed::max( const Fixed &obj, const Fixed &obj2 ) {
	if (obj.toFloat() >= obj2.toFloat()) {
		return obj;
	} 
	return obj2;
}

const Fixed	Fixed::min( const Fixed &obj, const Fixed &obj2 ) {
	if (obj.toFloat() < obj2.toFloat()) {
		return obj;
	}
	return obj2;
}

float	Fixed::toFloat( void ) const {
	return ((float)getRawBits() / (1 << fractionalBitsCount));
}

int	Fixed::toInt( void ) const {
	return (getRawBits() / (1 << fractionalBitsCount));
}

int	Fixed::getRawBits( void ) const {
	return pointValue;
}

void	Fixed::setRawBits( int const raw ) {
	pointValue = raw;
}
