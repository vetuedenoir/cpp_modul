#include "Ice.hpp"

Ice::Ice (std::string const &type) : type(type) {}

Ice::Ice (const Ice &copie)
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
	std::Cout << "* shoots an ice bolt at " << target.getname() << " *" << std::endl;
}

