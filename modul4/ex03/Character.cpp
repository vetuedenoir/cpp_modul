#include "Character.hpp"

Charactere::Character (std::string &name) : name(name), charge(0)
{}

Charactere::Character (const Character &copy)
{
	*this = copy;
}

Charactere::~Character()
{
	while (charge-- > 0)
		delete inventaire[charge];
}

Character& Charactere::operator= (const Character &model)
{
	while (charge-- > 0)
		delete inventaire[charge];
	for (charge = 0; charge < 4; charge++)
		inventaire[charge] = charachter.inventaire[charge];
	charge = character.charge;
	return *this;
}

std::string const & Charactere::getName() const
{
	return name;
}

void Charactere::equip(AMateria* m)
{
	if (charge < 4)
	{
		inventaire[charge] = m;
		charge++;
	}
}

void Charactere::unequip(int idx)
{
	if (idx < 4) // modulo ? memoir ?
		inventaire[idx] = NULL;
}

void Charactere::use(int idx, Character& target)
{
	if (idx < charge)
		inventaire[idx]->use(target); 
}

