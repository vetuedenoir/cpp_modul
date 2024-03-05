#include "PmergeMe.hpp"

unsigned int PMergeMe::comparaison = 0;

PMergeMe::PMergeMe() {}

PMergeMe::PMergeMe(const PMergeMe &model) {(void)model;}

PMergeMe&	PMergeMe::operator= (const PMergeMe &copie)
{
	(void)copie;
	return *this;
}

PMergeMe::~PMergeMe() {}

ui_pair_t&	operator+ (ui_pair_t &out, const int &add)
{
	out.first += add;
	out.second += add;
	return out;
}


void	PMergeMe::fusion_pair(vit_pair_t &tab, unsigned int debut, unsigned int milieu, unsigned int fin)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int t = debut;

	std::vector<unsigned int> trie_g(tab.first + debut, tab.first + milieu);
	std::vector<unsigned int> suiv_g(tab.second + debut, tab.second + milieu);
	std::vector<unsigned int> trie_d(tab.first + milieu, tab.first + fin);
	std::vector<unsigned int> suiv_d(tab.second + milieu, tab.second + fin);

	unsigned int limi = (milieu - debut);
	unsigned int limj = (fin - milieu);

	while (i < limi && j < limj)
	{
		// comparaison++;
		// if (trie_g[i] == trie_d[j])
		// {
		// 	*(tab.first + t) = trie_g[i];
		// 	*(tab.second + t++) = suiv_g[i++];
		// 	*(tab.first + t) = trie_d[j];
		// 	*(tab.second + t++) = suiv_d[j++]; 
		// }
		// else
		// {
			comparaison++;
			if (trie_g[i] < trie_d[j])
			{
				*(tab.first + t) = trie_g[i];
				*(tab.second + t++) = suiv_g[i++];
			}
			else
			{
				*(tab.first + t) = trie_d[j];
				*(tab.second + t++) = suiv_d[j++];
			}
		// }
	}
	while (i < limi)
	{
		*(tab.first + t) = trie_g[i];
		*(tab.second + t++) = suiv_g[i++];
	}
	while (j < limj)
	{
		*(tab.first + t) = trie_d[j]; 
		*(tab.second + t++) = suiv_d[j++];
	}
}

void	PMergeMe::merge_sortPair(vit_pair_t &tab, unsigned int debut, unsigned int fin)
{
	unsigned int m = 0;

	if(debut + 1 < fin)
	{
		m = (debut + fin) / 2;
		merge_sortPair(tab, debut, m);
		merge_sortPair(tab, m, fin);
		fusion_pair(tab, debut, m, fin);
	}
}

void	PMergeMe::dichotomie(std::vector<unsigned int> &container, size_t limit_a, it_vector_t num)
{
	//if (limit_a == 0)
	(void)container;
	(void)limit_a;
	(void)num;
	// if (container[limit_a / 2] < *num && limit_a == 1)
	// {
	// 	container.erase()
	// }


	while (limit_a != 0)
	{
		
	}

}

void	PMergeMe::insertion_dichotomique(std::vector<unsigned int> &container, size_t debut_b)
{
	(void)container;
	(void)debut_b;
	 it_vector_t		it_a = container.begin();
	 it_vector_t		it_b = it_a + debut_b;
	// unsigned int	limite_a = debut_b;
	// unsigned int	limite_b = container.size();
	 //unsigned int	x = debut_b;
	// unsigned int	gr = 2;
	// unsigned int	gr_past = 1;
	 int				tmp;
	// unsigned int	limite_gr;
	
	 tmp = container[debut_b++];
	 container.erase(it_b);
	 container.insert(it_a, tmp);
	// PMergeMe::print_list(container);
	// std::cout << " ok" << std::endl;
	// while (debut_b != limite_b)
	// {
	// 	limite_gr = gr + debut_b;
	// 	if (limite_gr > limite_b)
	// 		limite_gr = limite_b;
	// 	while (debut_b != limite_gr)
	// 	{
	// 		dichotomie(container, limite_a, it_b + debut_b++);
	// 	}
	// 	gr_past *= 2;
	// 	gr += gr_past;
	// 		std::cout << " limit_a = " << limite_a << " limite_b = " << limite_b << std::endl; 
	// std::cout << " gr = " << gr << std::endl;
	// }

	// std::cout << " limit_a = " << limite_a << " limite_b = " << limite_b << std::endl; 
	// std::cout << " gr = " << gr << std::endl;
}

void	PMergeMe::merge_insertion_sort(std::vector<unsigned int> &container)
{
	size_t	mid = container.size() / 2;
	it_vector_t itbeg = container.begin();
	it_vector_t itmid = itbeg + mid;
	it_vector_t const_mid = itmid;

	// std::cout << "itmid = " << *itmid << std::endl;
	swap_paire(itbeg, itmid, const_mid);
	// PMergeMe::print_list(container);
	// std::cout << std::endl;

	itbeg = container.begin();
	itmid = const_mid;
	vit_pair_t	tab(itbeg, itmid);
	merge_sortPair(tab, 0, mid);
	insertion_dichotomique(container, mid);
}

void	PMergeMe::merge_insertion_sort(std::list<unsigned int> &container)
{
	size_t	size = container.size();
	size_t	mid = size / 2;
	it_list_t itbeg = container.begin();
	it_list_t itmid = container.begin();

	for (size_t i = 0; i < mid; i++)
		itmid++;
	it_list_t const_mid = itmid;

	swap_paire(itbeg, itmid, const_mid);
	itbeg = container.begin();
	itmid = const_mid;

}

unsigned int	verif_arg(std::string str)
{
	int	i = 0;

	if (str.size() > 11 || str.size() < 1)
		throw ("Error: bad argument");
	if (str[0] == '-')
		throw ("Error: negative integer");
	if (str[0] != '+' && !isdigit(str[0]))
		throw ("Error: bad argument");
	while (str[++i])
	{
		if (!isdigit(str[i]))
			throw ("Error: bad argument");
	}
	long num = atol(str.c_str());
	if (num > INT_MAX)
		throw ("Error: bad argument");
	return num;
}

template <class T1, class T2>
void	initialisation1(T1 &cont1, T2 &cont2, char **av)
{
	unsigned int	i = 1;
	unsigned int	num;
	
	while (av[i])
	{
		num = verif_arg(av[i]);
		cont1.push_back(num);
		cont2.push_back(num);
		i++;
	}
}

template <class T1, class T2>
void	initialisation2(T1 &cont1, T2 &cont2, std::string arg)
{
	std::stringstream	stream(arg);
	std::string		str;
	unsigned int	num;


		while (getline(stream, str, ' '))
		{
			num = verif_arg(str);
			cont1.push_back(num);
			cont2.push_back(num);
		}
}

template void initialisation1(std::vector<unsigned int> &cont1, std::list<unsigned int> &cont2, char **av);
template void initialisation2(std::vector<unsigned int> &cont1, std::list<unsigned int> &cont2, std::string arg);