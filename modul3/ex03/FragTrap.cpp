/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:40 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:17:42 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap()
{
	name = "";
	hitPoints = 100;
	energiePoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap DEFAULT CONSTUCTOR is born." << std::endl;
}


FragTrap::FragTrap (std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energiePoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " is born." << std::endl;
}

FragTrap::FragTrap (const FragTrap &copie) : ClapTrap()
{
	*this = copie;
	std::cout << "FragTrap copie " << name << " is born." << std::endl;
}

FragTrap::~FragTrap ()
{
	std::cout << "FragTrap " << name << " as died." << std::endl;
}

FragTrap&	FragTrap::operator= (const FragTrap &model)
{
	name = model.name;
	hitPoints = model.hitPoints;
	energiePoints = model.energiePoints;
	attackDamage = model.attackDamage;
	return *this;
}

void	FragTrap::attack (const std::string& target)
{
	if (energiePoints > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
		--energiePoints;
	}
	else
		std::cout << "FragTrap " << name << " as not enough energie to attack "
			<< target << "!" << std::endl;
}

void    FragTrap::highFivesGuys ()
{
    std::cout << "Hey ! Do a High Fives !" << std::endl;
}

