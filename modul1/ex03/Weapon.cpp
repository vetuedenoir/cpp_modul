
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{

}

void Weapon::setType(std::string name)
{
	type = name;
}

const std::string &Weapon::getType()
{
	const std::string &get = type;
	return get;
}

Weapon::~Weapon ()
{

}
