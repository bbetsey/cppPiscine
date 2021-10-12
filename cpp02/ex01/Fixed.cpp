#include "Fixed.hpp"


//MARK: Class Constructor

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	pointValue = 0.0;
}

Fixed::Fixed( const int raw ) {
	std::cout << "Int constructor called" << std::endl;
	pointValue = raw << fractionalBitsCount;
}

Fixed::Fixed( const float raw ) {
	std::cout << "Float constructor called" << std::endl;
	pointValue = roundf(raw * (1 << fractionalBitsCount));
}


//MARK: Class Distructor

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}


//MARK: Class Copy Constructor

Fixed::Fixed( const Fixed &src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


//MARK: Class Assignation Operator Overload

Fixed &Fixed::operator = ( const Fixed &src ) {
	std::cout << "Assignation opearator called" << std::endl;
	pointValue = src.getRawBits();
	return *this;
}


//MARK: Ostream Operator Overload

std::ostream &operator << (std::ostream &ost, const Fixed &src ) {
	ost << src.toFloat();
	return ost;
}

//MARK: Class Methods (Public)

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
