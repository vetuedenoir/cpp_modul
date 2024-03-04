#include "PmergeMe.hpp"
#include <iostream>

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
	std::vector<int>	vec;
	std::list<int>	lis;
	std::list<int>::iterator it;
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
	PMergeMe::print_list(vec);
	std::cout << std::endl;
	PMergeMe::merge_insertion_sort(vec);
	//PMergeMe::merge_insertion_sort(liste);
	PMergeMe::print_list(vec);
	// std::cout << std::endl << PMergeMe::comparaison << std::endl;
	// for (int i = 0; i < 0; i++)
	// {
	// 	try
	// 	{
	// 		std::vector<int> vect;
	// 	std::list<int> liste;
	// 	create_list(vect, liste, av);
	// 	//PMergeMe::print_list(vect);
	// 	PMergeMe::merge_insertion_sort(vect);
	// 	PMergeMe::merge_insertion_sort(liste);
	// 	//PMergeMe::print_list(vect);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
		
	// }


	return 0;

}