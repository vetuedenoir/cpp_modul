/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:03:42 by kscordel          #+#    #+#             */
/*   Updated: 2023/09/05 17:51:44 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *roi;

	Zombie dominic("dominic");
	dominic.announce();
	roi = newZombie("king kong");
	std::cout << " est le sujet de ";
	roi->announce();
	delete roi;
	randomChump("zouzou");
	return (0);
}
