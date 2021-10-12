#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class NotFoundNumberException : public std::exception {
	public:
		const char	*what() const throw() {
			return "This number not found!";
		}
};

template <typename T>
typename T::iterator	easyfind( T &container, int number ) {
	typename T::iterator	it;

	it = std::find( container.begin(), container.end(), number );
	if (it == container.end())
		throw NotFoundNumberException();
	return it;
}


#endif
