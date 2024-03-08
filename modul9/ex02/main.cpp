#include "PmergeMe.hpp"
#include <iostream>
#include <algorithm>

void	create_list(std::vector<int> &cont1, std::list<int> &cont2, char **av)
{
	int	i = 1;
	int	nb = 0;

	while (av[i])
	{
		nb = atoi(av[i]);
		cont1.push_back(nb);
		cont2.push_back(nb);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "PmergeMe take a liste of unsigned integer in parameter" << std::endl;
		return 1;
	}
	std::vector<unsigned int>	vec;
	std::list<unsigned int>	lis;
	std::list<unsigned int>::iterator it;
	try
	{
		if (ac > 2)
			initialisation1(vec, lis, av);
		else
			initialisation2(vec, lis, av[1]);
	}
	catch (const std::exception *e)
	{
		std::cout << e << std::endl;
		return 1;
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
		return 1;
	};
	// PMergeMe::print_list(vec);
	// std::cout << std::endl;

	clock_t	debut = clock();
	PMergeMe::merge_insertion_sort(vec);
	//sort(vec.begin(), vec.end());
	clock_t fin = clock();
	double	time = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);
	std::cout << " sorted in " << time << " ml" << std::endl;

	 PMergeMe::print_list(vec);
	 std::cout << std::endl << PMergeMe::comparaison << std::endl;
	return 0;

}