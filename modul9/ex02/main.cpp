#include "PmergeMe.hpp"
#include <iostream>
#include <algorithm>

#include <iostream>
#include <list>


int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "PmergeMe take a liste of unsigned integer in parameter" << std::endl;
		return 1;
	}
	std::vector<unsigned int>	vec;
	std::deque<unsigned int>	lis;
	size_t						size;
	try
	{
		if (ac > 2)
			initialisation1(vec, lis, av);
		else
			initialisation2(vec, lis, av[1]);
		size = vec.size();
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
	std::cout << "Before: "; 
	//PMergeMe::print_list(vec);

	clock_t	debut = clock();
	PMergeMe::merge_insertion_sort(vec);
	clock_t fin = clock();
	double	time_vector = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);
	std::cout << std::endl << "nombre de comparaison > " <<  PMergeMe::comparaison << std::endl;
	PMergeMe::comparaison = 0;
	
	debut = clock();
	PMergeMe::merge_insertion_sort(lis);
	fin = clock();
	double time_deque = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);

	std::cout << "After: "; 
	PMergeMe::print_list(lis);

	std::cout << "Time to process a range of " << size << " elements with std::vector : " << time_vector << " ml" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << time_deque << " ml" << std::endl;

	std::cout << std::endl << "nombre de comparaison > " <<  PMergeMe::comparaison << std::endl;
	return 0;

}
