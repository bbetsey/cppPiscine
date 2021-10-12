#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <set>


class Span {
	private:
		unsigned int		length;
		std::multiset<int>	set;

		void				checkSet( void );

	public:

		class NoEnoughSpaceException : public std::exception {
			public:
				const char *what() const throw();
		};

		class TooSmallContainerException : public std::exception {
			public:
				const char *what() const throw();
		};

		Span( void );
		Span( unsigned int const length );
		Span( const Span &src );
		virtual ~Span( void );

		Span	&operator = ( const Span &src );

		unsigned int	getLength( void );
		unsigned int	getSize( void );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

		void			addNumber( int const number );

		template <typename InputIterator>
		void	addNumber( InputIterator first, InputIterator last ) {
			if (set.size() + (std::distance( first, last )) > length)
				throw Span::NoEnoughSpaceException();
			set.insert( first, last );
		}
};


#endif
