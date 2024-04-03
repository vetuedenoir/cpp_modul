#include <iostream>
#include <cstdlib>
#include <climits>
#include <string>
#include <sstream>

int	main(int ac, char **av)
{
	size_t	i = 1;
	long		num;
	long		n = INT_MIN;

	if (ac == 1)
	{
		std::string arg;
		getline(std::cin, arg);
		getline(std::cin, arg);
		std::stringstream	stream(arg);
		std::string str;

		while (getline(stream, str, ' '))
		{
			num = atoi(str.c_str());
			if (num < n)
			{
				std::cout << "la liste n est pas trier" << std::endl;
				return (0);
			}
			n = num;
		}
		std::cout << "la liste est trier" << std::endl;
		return 0;
	}
	while (av[i])
	{
		num = atol(av[i]);
		if (num < n)
		{
			std::cout << "la liste n est pas trier" << std::endl;
			return (0);
		}
		n = num;
		i++;
	}
	std::cout << "la liste est trier !!!" << std::endl;
	return 0;

}