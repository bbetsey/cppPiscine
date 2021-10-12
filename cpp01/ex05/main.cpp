#include "Karen.hpp"

int main( int argc, char **argv )
{
	Karen	karen;

	if (argc > 1)
		karen.complain(argv[1]);
	else
		std::cout << "Please, enter a level for test" << std::endl;
	return (0);
}
