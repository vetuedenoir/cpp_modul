#include "Cure.hpp"

Cure::Cure (std::string const &type) : type(type) {}

Cure::Cure (const Cure &copie)
{
	*this = copie;
}

Cure::~Cure () {}

Cure&	Cure::operator= (const Cure &model)
{
	type = model.type;
	return *this;
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::Cout << "* shoots an ice bolt at " << target.getname() << " *" << std::endl;
}

