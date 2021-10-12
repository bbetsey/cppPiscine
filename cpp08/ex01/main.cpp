# include "Span.hpp"

int main( void ) {
	Span	arr( 10000 );

	std::cout << "\n********** No Elements **********" << std::endl;
	try {
		std::cout << "Shortest Span: " << arr.shortestSpan() << std::endl;
	} catch( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n********** One Element **********" << std::endl;
	try {
		arr.addNumber( 5 );
		std::cout << "Shortest Span: " << arr.shortestSpan() << std::endl;
	} catch( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n********** 5 Elements **********" << std::endl;
	try {
		arr.addNumber( 3 );
		arr.addNumber( 17 );
		arr.addNumber( 9 );
		arr.addNumber( 11 );
		std::cout << "Shortest Span: " << arr.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << arr.longestSpan() << std::endl;
	} catch( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n********** 5000 Elements **********" << std::endl;
	try {
		std::vector<int>	vec;
		srand( time(0) );
		for(int i = 0; i < 5000; i++)
			vec.push_back( rand() % 5000 );
		arr.addNumber( vec.begin(), vec.end() );
		std::cout << "* Adding 5000 items is over" << std::endl;
		std::cout << "Arr size: " << arr.getSize() << std::endl;
		std::cout << "Shortest Span: " << arr.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << arr.longestSpan() << std::endl;
	} catch ( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n********** + 5000 Elements **********" << std::endl;
	try {
		std::vector<int>	vec;
		srand( time(0) );
		for(int i = 0; i < 5000; i++)
			vec.push_back( rand() % 5000 );
		arr.addNumber( vec.begin(), vec.end() );
		std::cout << "* Adding 5000 items is over" << std::endl;
		std::cout << "Arr size: " << arr.getSize() << std::endl;
		std::cout << "Shortest Span: " << arr.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << arr.longestSpan() << std::endl;
	} catch ( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	return 0;
}
