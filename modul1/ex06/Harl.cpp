/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:53:19 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:53:20 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug ()
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I really do !\n\n";
}

void	Harl::info ()
{
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger !\n";
	std::cout << "If you did, I wouldn’t be asking for more !\n\n";
}

void	Harl::warning ()
{
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years ";
	std::cout << "whereas you started working here since last month.\n\n";
}

void	Harl::error ()
{
	std::cout << "This is unacceptable !\n";
	std::cout << "I want to speak to the manager now.\n\n"; 
}

void	Harl::complain (std::string level)
{
	int	i = 0;

	while (i < 4)
	{
		if (tab[i].name.compare(level) == 0)
			break ;
		i++;
	}
	if (i == 4)
		i = -1;
	switch (i)
	{
		case 0:
			(this->*tab[0].Fonc_ptr)();
		case 1:
			(this->*tab[1].Fonc_ptr)();
		case 2:
			(this->*tab[2].Fonc_ptr)();
		case 3:
			(this->*tab[3].Fonc_ptr)();
			break ;
		default:
			std::cout << "[ Probably complaining about ";
			std::cout << "insignificant problems ]\n";
	}
}

Harl::Harl (void)
{
	tab[0].name = "DEBUG";
	tab[0].Fonc_ptr = &Harl::debug;
	tab[1].name = "INFO";
	tab[1].Fonc_ptr = &Harl::info;
	tab[2].name = "WARNING";
	tab[2].Fonc_ptr = &Harl::warning;
	tab[3].name = "ERROR";
	tab[3].Fonc_ptr = &Harl::error;
}
