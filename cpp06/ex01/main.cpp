#include <iostream>

typedef struct s_data
{
	int			number;
	std::string	street;
}				Data;

uintptr_t	serialize( Data *ptr ) {
	return reinterpret_cast<uintptr_t>( ptr );
}

Data	*deserialize( uintptr_t raw ) {
	return reinterpret_cast<Data *>( raw );
}

int	main( void ) {
	Data		*outputData = new Data;
	Data		*inputData;
	uintptr_t	raw;

	outputData->number = 42;
	outputData->street = "Nikolskaya";

	raw = serialize( outputData );
	inputData = deserialize( raw );

	std::cout << "Data: " + outputData->street + ", " + std::to_string( outputData->number ) << std::endl;
	std::cout << "Data: " + inputData->street + ", " + std::to_string( inputData->number ) << std::endl;

	delete outputData;

	return 0;
}
