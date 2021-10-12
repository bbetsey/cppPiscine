#include <iostream>
#include "FileManager.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: invalid input" << std::endl;
		return (1);
	}
	
	FileManager::replace(argv[1], argv[2], argv[3]);
	return (0);
}
