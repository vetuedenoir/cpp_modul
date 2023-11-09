#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria	*inventaire[4];
	int			charge;
 public:
	MateriaSource ();
	MateriaSource (const MateriaSource &copy);
	~MateriaSource();

	MateriaSource& operator= (const MateriaSource &model);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif