/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:25:49 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:25:50 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource () : charge(0) {}

MateriaSource::MateriaSource (const MateriaSource &copy)
{
	for (charge = 0; charge < copy.charge; charge++)
		inventaire[charge] = copy.inventaire[charge]->clone();
	charge = copy.charge;
}

MateriaSource::~MateriaSource()
{
	while (charge-- > 0)
		delete inventaire[charge];
}

MateriaSource& MateriaSource::operator= (const MateriaSource &model)
{
	while (charge-- > 0)
		delete inventaire[charge];
	for (charge = 0; charge < model.charge; charge++)
		inventaire[charge] = model.inventaire[charge]->clone();
	charge = model.charge;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (charge < 4 && m != NULL)
	{
		inventaire[charge] = m;
		charge++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	for (i = 0; i < charge; i++)
	{
		if (!type.compare(inventaire[i]->getType()))
			return (inventaire[i]->clone());
	}
	return (0);
}