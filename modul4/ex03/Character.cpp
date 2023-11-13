/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:24:53 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:54 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character (std::string name) : charge(0) , name(name)
{}

Character::Character (const Character &copy)
{
	for (charge = 0; charge < copy.charge; charge++)
		inventaire[charge] = copy.inventaire[charge]->clone();
	charge = copy.charge;
}

Character::~Character()
{
	while (charge-- > 0)
		delete inventaire[charge];
}

Character& Character::operator= (const Character &model)
{
	while (charge-- > 0)
		delete inventaire[charge];
	for (charge = 0; charge < model.charge; charge++)
		inventaire[charge] = model.inventaire[charge]->clone();
	charge = model.charge;
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (charge < 4 && m != NULL)
	{
		inventaire[charge] = m;
		charge++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
		inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < charge)
		inventaire[idx]->use(target);
}

