/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:09:02 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/03 13:58:52 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook ()
{
	number = 0;
}

void PhoneBook::add ()
{
	std::string data[5];
	int i;

	std::cout << "remplisser les informations du contacte\n";	
	for (i = 0; i < 3; i++)
	{
		std::cout << "first name: ";
		std::getline(std::cin, data[0]);
		if (data[0][0] != '\0')
			break ;
		if (i == 2)
			return ;		
	}
	for (i = 0; i < 3; i++)
	{
		std::cout << "last name: ";
		std::getline(std::cin, data[1]);
		if (data[1][0] != '\0')
			break ;
		if (i == 2)
			return ;		
	}
	for (i = 0; i < 3; i++)
	{
		std::cout << "nickname: ";
		std::getline(std::cin, data[2]);
		if (data[2][0] != '\0')
			break ;
		if (i == 2)
			return ;		
	}
	for (i = 0; i < 3; i++)
	{
		std::cout << "phone number: ";
		std::getline(std::cin, data[3]);
		if (data[3][0] != '\0')
			break ;
		if (i == 2)
			return ;		
	}
	for (i = 0; i < 3; i++)
	{
		std::cout << "darkest secret: ";
		std::getline(std::cin, data[4]);
		if (data[4][0] != '\0')
			break ;
		if (i == 2)
			return ;		
	}
	if (number == 8)
	{
		for (i = 0; i < 7; i++)
			contacts[i] = contacts[i + 1];
		contacts[i].setcontact(data[0], data[1], data[2], data[3], data[4]);
	}
	else
	{
		contacts[number].setcontact(data[0], data[1], data[2], data[3], data[4]);
		number++;
	}
}

void	PhoneBook::search ()
{
	int	i;
	int	x;
	int	index;
	std::string buff;

	i = 0;
	if (number == 0)
	{
		std::cout << "pas de contact pour le moment\n";
		return ;
	}
	while (i < number)
	{
		contacts[i].for_search(i);
		std::cout << "\n";
		i++;
	}
	std::cout << "\nEntrez l'index du contact a afficher: ";
	for (i = 0; i < 3; i++)
	{
		index = 0;
		if (!std::getline(std::cin, buff))
			break ;
		x = -1;
		while (buff[++x])
		{
			if (!isdigit(buff[x]))
			{
				index = -1;
				break ;
			}			
		}
		if (index != -1)
			index = atoi(buff.c_str());
		if ((index >= number || index < 0) && i < 2)
			std::cout << "Mauvais index, reesayez: ";
		else if ((index >= number || index < 0) && i == 2)
			return ;
		else
			break ;
	}
	contacts[index].affiche();
}

void	PhoneBook::ft_exit()
{
	exit(0);
}
