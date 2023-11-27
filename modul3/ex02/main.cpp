/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:16:38 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:16:39 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	int	i = 0;
	const FragTrap genesis ("First of all");
	FragTrap a (genesis);
	FragTrap b ("Benoit");
	FragTrap c ("Clapoteur");
	FragTrap d ("Escavator");

	std::cout << std::endl;

	d.highFivesGuys();
	b.highFivesGuys();
	a.attack(b.retName());
	b.takeDamage(20);
	c.attack(b.retName());
	b.takeDamage(20);

	
	std::cout << "\n" << d.retName() << " is attacking "
	<< a.retName() << std::endl;
	while (i < 2)
	{
		d.attack(a.retName());
		a.takeDamage(20);
		i++;
	}
	std::cout << std::endl;
	a.beRepaired(5);
}
