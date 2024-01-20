/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:00:17 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:00:18 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (const std::string& name , Weapon& weapon) : name(name), weapon(weapon)
{}

void	HumanA::attack ()
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

HumanA::~HumanA () {}
