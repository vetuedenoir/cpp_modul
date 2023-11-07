#ifndef "ICharacter.hpp"

ICharacter::ICharacter (std::string &name) : name(name) {}

ICharacter::ICharacter (const ICharacter &copy)
{
	*this = copy;
}

ICharacter::~ICharacter() {}

ICharacter& ICharacter::operator= (const ICharacter &model)
{
	type = model.type;
	return *this;
}
