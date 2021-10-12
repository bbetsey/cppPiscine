#include "ScalarConverter.hpp"


//MARK: - Class Constructor

ScalarConverter::ScalarConverter( void ) : value( 0 ) {}

ScalarConverter::ScalarConverter( char *input ) {
	value = atof( input );
}


//MARK: - Class Copy Constructor

ScalarConverter::ScalarConverter( const ScalarConverter &src ) {
	*this = src;
}


//MARK: - Class Distructor

ScalarConverter::~ScalarConverter( void ) {}


//MARK: - Class Assignation Overload

ScalarConverter	&ScalarConverter::operator = ( const ScalarConverter &src ) {
	if (this != &src)
		value = src.value;
	return *this;
}


//MARK: - Class Ostream Overload

std::ostream	&operator << ( std::ostream &os, ScalarConverter &src ) {
	os << src.toChar();
	os << src.toInt();
	os << src.toFloat();
	os << src.toDouble();
	return os;
}


//MARK: - Class Cast Overload

ScalarConverter::operator float( void ) const {
	return static_cast<float>( this->value );
}

ScalarConverter::operator double( void ) const {
	return static_cast<double>( value );
}

ScalarConverter::operator int( void ) const {
	if (value > static_cast<double>( INT_MAX )) {
		throw ScalarConverter::TooBigNumberException( "int" );
	} else if ( value < static_cast<double>( INT_MIN )) {
		throw ScalarConverter::TooSmallNumberException( "int" );
	} else {
		return static_cast<int>( value );
	}
}

ScalarConverter::operator char( void ) const {
	if (value > static_cast<double>( INT_MAX )) {
		throw ScalarConverter::TooBigNumberException( "char" );
	} else if ( value < static_cast<double>( INT_MIN )) {
		throw ScalarConverter::TooSmallNumberException( "char" );
	} else {
		return static_cast<int>( value );
	} 
}


//MARK: - Class Methods

std::string	ScalarConverter::toChar( void ) {
	std::string output = "char: ";
	if (isnan( value ))
		output += "impossible";
	else {
		try {
			char c = static_cast<char>( *this );
			if (std::isprint( c )) {
				output += "\'";
				output += c;
				output += "\'";
			}
			else
				output += "not displayable";
		} catch( std::exception &e ) {
			output += e.what();
		}
	}
	return output + "\n";
}

std::string	ScalarConverter::toInt( void ) {
	std::string output = "int: ";
	if (isnan( value ))
		output += "impossible";
	else {
		try {
			int n = static_cast<int>( *this );
			output += std::to_string( n );
		} catch( std::exception &e ) {
			output += e.what();
		}
	}
	return output += "\n";
}

std::string	ScalarConverter::toDouble( void ) {
	std::string output = "double: ";
	double d = static_cast<double>( *this );
	if (isinf(d)) {
		if (d > 0)
			output += "+inf";
		else
			output += "-inf";
	}
	else if (isnan(d))
		output += "nan";
	else {
		output += std::to_string( d );
	}
	return output += "\n";
}

std::string	ScalarConverter::toFloat( void ) {
	std::string output = "float: ";
	float d = static_cast<float>( *this );
	if (isinf(d)) {
		if (d > 0)
			output += "+inff";
		else
			output += "-inff";
	}
	else if (isnan(d))
		output += "nanf";
	else {
		output += std::to_string( d ) + "f";
	}
	return output += "\n";
}


//MARK: - Class TooBigNumberException

ScalarConverter::TooBigNumberException::TooBigNumberException( const char *type ) : std::exception(), type( type ) {}

const char	*ScalarConverter::TooBigNumberException::what() const throw () {
	std::string t = type;
	std::string output = "error: too big number for " + t;
	const char *msg = output.c_str();
	return msg;
}


//MARK: - Class TooSmallNumberException

ScalarConverter::TooSmallNumberException::TooSmallNumberException( const char *type ) : std::exception(), type( type ) {}

const char	*ScalarConverter::TooSmallNumberException::what() const throw() {
	std::string t = type;
	std::string output = "error: too small number for " + t;
	const char *msg = output.c_str();
	return msg;
}
