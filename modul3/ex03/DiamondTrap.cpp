/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:29 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:17:30 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () : ClapTrap(), FragTrap(), ScavTrap()
{
	ClapTrap::name = "_clap_name";
	hitPoints = 100;
	energiePoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap DEFAULT CONSTRUCTOR is born." << std::endl;
}

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	hitPoints = 100;
	energiePoints = 50;
	attackDamage = 30;
	std::cout << "DiamondTrap " << name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &copie) : ClapTrap(), FragTrap(), ScavTrap()
{
	*this = copie;
	std::cout << "DiamondTrap copie " << name << " is born." << std::endl;
}

DiamondTrap::~DiamondTrap ()
{
	std::cout << "DiamondTrap " << name << " as died." << std::endl;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap &model)
{
	ClapTrap::name = model.ClapTrap::name;
	name = model.name;
	hitPoints = model.hitPoints;
	energiePoints = model.energiePoints;
	attackDamage = model.attackDamage;
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI ()
{
	std::cout << "DiamondTrap " << name << " has a ClapTrap name of " << ClapTrap::name << std::endl;
}
