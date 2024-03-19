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

void	PMergeMe::dichotomie(std::vector<unsigned int> &container, size_t s_recherche, it_vector_t &num)
{
	it_vector_t	it = container.begin();
	int			debut = 0;
	int		fin = s_recherche - 1;
	int		mil;
	unsigned int	tmp;

	while (debut <= fin)
	{
		mil = (debut + fin) / 2;
		if (*(it + mil) < *num)
		{
			debut = mil + 1;
		}
		else
			fin = mil - 1;
		comparaison++;
	}
	tmp = *num;
	container.erase(num);
	container.insert(it + debut, tmp);
}

void	PMergeMe::insertion_dichotomique(std::vector<unsigned int> &container, size_t debut_b)
{
	it_vector_t		it_a = container.begin();
	it_vector_t		it_i;
	const size_t	size = container.size();
	size_t			index = 0;
	size_t			i = 0;
	size_t			g = 0;
	bool			x = false;
	unsigned int	sizes_groupes[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 11184810, 22369622, 44739242, 89478486, 178956970, 357913942, 715827882};
	unsigned int	s_gr_search[] = {3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65735, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 67108863, 134217727, 268435455, 536870911, 1073741823, 2147483647};
	unsigned int	tmp;

	tmp = container[debut_b];
	container.erase(it_a + debut_b);
	container.insert(it_a, tmp);
	while (i < 30)
	{
		index = debut_b + sizes_groupes[i];
		if (index >= size)
		{
			x = true;
			index = size - 1;
		}
		it_i = it_a + index;
		for (g = index - debut_b; g > 0; g--)
		{
			if (s_gr_search[i] > debut_b)
				dichotomie(container, debut_b, it_i);
			else
				dichotomie(container, s_gr_search[i], it_i);
			debut_b++;
		}
		if (x)
			break ;
		i++;
	}
}

void	PMergeMe::fusion_pair(vit_pair_t &tab, unsigned int &debut, unsigned int &milieu, unsigned int &fin)
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
	unsigned int m;

	if (debut + 1 < fin)
	{
		m = (debut + fin) / 2;
		merge_sortPair(tab, debut, m);
		merge_sortPair(tab, m, fin);
		fusion_pair(tab, debut, m, fin);
	}
}

void	PMergeMe::merge_insertion_sort(std::vector<unsigned int> &container)
{
	size_t	mid = container.size() / 2;
	it_vector_t itbeg = container.begin();
	it_vector_t itmid = itbeg + mid;
	it_vector_t const_mid = itmid;

	swap_paire(itbeg, itmid, const_mid);
	itbeg = container.begin();
	itmid = const_mid;
	vit_pair_t	tab(itbeg, itmid);
	unsigned int debut = 0;
	merge_sortPair(tab, debut, mid);
	insertion_dichotomique(container, mid);
}

void	PMergeMe::dichotomie(std::deque<unsigned int> &container, size_t s_recherche, it_deq_t &num)
{
	it_deq_t	it = container.begin();
	int			debut = 0;
	int		fin = s_recherche - 1;
	int		mil;
	unsigned int	tmp;

	while (debut <= fin)
	{
		mil = (debut + fin) / 2;
		if (*(it + mil) < *num)
		{
			debut = mil + 1;
		}
		else
			fin = mil - 1;
		comparaison++;
	}
	tmp = *num;
	container.erase(num);
	container.insert(it + debut, tmp);
}

void	PMergeMe::insertion_dichotomique(std::deque<unsigned int> &container, size_t debut_b)
{
	it_deq_t		it_a = container.begin();
	it_deq_t		it_i;
	const size_t	size = container.size();
	size_t			index = 0;
	size_t			i = 0;
	size_t			g = 0;
	bool			x = false;
	unsigned int	sizes_groupes[] = {2, 2, 6, 10, 22, 42, 86, 170, 342, 682, 1366, 2730, 5462, 10922, 21846, 43690, 87382, 174762, 349526, 699050, 1398102, 2796202, 5592406, 11184810, 22369622, 44739242, 89478486, 178956970, 357913942, 715827882};
	unsigned int	s_gr_search[] = {3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65735, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 16777215, 33554431, 67108863, 134217727, 268435455, 536870911, 1073741823, 2147483647};
	unsigned int	tmp;

	tmp = container[debut_b];
	container.erase(it_a + debut_b);
	container.insert(it_a, tmp);
	it_a = container.begin();
	while (i < 30)
	{
		
		index = debut_b + sizes_groupes[i];
		if (index >= size)
		{
			x = true;
			index = size - 1;
		}
		it_i = container.begin() + index;
		for (g = index - debut_b; g > 0; g--)
		{
			if (s_gr_search[i] > debut_b)
			{
				while (g > 0)
				{
					it_i = container.end() - 1;
					dichotomie(container, debut_b, it_i);
					g--;
					debut_b++;
				}
				break ;
			}
			else
			{
				dichotomie(container, s_gr_search[i], it_i);
				it_i--;
			}
			debut_b++;
		}
		//debut_b += sizes_groupes[i];
		if (x)
			break ;
		i++;
	}
}

void	PMergeMe::fusion_pair(deqt_pair_t &tab, unsigned int &debut, unsigned int &milieu, unsigned int &fin)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int t = debut;

	std::deque<unsigned int> trie_g(tab.first + debut, tab.first + milieu);
	std::deque<unsigned int> suiv_g(tab.second + debut, tab.second + milieu);
	std::deque<unsigned int> trie_d(tab.first + milieu, tab.first + fin);
	std::deque<unsigned int> suiv_d(tab.second + milieu, tab.second + fin);

	unsigned int limi = (milieu - debut);
	unsigned int limj = (fin - milieu);

	while (i < limi && j < limj)
	{
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

void	PMergeMe::merge_sortPair(deqt_pair_t &tab, unsigned int debut, unsigned int fin)
{
	unsigned int m;

	if (debut + 1 < fin)
	{
		m = (debut + fin) / 2;
		merge_sortPair(tab, debut, m);
		merge_sortPair(tab, m, fin);
		fusion_pair(tab, debut, m, fin);
	}
}

void	PMergeMe::merge_insertion_sort(std::deque<unsigned int> &container)
{
	size_t	mid = container.size() / 2;
	it_deq_t itbeg = container.begin();
	it_deq_t itmid = itbeg + mid;
	it_deq_t const_mid = itmid;

	swap_paire(itbeg, itmid, const_mid);
	itbeg = container.begin();
	itmid = const_mid;
	deqt_pair_t	tab(itbeg, itmid);
	unsigned int debut = 0;
	merge_sortPair(tab, debut, mid);
	insertion_dichotomique(container, mid);
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

template void initialisation1(std::vector<unsigned int> &cont1, std::deque<unsigned int> &cont2, char **av);
template void initialisation2(std::vector<unsigned int> &cont1, std::deque<unsigned int> &cont2, std::string arg);