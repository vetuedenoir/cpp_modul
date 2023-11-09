#include "AMateria.hpp"

AMateria::AMateria (std::string const &type) : type(type) {}

AMateria::AMateria (const AMateria &copie)
{
	*this = copie;
}

AMateria::~AMateria () {}

AMateria&	AMateria::operator= (const AMateria &model)
{
	type = model.type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return type;
} //Returns the materia type

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}
