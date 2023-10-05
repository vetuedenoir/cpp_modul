/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:48:33 by kscordel          #+#    #+#             */
/*   Updated: 2023/09/05 17:53:00 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	nom = name;
}

Zombie::~Zombie()
{
	std::cout << "\n" << "Le Zombie " << nom << " is dead\n";
}

void Zombie::announce(void)
{
	std::cout << nom << ": BraiiiiiiinnnzzzZ...";
}