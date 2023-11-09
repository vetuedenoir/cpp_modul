#include "MateriaSource.hpp"

MateriaSource::MateriaSource () : charge(0) {}

MateriaSource::MateriaSource (const MateriaSource &copy)
{
	*this = copy;
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
	for (charge = 0; charge < 4; charge++)
		inventaire[charge] = model.inventaire[charge];
	charge = model.charge;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (charge < 4)
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