#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "PmergeMe take a liste of unsigned integer in parameter" << std::endl;
		return 1;
	}
	std::vector<unsigned int>	vec;
	std::deque<unsigned int>	deq;
	size_t						size;
	try
	{
		if (ac > 2)
			initialisation1(vec, deq, av);
		else
			initialisation2(vec, deq, av[1]);
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
	PMergeMe::print_list(vec);

	clock_t	debut = clock();
	PMergeMe::merge_insertion_sort(vec);
	clock_t fin = clock();
	double	time_vector = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);
	
	debut = clock();
	PMergeMe::merge_insertion_sort(deq);
	fin = clock();
	double time_deque = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);

	std::cout << "After: "; 
	PMergeMe::print_list(deq);

	std::cout << "Time to process a range of " << size << " elements with std::vector : " << time_vector << " ml" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << time_deque << " ml" << std::endl;
	return 0;

}
