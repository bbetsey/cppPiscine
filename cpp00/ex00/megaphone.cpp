#include <iostream>
using namespace std;


int	main(int argc, char **argv) 
{
	int		i = 1;
	size_t	j;
	string	str;
	locale	loc;

	if (argc > 1)
	{
		while (i < argc)
		{
			str = argv[i++];
			j = 0;
			while(j < str.length())
				cout << toupper(str[j++], loc);
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return (0);
}
