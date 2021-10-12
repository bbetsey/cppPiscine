#include "ScalarConverter.hpp"

int main( int argc, char **argv ) {
	if (argc == 2) {
		ScalarConverter scalar( argv[1] );
		std::cout << scalar;
	} else {
		std::cout << "try: ./test [number]" << std::endl;
	}
	return 0;
}
