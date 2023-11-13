/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:59 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:15:00 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap () : ClapTrap()
{
	name = "";
	hitPoints = 100;
	energiePoints = 50;
	attackDamage = 20;
	mode = false;
	std::cout << "ScavTrap DEFAULT CONSTUCTOR is born." << std::endl;
}


ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energiePoints = 50;
	attackDamage = 20;
	mode = false;
	std::cout << "ScavTrap " << name << " is born." << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &copie) : ClapTrap()
{
	hitPoints = 100;
	energiePoints = 50;
	attackDamage = 20;
	mode = false;
	*this = copie;
	std::cout << "ScavTrap copie " << name << " is born." << std::endl;
}

ScavTrap::~ScavTrap ()
{
	std::cout << "ScavTrap " << name << " as died." << std::endl;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap &model)
{
	name = model.name;
	hitPoints = model.hitPoints;
	energiePoints = model.energiePoints;
	attackDamage = model.attackDamage;
	return *this;
}

void	ScavTrap::attack (const std::string& target)
{
	if (energiePoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
		--energiePoints;
	}
	else
		std::cout << "ScavTrap " << name << " as not enough energie to attack "
			<< target << "!" << std::endl;
}

void ScavTrap::guardGate ()
{
	if (!mode)
	{
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
		mode = true;
	}
	else
		std::cout << "ScavTrap " << name << " is already in Gate keeper mode." << std::endl;
}

