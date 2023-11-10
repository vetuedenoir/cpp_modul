#include "Ice.hpp"

Ice::Ice (std::string const &type) : AMateria(type) {}

Ice::Ice () : AMateria("ice") {}

Ice::Ice (const Ice &copie) : AMateria(copie)
{
	*this = copie;
}

Ice::~Ice () {}

Ice&	Ice::operator= (const Ice &model)
{
	type = model.type;
	return *this;
}

Ice*	Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

