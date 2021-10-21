#include <iostream>

int	main(int argc, char **argv) 
{
	int		i = 1;
	size_t	j;
	std::string	str;
	std::locale	loc;

	if (argc > 1)
	{
		while (i < argc)
		{
			str = argv[i++];
			j = 0;
			while(j < str.length())
				std::cout << toupper(str[j++], loc);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
