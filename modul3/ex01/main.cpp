/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:42 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:14:43 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	int	i = 0;
	const ScavTrap genesis ("First of all");
	ScavTrap a (genesis);
	ScavTrap b ("Benoit");
	ScavTrap c ("Clapoteur");
	ScavTrap d ("Escavator");

	std::cout << std::endl;

	d.guardGate();
	d.guardGate();
	a.attack(b.retName());
	b.takeDamage(a.retAtkDmg());
	c.attack(b.retName());
	b.takeDamage(c.retAtkDmg());

	
	std::cout << "\n" << d.retName() << " is attacking "
	<< a.retName() << std::endl;
	while (i < 2)
	{
		d.attack(a.retName());
		a.takeDamage(d.retAtkDmg());
		i++;
	}
	std::cout << std::endl;
	a.beRepaired(5);
}
