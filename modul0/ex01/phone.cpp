/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:53:01 by kscordel          #+#    #+#             */
/*   Updated: 2023/10/05 18:18:33 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	repertoir;
	std::string	commande;

	std::cout << "Benvenue dans votre repertoir\n";
	std::cout << "\t> tapez ADD pour ajouter un contact\n";
	std::cout << "\t> tapez SEARCH pour chercher un contact\n";
	std::cout << "\t> tapez EXIT pour quitter votre repertoir\n";
	while (1)
	{
		std::cout << " > ";
		if (!std::getline(std::cin, commande))
			break ;
		if (commande.compare("ADD") == 0)
			repertoir.add();
		else if (commande.compare("SEARCH") == 0)
			repertoir.search();
		else if (commande.compare("EXIT") == 0)
			repertoir.ft_exit();
	}
	return (0);
}
