/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:02 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:14:03 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	int	i = 0;
	const ClapTrap genesis ("First of all");
	ClapTrap a (genesis);
	ClapTrap b ("Benoit");
	ClapTrap c ("Clapoteur");

	std::cout << std::endl;

	a.attack(b.retName());
	b.takeDamage(0);
	c.attack(b.retName());
	b.takeDamage(0);

	
	std::cout << "\na big men help  " << c.retName() << " at attacking "
	<< a.retName() << std::endl;
	while (i < 11)
	{
		c.attack(a.retName());
		a.takeDamage(1);
		i++;
	}
	std::cout << std::endl;
	a.beRepaired(5);
}
