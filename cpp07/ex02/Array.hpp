#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array {
	private:
		size_t	length;
		T		*array;

	public:

		//MARK: Class OutOfArrayException
		
		class OutOfArrayRangeException : public std::exception {
			public:
				const char	*what() const throw() {
					return "Out of index range!";
				}
		};

		//MARK: - Class Constructor

		Array( void ) : length( 0 ), array( NULL ) {}

		Array( size_t length ) : length( length ) {
			array = new T[length];
		}

		//MARK: - Class Copy Constructor

		Array( const Array &src ) : length( src.length ), array( NULL ) {
			*this = src;
		}

		//MARK: Class Distructor

		~Array( void ) {
			if (array)
				delete[] array;
		}

		//MARK: - Class Assignation Overload

		Array	&operator = ( const Array &src ) {
			if (array)
				delete[] array;
			length = src.length;
			array = new T[src.length];
			for ( size_t i = 0; i < src.length; i++ )
				array[i] = src.array[i];
			return *this;
		}

		//MARK: - Class [] Overload

		T	&operator [] ( unsigned int i ) {
			if ( i >= length )
				throw OutOfArrayRangeException();
			return array[i];
		}

		T const	&operator [] ( unsigned int i ) const {
			if ( i >= length )
				throw OutOfArrayRangeException();
			return array[i];
		}

};

#endif
