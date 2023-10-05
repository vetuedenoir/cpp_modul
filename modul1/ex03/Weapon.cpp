
#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	type = name;
}

void Weapon::setType(std::string name)
{
	type = name;
}

const std::string &Weapon::getType(void)
{
	const std::string &get = type;
	return get;
}
