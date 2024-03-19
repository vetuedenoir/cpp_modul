#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <utility>
#include <climits>
#include <sstream>

typedef	std::pair<unsigned int, unsigned int> ui_pair_t;

class PMergeMe
{
	typedef typename std::deque<unsigned int>::iterator it_deq_t;
	typedef typename std::vector<unsigned int>::iterator it_vector_t;
	typedef	std::pair<it_vector_t, it_vector_t> vit_pair_t;
	typedef std::pair<it_deq_t, it_deq_t> deqt_pair_t;

	PMergeMe();
	PMergeMe(const PMergeMe &model);
	PMergeMe&	operator= (const PMergeMe &copie);

	static void	dichotomie(std::vector<unsigned int> &container, size_t limit_a, it_vector_t &num);
	static void	insertion_dichotomique(std::vector<unsigned int> &container, size_t debut_b);
	static void	fusion_pair(vit_pair_t &tab, unsigned int &debut, unsigned int &milieu, unsigned int &fin);
	static void	merge_sortPair(vit_pair_t &tab, unsigned int debut, unsigned int fin);

	static void	dichotomie(std::deque<unsigned int> &container, size_t limit_a, it_deq_t &num);
	static void	insertion_dichotomique(std::deque<unsigned int> &container, size_t debut_b);
	static void	fusion_pair(deqt_pair_t &tab, unsigned int &debut, unsigned int &milieu, unsigned int &fin);
	static void	merge_sortPair(deqt_pair_t &tab, unsigned int debut, unsigned int fin);

public:
	~PMergeMe();
	static	unsigned int comparaison;
	static void	merge_insertion_sort(std::vector<unsigned int> &container);
	static void	merge_insertion_sort(std::deque<unsigned int> &container);

	

	template <typename IT> static void	swap_paire(IT &beg, IT &mid, const IT const_mid)
	{
		int		 	tmp;
	
		while (beg != const_mid)
		{
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
		typename T::iterator it;
		for (it = container.begin(); it != container.end(); it++)
		{
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	};
};

template <class T1, class T2>
	void	initialisation1(T1 &cont1, T2 &cont2, char **av);

	template <class T1, class T2>
	void	initialisation2(T1 &cont1, T2 &cont2, std::string arg);


#endif