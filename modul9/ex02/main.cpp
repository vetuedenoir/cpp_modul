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
		std::cout << "this programe take a list of unsigned integer" << std::endl;
		return 1;
	}
	std::vector<int> vect;
	std::list<int> liste;
	create_list(vect, liste, av);
	//PMergeMe::print_list(vect);
	PMergeMe::print_list(vect);
	std::cout << std::endl;
	PMergeMe::merge_insertion_sort(vect);
	//PMergeMe::merge_insertion_sort(liste);
	PMergeMe::print_list(vect);
	std::cout << std::endl << PMergeMe::comparaison << std::endl;
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