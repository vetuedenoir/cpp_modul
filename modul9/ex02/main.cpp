#include "PmergeMe.hpp"
#include <iostream>
#include <algorithm>

#include <iostream>
#include <list>

// Fonction pour fusionner deux listes triées
// void fusionner(std::list<unsigned int>& liste, std::list<unsigned int>::iterator debutP, std::list<unsigned int>::iterator finP, std::list<unsigned int>::iterator debutQ, std::list<unsigned int>::iterator finQ) {
//     std::list<unsigned int> result;

//     auto itP = debutP;
//     auto itQ = debutQ;

//     while (itP != finP && itQ != finQ) {
//         if (*itP <= *itQ) {
//             result.push_back(*itP);
//             ++itP;
//         } else {
//             result.push_back(*itQ);
//             ++itQ;
//         }
//     }

//     // Ajouter les éléments restants de p (s'il y en a)
//     result.insert(result.end(), itP, finP);

//     // Ajouter les éléments restants de q (s'il y en a)
//     result.insert(result.end(), itQ, finQ);

//     // Copier les éléments triés dans la partie correspondante de la liste d'origine
//     auto itResult = result.begin();
//     while (debutP != finQ) {
//         *debutP = *itResult;
//         ++debutP;
//         ++itResult;
//     }
// }

// void fusionner(std::list<unsigned int>& liste, std::list<unsigned int>::iterator debutP, std::list<unsigned int>::iterator finP, std::list<unsigned int>::iterator debutQ, std::list<unsigned int>::iterator finQ) {
//     std::list<unsigned int> result;

// 	unsigned int	tmp;
// 	std::list<unsigned int>::iterator	svq;

// 	std::cout << "deb de p = " << *debutP << " deb de q = " << *debutQ << std::endl;
// 	std::cout << "fin de p = " << *finP << " fin de q = " << *finQ << std::endl;
//  	while (debutP != debutQ  && debutP != liste.end() && debutP != finQ)
// 	{
// 		std::cout << "p = " << *debutP << "  et q = " << *debutQ << std::endl;
// 		if (*debutP < *debutQ)
// 		{	debutP++;
// 			//debutQ++;
// 		}
// 		else
// 		{
// 			svq = debutQ;
// 			if (svq != liste.end())
// 				svq++;
// 			tmp = *debutQ;
// 			liste.erase(debutQ);
// 			std::cout << "debutQ apres erase = " << *debutQ;
// 			liste.insert(debutP, tmp);
// 			std::cout << " , debutQ apres insert = " << *debutQ;
// 			debutQ = svq;
// 			// debutQ++;
// 			debutP++;
// 			std::cout << " , debutQ apres incrementation = " << *debutQ << std::endl;
// 			// if (debutQ != finQ)
// 			// 	debutQ++;
// 		}
// 		//PMergeMe::print_list(liste);
// 	}
// 	std::cout << "fp = " << *debutP << "  et fq = " << *debutQ << std::endl;
// 	PMergeMe::print_list(liste);
// 	std::cout << "\n---------------------\n" << std::endl;
// }

void fusionner(std::list<unsigned int>& liste, std::list<unsigned int>::iterator debutP, size_t P, std::list<unsigned int>::iterator debutQ, size_t Q)
{
	unsigned int	tmp;
	std::list<unsigned int>::iterator	svq;
	size_t	ip = 0;
	size_t	iq = 0;

 	while (ip < P || iq < Q)
	{
		std::cout << "p = " << *debutP << "  et q = " << *debutQ << std::endl;
		if (*debutP < *debutQ)
		{
			debutP++;
			ip++;
		}
		else
		{
			svq = debutQ;
			// if (svq != liste.end())
			// 	svq++;
			tmp = *debutQ;
			liste.erase(debutQ);
			liste.insert(debutP, tmp);
			std::cout << " , debutQ apres insert = " << *debutQ;
			debutQ = svq;
			iq++;
			debutQ++;
			std::cout << " , debutQ apres incrementation = " << *debutQ << std::endl;
			// if (debutQ != finQ)
			// 	debutQ++;
		}
		//PMergeMe::print_list(liste);
	}
	std::cout << "fp = " << *debutP << "  et fq = " << *debutQ << std::endl;
	PMergeMe::print_list(liste);
	std::cout << "\n---------------------\n" << std::endl;
}



// Fonction récursive pour trier une partie de la liste
void trier(std::list<unsigned int>& liste, std::list<unsigned int>::iterator debut, std::list<unsigned int>::iterator fin)
{
    size_t taille = std::distance(debut, fin);

    if (taille <= 1) {
        return;
    }

    // Diviser la partie de la liste en deux parties
    auto milieu = debut;
    std::advance(milieu, taille / 2);

    trier(liste, debut, milieu);
    trier(liste, milieu, fin);

    std::cout << "niveau " << taille << std::endl;

    // Fusionner les deux parties triées
    fusionner(liste, debut, taille / 2, milieu, taille / 2);
}


    


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
