#include "PmergeMe.hpp"
#include <iostream>
#include <algorithm>

#include <iostream>
#include <list>

// Fonction pour fusionner deux listes triées
void fusionner(std::list<unsigned int>::iterator debutP, std::list<unsigned int>::iterator finP, std::list<unsigned int>::iterator debutQ, std::list<unsigned int>::iterator finQ) {
    std::list<unsigned int> result;

    auto itP = debutP;
    auto itQ = debutQ;

    while (itP != finP && itQ != finQ) {
        if (*itP <= *itQ) {
            result.push_back(*itP);
            ++itP;
        } else {
            result.push_back(*itQ);
            ++itQ;
        }
    }

    // Ajouter les éléments restants de p (s'il y en a)
    result.insert(result.end(), itP, finP);

    // Ajouter les éléments restants de q (s'il y en a)
    result.insert(result.end(), itQ, finQ);

    // Copier les éléments triés dans la partie correspondante de la liste d'origine
    auto itResult = result.begin();
    while (debutP != finQ) {
        *debutP = *itResult;
        ++debutP;
        ++itResult;
    }
}



// Fonction récursive pour trier une partie de la liste
void trier(std::list<unsigned int>& liste, std::list<unsigned int>::iterator debut, std::list<unsigned int>::iterator fin) {
    size_t taille = std::distance(debut, fin);

    if (taille <= 1) {
        return;
    }

    // Diviser la partie de la liste en deux parties
    auto milieu = debut;
    std::advance(milieu, taille / 2);

    // Trier récursivement les deux parties
    trier(liste, debut, milieu);
    trier(liste, milieu, fin);

    // Fusionner les deux parties triées
    fusionner(debut, milieu, milieu, fin);
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
	// PMergeMe::merge_insertion_sort(vec);
	sort(vec.begin(), vec.end());
	clock_t fin = clock();
	double	time = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);
	std::cout << " sorted in " << time << " ml" << std::endl;

	debut = clock();

	// auto debutP = lis.begin();
    // auto finP = std::next(debutP, 3);  // Supposons que les trois premiers éléments sont de P
    // auto debutQ = finP;
    // auto finQ = lis.end();

	// trier(lis, lis.begin(), lis.end());
	//std::sort(lis.begin(), lis.end());
	lis.sort();
	fin = clock();
	time = (fin - debut) /static_cast<double>(CLOCKS_PER_SEC / 1000);
	std::cout << "liste sorted in " << time << " ml" << std::endl;
	//PMergeMe::print_list(lis);
	 std::cout << std::endl << "nombre de comparaison > " <<  PMergeMe::comparaison << std::endl;
	return 0;

}
