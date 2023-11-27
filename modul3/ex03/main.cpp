/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:18:02 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:18:03 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap dd("D'Artagnan");
	
	dd.guardGate();
	dd.highFivesGuys();
	dd.attack("Dumas");
	dd.whoAmI();
	std::cout << dd.retName() << " have " << dd.retHit() << " hitPoints" << std::endl;
	std::cout << dd.retName() << " have " << dd.retEnergie() << " energiePoints" << std::endl;
	std::cout << dd.retName() << " have " << dd.retAtkDmg() << " of attackDamage" << std::endl;


	return 0;
}
