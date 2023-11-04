/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:03:42 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/03 12:53:01 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		i;

	horde = zombieHorde(5, "mechant");
	if (horde == NULL)
		return (1);
	for (i = 0; i < 5; i++)
	{
		horde[i].announce();
		std::cout << "\n";
	}
	delete[] horde;
	return (0);
}
