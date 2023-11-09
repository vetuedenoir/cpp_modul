#include "Character.hpp"

Character::Character (std::string &name) : charge(0) , name(name)
{}

Character::Character (const Character &copy)
{
	*this = copy;
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
	for (charge = 0; charge < 4; charge++)
		inventaire[charge] = model.inventaire[charge];
	charge = model.charge;
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
	if (charge < 4)
	{
		inventaire[charge] = m;
		charge++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4) // modulo ? memoir ?
		inventaire[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < charge)
		inventaire[idx]->use(target); 
}

