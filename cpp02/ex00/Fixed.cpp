#include "Fixed.hpp"


//MARK: Class Constructor

Fixed::Fixed( void )
{
	this->pointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}


//MARK: Class Destructor

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}


//MARK: Class Copy Constructor

Fixed::Fixed( const Fixed &orig )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = orig;
}


//MARK: Class Assignation Operator Overload

Fixed	&Fixed::operator = ( const Fixed &orig )
{
	std::cout << "Assignation operator called" << std::endl;
	this->pointValue = orig.getRawBits();
	return *this;
}


//MARK: Class Public Methods

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->pointValue;
}

void	Fixed::setRawBits( int const raw )
{
	pointValue = raw;
}
