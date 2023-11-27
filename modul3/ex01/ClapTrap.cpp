/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:24 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:14:25 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
	name  = "";
	hitPoints = 10;
	energiePoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap DEFAULT CONSTUCTOR is born." << std::endl;
}

ClapTrap::ClapTrap (const std::string name) : name(name)
{
	hitPoints = 10;
	energiePoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " is born." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &copie)
{
	*this = copie;
	std::cout << "ClapTrap copie " << name << " is born." << std::endl;
}

ClapTrap::~ClapTrap ()
{
	std::cout << "ClapTrap " << name << " as died." << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &model)
{
	name = model.name;
	hitPoints = model.hitPoints;
	energiePoints = model.energiePoints;
	attackDamage = model.attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energiePoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
		--energiePoints;
	}
	else
		std::cout << "ClapTrap " << name << " as not enough energie to attack "
			<< target << "!" << std::endl;
}

void ClapTrap::takeDamage (unsigned int amount)
{
	if (hitPoints > 0 && amount >= hitPoints)
	{
		std::cout << "ClapTrap " << name << " received " << hitPoints
			<< " points of damage!" << std::endl;
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " is KO!!!" << std::endl;
	}
	else if (hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " received " << amount
			<< " points of damage!" << std::endl;
		hitPoints -= amount;
		if (hitPoints == 0)
			std::cout << "ClapTrap " << name << " is KO!!!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is already KO!" << std::endl;
}

void	ClapTrap::beRepaired (unsigned int amount)
{
	if (energiePoints > 0)
	{
		std::cout << "ClapTrap " << name << " regained " <<  amount
			<< " Hit points!" << std::endl;
		--energiePoints;
		hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << name << " as not enough energie to repair."
			<< std::endl;
}

std::string ClapTrap::retName () const
{
	return (name);
}

unsigned int ClapTrap::retHit () const
{
	return (hitPoints);
}

unsigned int ClapTrap::retEnergie () const
{
	return (energiePoints);
}

unsigned int ClapTrap::retAtkDmg () const
{
	return (attackDamage);
}

