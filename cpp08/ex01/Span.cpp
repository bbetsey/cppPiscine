#include "Span.hpp"


//MARK: - Class Constructor

Span::Span( void ) : length( 100 )  {}

Span::Span( unsigned int const length ) : length( length ) {}


//MARK: - Class Copy Constructor

Span::Span( const Span &src ) {
	*this = src;
}


//MARK: - Class Distructor

Span::~Span( void ) {}


//MARK: - Class Assignation Overload

Span	&Span::operator = ( const Span &src ) {
	if (this != &src) {
		length = src.length;
		set.clear();
		set = src.set;
	}
	return *this;
}


//MARK: - Class Methods

void	Span::checkSet( void ) {
	if (length < 2 || set.size() < 2) {
		throw Span::TooSmallContainerException();
	}
}

unsigned int	Span::getLength( void ) {
	return length;
}

unsigned int	Span::getSize( void ) {
	return set.size();
}

unsigned int	Span::shortestSpan( void ) {
	unsigned int					resultSpan = UINT_MAX;
	unsigned int					currentSpan;
	std::multiset<int>::iterator	it;

	checkSet();
	it = set.begin();
	--set.end();
	while(it != set.end()) {
		currentSpan = std::abs(*it - *(++it));
		if (currentSpan < resultSpan)
			resultSpan = currentSpan;
	}
	return resultSpan;
}

unsigned int	Span::longestSpan( void ) {
	checkSet();
	return *(--set.end()) - *(set.begin());
}

void	Span::addNumber( int const number ) {
	if (set.size() == length)
		throw Span::NoEnoughSpaceException();
	set.insert( number );
}


//MARK: - Class Exceptions

const char	*Span::NoEnoughSpaceException::what() const throw() {
	return "Error: not enough space";
}

const char	*Span::TooSmallContainerException::what() const throw() {
	return "Error: the container must contain more than 1 element";
}
