#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <cstdlib>
#include <utility>


typedef	std::pair<unsigned int, unsigned int> ui_pair_t;

class PMergeMe
{
	typedef typename std::list<int>::iterator it_list_t;
	typedef typename std::vector<int>::iterator it_vector_t;
	typedef	std::pair<it_vector_t, it_vector_t> vit_pair_t;
	

	PMergeMe();
	PMergeMe(const PMergeMe &model);
	PMergeMe&	operator= (const PMergeMe &copie);

	static void	dichotomie(std::vector<int> &container, size_t limit_a, it_vector_t num);
	static void	insertion_dichotomique(std::vector<int> &container, size_t debut_b);
	static void	fusion_pair(vit_pair_t &tab, unsigned int debut, unsigned int milieu, unsigned int fin);
	static void	merge_sortPair(vit_pair_t &tab, unsigned int debut, unsigned int fin);

public:
	~PMergeMe();
	static	unsigned int comparaison;
	static void	merge_insertion_sort(std::vector<int> &container);
	static void	merge_insertion_sort(std::list<int> &container);


	template <typename IT> static void	swap_paire(IT &beg, IT &mid, const IT const_mid)
	{
		int		 	tmp;
	
		while (beg != const_mid)
		{
			// if (*beg < *mid)
			if (*beg < *mid)
			{
				tmp = *mid;
				*mid = *beg;
				*beg = tmp;
			}
			beg++;
			mid++;
			comparaison++;
		}
	};

	template <typename T> static void	print_list(T &container)
	{
		typename T::iterator it = container.begin();
			for (it = it; it != container.end(); it++)
			{
				std::cout << *it << " ";
			}
		//	std::cout << std::endl;
	};




};

ui_pair_t&	operator+ (ui_pair_t &out, const int &add);


#endif